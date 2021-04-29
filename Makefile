# variables
node = ./tree/node.c
main = ./main.c

# executables
app: main.o node.o
	gcc main.o node.o -o app

# sources
node.o: $(node)
	gcc -c $(node)
main.o: $(main)
	gcc -c $(main)

# mute rules
.PHONY: clean # make clean

clean:
	rm -rf *.o
