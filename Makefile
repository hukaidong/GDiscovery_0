.PHONY: all
all:
	-g++ main.cpp --std=c++11 -O3 -o bin/main
	-g++ main.cpp --std=c++11 -O3 -DNOSAVE -o bin/main-nosave
	-g++ ptnsort.cpp --std=c++11 -O3 -o bin/sort
	-g++ ptnshow.cpp --std=c++11 -O3 -o bin/show

.PHONY: debug
debug:
	-g++ main.cpp --std=c++11 -ggdb -Wall -DDEBUG -o bin/main
	-g++ ptnsort.cpp --std=c++11 -ggdb -Wall -o bin/sort
	-g++ ptnshow.cpp --std=c++11 -ggdb -Wall -o bin/show

.PHONY: clean
clean:
	-rm -rf *.out *.app
