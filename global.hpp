#ifndef GLOBAL_H
#define GLOBAL_H value
#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iterator>
#include <algorithm>

typedef u_int64_t rectype;

std::vector<int>
  center_coors, center_trangle_coors, origin_coors, center_flip_coors, origin_left,
  bottom_origin_in_target_coors, bottom_origin_in_target_coors_extra,
  left_origin_in_target_coors, left_origin_in_target_coors_extra;

int origin_size, center_size, target_size, map_pos_offset;
std::string origin_file, target_file;
std::ifstream origin_file_stream;
std::ofstream target_file_stream;

std::vector<rectype> origin_ptn, target_ptn,
  origin_l_strides, origin_b_strides,
  get_ptn;
std::vector<int> origin_arr, target_arr;
std::map<rectype, rectype> origin_map;

rectype origin_btm_mask, target_btm_mask, map_offset_mask,
        origin_ptn_size;

rectype getOriginTop(rectype);
rectype getOriginBottom(rectype);
void getpartialptnsfromfile(int, int);

#endif /* ifndef GLOBAL_H */