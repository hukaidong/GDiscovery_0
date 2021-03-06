#include "global.hpp"
#include "slice1.cpp"
#include "slice2.cpp"
#include "slice3.cpp"

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

int main(int argc, const char* argv[]) {
  rectype data_size, ptn_size, target_size;
  std::string ifname;
  std::vector<rectype> patterns;

  if (argc != 3) { std::cerr << "Unsupported arguments" << std::endl; exit(1);}
  ifname = std::string(argv[1]);
  target_size = std::stoi(argv[2]);

  std::ifstream read(ifname,
      std::ios::in | std::ios::binary | std::ios::ate);

  data_size = read.tellg();
  ptn_size = data_size / sizeof(rectype);
  read.seekg(0);

  patterns.resize(ptn_size);
  read.read((char*)patterns.data(), data_size);
  init_target_size(target_size);
  init_coors();
  reset_arr();
  for (auto &ptn: patterns) {
    setTargetArrayToNumByCoor(ptn, target_coors);
    showTargetArrays();
  }
}
