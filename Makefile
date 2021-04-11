test: test.cpp linkedlist.o node.o
	g++ test.cpp linkedlist.o node.o -o test
linkedlist.o: linkedlist.cpp linkedlist.h
	g++ -c linkedlist.cpp
node.o: node.cpp node.h 
	g++ -c node.cpp
# clean work on linux 
clean: 
	rm -rf *.o test