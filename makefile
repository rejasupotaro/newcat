CC=g++

newcat : newcat.o read_file.o
	$(CC) -o newcat newcat.o read_file.o

newcat.o : newcat.cpp
	$(CC) -c newcat.cpp -lncurses

read_file.o : read_file.cpp
	$(CC) -c read_file.cpp -lncurses
