default: all

build: all

all: Complex.o main.o
	g++ Complex.o main.o -o a.exe

clean:
	rm -rf main.o Complex.o a.exe


