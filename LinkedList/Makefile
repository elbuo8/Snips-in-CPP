all: Runner

Runner: Runner.o List.o
	c++ -o Runner Runner.o List.o

Runner.o: Runner.cpp List.h
	c++ -c Runner.cpp

List.o: List.cpp List.h
	c++ -c List.cpp

clean:
	rm -rf *.o

pack:
	tar cvzf List.tgz *.cpp *.h Makefile
