all: RectangleListRunner

RectangleListRunner: RectangleListRunner.o Rectangle.o RectangleList.o
	c++ -o RectangleListRunner Rectangle.o RectangleList.o RectangleListRunner.o

RectangleListRunner.o: RectangleListRunner.cpp Rectangle.cpp RectangleList.cpp Rectangle.h RectangleList.h
	c++ -c RectangleListRunner.cpp Rectangle.cpp RectangleList.cpp

RectangleList.o: RectangleList.cpp RectangleList.h Rectangle.cpp Rectangle.h
	c++ -c RectangleList.cpp Rectangle.cpp

Rectangle.o: Rectangle.cpp Rectangle.h
	c++ -c Rectangle.cpp

clean:
	rm -rf *.o

pack:
	tar cvzf RectangleListRunner.tgz *.cpp *.h Makefile
