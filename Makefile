default: all

build: all

all: Figura.o Czworokat.o Prostokat.o Kwadrat.o main.o
	g++ Figura.o Czworokat.o Prostokat.o Kwadrat.o main.o -o a.exe

clean:
	rm -rf *.o a.exe


