default: all

build: all

all: main.o szablony.h
	g++ main.o -o a.exe

clean:
	rm -rf *.o a.exe


