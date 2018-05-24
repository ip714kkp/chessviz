CFLAGS = -Wall -Werror -std=c99
OBJ = gcc -c $< -o $@ $(CFLAGS)

.PHONY: all clean

all:folder folder2 bin/chess.exe

folder:
	mkdir build 

folder2:
	mkdir bin 

bin/chess.exe: build/main.o build/board_print_plain.o build/board.o 
	gcc $^ -o $@ $(CFLAGS)

build/main.o: src/main.c
	$(OBJ)

build/board_print_plain.o: src/board_print_plain.c 
	$(OBJ)


build/board.o: src/board.c src/board.h
	$(OBJ)


clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin