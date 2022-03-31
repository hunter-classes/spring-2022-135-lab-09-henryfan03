main: main.o funcs.o coord3d.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

coord3d.o: coord3d.h

funcs.o: funcs.cpp funcs.h coord3d.h

main.o: main.cpp funcs.h coord3d.h

tests.o: tests.cpp doctest.h funcs.h coord3d.h

clean:
	rm -f main tests main.o funcs.o tests.o
