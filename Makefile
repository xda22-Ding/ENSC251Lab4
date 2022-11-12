#compile and link the application
all: main

#run the application
run: main
	./main

#link main.o and stack.o to executable main
main: main.o stack.o
	g++ -g -o main main.o stack.o

#compile the main.cpp to main.o
main.o: main.cpp stack.hpp
	g++ -g -c main.cpp

#compile the stack.cpp to stack.o
stack.o: stack.cpp stack.hpp
	g++ -g -c stack.cpp

#remove built files
clean:
	rm -rf main main.o stack.o *~
