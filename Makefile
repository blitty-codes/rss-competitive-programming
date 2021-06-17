# variables
file = Trie
node = ./$(file)/trie
main = ./$(file)/main

# executables
app: $(main).o $(node).o
	gcc $(main).o $(node).o -o app

# sources
node.o: $(node).c
	gcc -c $(node).c -o $(node).o
main.o: $(main).c
	gcc -c $(main).c -o $(main).o

# mute rules
.PHONY: clean # make clean

clean:
	rm -rf ./$(file)/*.o