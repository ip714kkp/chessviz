#ifndef one
#define one
#include <stdio.h>
#include <string.h>
#define black_color printf("%s","\033[1;30m")
#define white_color printf("%s","\033[1;37m")
#define blue_color printf("%s","\033[1;36m")
#define zero_color printf("%s","\033[0m")
int move_check(char figure, int int_c, int r, int int_c_end, int r_end);
void printBoard(char* board[][8]);
void vvod(char* board[][8]);
void colorBoard(int c, int r);
#endif