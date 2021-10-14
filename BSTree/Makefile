# variables
node = ./node
main = ./main
tree = ./tree

# executables
appTree: $(main).o $(node).o $(tree).o
	gcc $(main).o $(node).o $(tree).o -o app

# sources
node.o: $(node).c
	gcc -c $(node).c -o $(node).o
main.o: $(main).c
	gcc -c $(main).c -o $(main).o
tree.o: $(tree).c
	gcc -c $(tree).c -o $(tree).o

# mute rules
.PHONY: clean # make clean

clean:
	rm -rf ./*.o