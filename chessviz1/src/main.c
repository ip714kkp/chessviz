#include "board.h"
#include <guard>
int main()
{
    
	char *board[8][8];
    char white_pawn = 'p';
    char white_rook = 'r';
    char white_night = 'n';
    char white_bishop = 'b';
    char white_queen = 'q';
    char white_king = 'k';
    char black_pawn = 'P';
    char black_rook = 'R';
    char black_night = 'N';
    char black_bishop = 'B';
    char black_queen = 'Q';
    char black_king = 'K';
    char block = ' ';

                                                  

    
    void initBoard(){
    	for(int i = 0; i < 8; i++){
    		for(int j = 0; j<8; j++){
    			if(i==6){
    				board[i][j] = &white_pawn;
                }
                else if (i != 7 || 1 !=0 || i != 1 || i !=6){
                	board[i][j]=&block;
                }

                if(i==1)
    				board[i][j] = &black_pawn;
    		}
    	}
    

    board[7][0]=&white_rook;
    board[7][1]=&white_night;
    board[7][2]=&white_bishop;
    board[7][3]=&white_queen;
    board[7][4]=&white_king;
    board[7][5]=&white_bishop;
    board[7][6]=&white_night;
    board[7][7]=&white_rook;

    board[0][0]=&black_rook;
    board[0][1]=&black_night;
    board[0][2]=&black_bishop;
    board[0][3]=&black_queen;
    board[0][4]=&black_king;
    board[0][5]=&black_bishop;
    board[0][6]=&black_night;
    board[0][7]=&black_rook;
        }

    initBoard();

    vvod(board);

    return 0;
}
