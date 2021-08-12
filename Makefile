MountainMaker = ./bin/MountainMaker

CXX = g++

CXXFLAGS = -Wall -pedantic -ansi -std=c++20 -I. -I./include/

OBJS = ./build/main.o ./build/ppm.o

MountainMaker: $(MountainMaker)

$(MountainMaker): $(OBJS)
	$(CXX) $^ $(CPPFLAGS) -o $@


./build/main.o: ./src/main.cpp
	$(CXX) -c $(CPPFLAGS) $< -o $@


./build/ppm.o: ./src/ppm.cpp ./include/ppm.hpp
	$(CXX) -c $(CPPFLAGS) $< -o $@

