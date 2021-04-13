test: linkedlist.h node.h 
	g++ *.cpp -o test
	./test
lib:
	g++ -c linkedlist.cpp node.cpp 
	ld -relocatable linkedlist.o node.o -o lib.o
clean: 
	rm -rf *.o test .vscode