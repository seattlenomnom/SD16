# makefile for sd16
#
sd16: sd16.cpp
	g++ -std=c++11 -Wall -g sd16.cpp -o ./Build/DEBUG/sd16

.PHONY: clean
clean:
	rm Build/DEBUG/*

