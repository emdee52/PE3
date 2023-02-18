CXX = g++
CXXFLAGS = -std=c++20 -Wall

all: main

clean:
	rm main

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test

main: pe3_references.cpp
	$(CXX) $(CXXFLAGS) pe3_references.cpp -o main