math: overloading-struct.o utils.o
	g++ overloading-struct.o utils.o -o math

utils.o: utils.cpp
	g++ -c utils.cpp

overloading-struct.o: overloading-struct.cpp
	g++ -c overloading-struct.cpp

clean:
	rm *.o math