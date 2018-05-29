CFLAGS = -Wall -Werror -std=c99
OBJ = gcc -c $< -o $@ $(CFLAGS)

.PHONY: all clean

all:folder folder2 bin/test bin/chess.exe

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

build/test.o: test/test.c
	gcc -Wall -c test/test.c -o build/test.o -Ithirdparty -Isrc


build/first_test.o: test/first_test.c
	gcc -Wall -c test/first_test.c -o build/first_test.o -Ithirdparty

bin/test: build/board.o build/test.o build/board_print_plain.o build/first_test.o 
	gcc -Wall build/board.o  build/test.o build/board_print_plain.o build/first_test.o -o bin/test


clean:
	rm build/*.o
	rm bin/*.exe
	rm bin/test
	rm -R build
	rm -R bin