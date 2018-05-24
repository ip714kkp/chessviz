#include "board.h"
void printBoard(char* board[][8]){
  printf("\n");
        int i_i=0;
        int numeral_board=8;
        for (int r = 0; r < 8; r++){
            for (int c = 0; c < 8; c++){
                
                if (i_i==0 || i_i==8 || i_i==16 || i_i==24 || i_i==32
                    || i_i==40 || i_i==48 || i_i==56){
                  //blue_color;
                printf("\t\t%d", numeral_board);
                //zero_color;
                  numeral_board--;}  //для нумерации по столбцу

                colorBoard(c,r);
                i_i++;
                printf("|");
                zero_color;
                printf("%c", *(board[r][c]));
                colorBoard(c,r);
                printf("|");
                zero_color;
 
            }
            printf("\n");
        }
        //blue_color; 
        printf("\t\t  a  b  c  d  e  f  g  h\n"); //нумерация по вертикали
        zero_color;
    }

        void colorBoard(int c, int r){
              if (r%2 == 0){ //если строка нечётная то
                      if (c%2 == 0 )
                          white_color;
                     else
                    white_color;
                  }

                  if (r%2 != 0){ //если строка чётная то
                      if (c%2 != 0 )
                          white_color;
                           else 
                         white_color;
                  }     

    }