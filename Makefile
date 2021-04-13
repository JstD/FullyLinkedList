test: linkedlist.h node.h 
	g++ *.cpp -o test
	./test
clean: 
	rm -rf *.o test .vscode