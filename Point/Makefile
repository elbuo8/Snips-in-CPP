all: PointRunner

PointRunner: Point.o PointList.o Runner.o
	c++ -o PointRunner Runner.o Point.o PointList.o

Runner.o: Runner.cpp Point.h PointList.h
	c++ -c Runner.cpp

Point.o: Point.cpp Point.h
	c++ -c Point.cpp

PointList.o: PointList.cpp PointList.h Point.h
	c++ -c PointList.cpp

clean:
	rm -rf *.o

pack:
	tar cvzf PointRunner.tgz *.cpp *.h Makefile
