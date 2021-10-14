# variables
main = ./main
trie = ./trie

appTrie: $(main).o $(trie).o
	gcc $(main).o $(trie).o -o app

# sources
main.o: $(main).c
	gcc -c $(main).c -o $(main).o
trie.o: $(trie).c
	gcc -c $(trie).c -o $(trie).o

# mute rules
.PHONY: clean # make clean

clean:
	rm -rf ./*.o
