main: main.o funcs.o
	g++ -o main main.o funcs.o

main.o: funcs.h main.cpp
	g++ -c main.cpp funcs.h

funcs.o: funcs.h funcs.cpp
	g++ -c funcs.cpp funcs.h


