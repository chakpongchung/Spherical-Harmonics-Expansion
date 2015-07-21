# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g
BOOSTFLAGS = -L/usr/local/lib
GSLFLAGS = -lgsl -lgslcblas -lm
# ****************************************************
# Targets needed to bring the executable up to date

sph: sph.o sh.o
	$(CXX) $(CXXFLAGS) -o sph sph.o sh.o $(GSLFLAGS)

# The main.o target can be written more simply

sph.o: sph.cpp sh.h
	$(CXX) $(CXXFLAGS) -c sph.cpp

sh.o: sh.h


clean:
	-rm *.o *.out *.csv