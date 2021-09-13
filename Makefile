# variables
file = tree
node = ./$(file)/node
main = ./$(file)/main
tree = ./$(file)/tree

# executables
appTrie: $(main).o $(node).o
	gcc $(main).o $(node).o -o app

appTree: $(main).o $(node).o $(tree).o
	gcc $(main).o $(node).o $(tree).o -o app

# sources
node.o: $(node).c
	gcc -c $(node).c -o $(node).o
main.o: $(main).c
	gcc -c $(main).c -o $(main).o
tree.o: $(tree).c -o $(tree).o
	gcc -c $(tree).c -o $(tree).o

# mute rules
.PHONY: clean # make clean

clean:
	rm -rf ./$(file)/*.o