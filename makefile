
bin/jsonio: jsonio.hpp jsonio.cpp
	mkdir -p bin
	c++ -std=c++20 -o bin/jsonio jsonio.cpp

run: bin/jsonio
	bin/jsonio
