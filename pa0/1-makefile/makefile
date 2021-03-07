targets: hello.o
		g++  -o hello hello.o
hello.o: hello.h hello.cpp
		g++ -c hello.cpp
clean:
		rm -r hello *.o
