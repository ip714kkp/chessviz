#include "board.h"
void vvod(char* board[][8]){
    char block = ' ';
/*                          старт          стоп              */
void movePawn(char *piece, int r, int c, int r_end, int c_end){
    board[r_end][c_end] = piece;
    board[r][c] = &block;
}

//main
    int end=0;
    int correctly=0;

    int z=1;
    while(end!=EOF) { //бесконечный цикл до ctrl+c
    printBoard(board); //вызов функции вывода доски
    
    if (z%2 != 0) { //проверка цвета хода
        white_color;
        printf ("Ход белых\n");
        zero_color;
    } else {
     	black_color;
        printf ("Ход черных\n");
        zero_color;
    }

    z++; //переход цвета хода


    printf("Введите начальное и конечное положение фигуры: \n");
    int r, r_end;
    char c, c_end;
    int int_c, int_c_end;
    char figure;
    char scan[700];
    char scan2[700];

    memset(scan,'0',8);
    
    scanf("%s",scan);

    //проверка на пешку

    if (scan[6]=='0') {
        if (z%2 != 0)
            scan2[0] = 'P';
        else 
            scan2[0] = 'p';
        
         for (int i = 0; i <= 6; i++)
             scan2[i+1] = scan[i];
    
         for(int i=0; i <= 7; i++)
             scan[i] = scan2[i];

    }



    /*проверка на дефис
    она нарочно делает в массив где
    лежит название фигуры, ложную букву,
    чтобы программа выдала ошибку*/

    if (scan[3]!='-')
        scan[0]='y';

  /*Распределение фигур из массива в переменные*/
    figure = scan[0];
    c = scan[1];
    r = scan[2]-'0';
    c_end = scan[4];
    r_end = scan[5]-'0';



       if (z%2 != 0){//проверка ввода фигур верного цвета
       	    if (figure!='P' && figure!='R' && figure!='N' && figure!='B' && figure!='Q' && figure!='K'){
       		    correctly=1;
       		    printf("Вы передвигаете фигуры белых, хотя играете за черных\n");
       	    }
       } else {
       	     if (figure != 'p' && figure != 'r'&& figure != 'n' && figure != 'b' && figure != 'q' && figure != 'k'){
       	     	    correctly = 1;
       	     	    printf("Вы передвигаете фигуры черных, хотя играете за белых\n");
       	     }
         }    






/*Замена обозначений доски на расположение фигур в массиве*/
     if (r==1){
        r=7;
      } else 
     if (r==2){
    r=6;}  else 
     if (r==3){
    r=5;} else 
    if (r==4){
    r=4;} else
     if (r==5){
    r=3;} else 
     if (r==6){
    r=2;} else 
     if (r==7){
    r=1;} else 
     if (r==8){
    r=0;} else{
      correctly=1;}



        if (c=='a'){
        int_c=0;} else 
     if (c=='b'){
    int_c=1;}  else 
     if (c=='c'){
    int_c=2;} else 
         if (c=='d'){
    int_c=3;} else 
         if (c=='e'){
    int_c=4;} else 
         if (c=='f'){
    int_c=5;} else 
         if (c=='g'){
    int_c=6;} else 
         if (c=='h'){
    int_c=7;} else {
    correctly=1;}



        if (r_end==1){
        r_end=7;} else 
     if (r_end==2){
    r_end=6;}  else 
     if (r_end==3){
    r_end=5;} else 
        if (r_end==4){
    r_end=4;} else
     if (r_end==5){
    r_end=3;} else 
     if (r_end==6){
    r_end=2;} else 
     if (r_end==7){
    r_end=1;} else 
     if (r_end==8){
    r_end=0;} else{
      correctly=1;}


     if (c_end=='a'){
        int_c_end=0;} else 
     if (c_end=='b'){
    int_c_end=1;}  else 
     if (c_end=='c'){
    int_c_end=2;} else 
         if (c_end=='d'){
    int_c_end=3;} else 
         if (c_end=='e'){
    int_c_end=4;} else 
         if (c_end=='f'){
    int_c_end=5;} else 
         if (c_end=='g'){
    int_c_end=6;} else 
         if (c_end=='h'){
    int_c_end=7;} else{
      correctly=1;}


correctly=move_check(figure,int_c, r, int_c_end, r_end);









if (correctly!=1){ //провекра на пустое место на доске
    if (*board[r_end][int_c_end]!=block){
        correctly = 1;
        printf ("В место куда вы хотите сходить уже стоит фигура\n");
    }
}


//проверка корректности хода
   if (correctly == 1){ //если ввод был не теми буквами или цифрами то выдаст ошибку
   printf ("Вы ввели неверное значение\n"); 
   z--; //откат цвета хода 
   correctly--; //откат корректности
   } else {

           if (*board[r][int_c]!=figure){//проверка соответствия буквы фигуры
           	    printf("Ошибка, введена не та фигура\n");
           	    z--;
           	    } else {
                    
                    movePawn(board[r][int_c], r, int_c, r_end, int_c_end); 
                    /*функция передвижения*/
            }
      }

    printf("\n\n");

    }

}









int move_check(char figure, int int_c, int r, int int_c_end, int r_end ){
if (figure=='P' || figure=='p'){
    if (figure=='p'){
        if(r==6){ //если фигура стоит на 2 ряду
            if (r-r_end !=2 && r-r_end !=1  ){ //нельзя больше 2 ходов
           	     return 1;
           	     if (int_c_end==int_c)
           	     printf("нельзя больше 2 ходов\n");
           } 
        } else {
            if (r-r_end !=1  ){ //нельзя больше 1 хода
           	     return 1;
           	     if (int_c_end==int_c)
           	     printf("нельзя больше 1 ходов\n");
           } 
        }
    }
    
    if (figure=='P'){
        if(r==1){ //если фигура стоит на 7 ряду
            if (r-r_end !=-2 && r-r_end !=-1  ){ //нельзя больше 2 ходов
               	     return 1;
               	     if (int_c_end==int_c)
           	     printf("нельзя больше 2 ходов\n");
           } 
        } else {
            if (r-r_end !=-1  ){ //нельзя больше 1 хода
           	        return 1;
           	        if (int_c_end==int_c)
           	        printf("нельзя больше 1 ходов\n");
           } 
        }
    }


    if (int_c_end!=int_c){
    	return 1;
     printf("нельзя двигаться по горизонтали\n");
    }
}

//конец проверки на пешку


//проверка на ладью

if (figure=='R' || figure=='r'){
int rook_c=1;

    if (int_c==int_c_end && (r_end>=0 && r_end<=7))
    rook_c=0; //ладья ходит по вертикали

	if (r==r_end && (r_end>=0 && r_end<=7))
    rook_c=0;// ладья ходит по горизонтали
     
    if (rook_c!=0){
    	return 1;
    printf("Ладья ходит только по горизонтали или вертикали\n");
    }
}

//конец проверки на ладью



// проверка на коня
if (figure=='n' || figure=='N'){
	int horse_c=1;
	if ((int_c==int_c_end-2 || int_c==int_c_end+2) && (r==r_end-1 || r==r_end+1)){
		horse_c=0;
	}


		if ((r==r_end-2 || r==r_end+2) && (int_c==int_c_end-1 || int_c==int_c_end+1)){
		horse_c=0;
	}

	    if (horse_c!=0){
    	return 1;
    printf("Конь ходит буквой г\n");
    }
}
//конец проверки на коня



//Проверка на слона

if (figure=='b' || figure=='B'){
	int bishop_c=1;

    if (int_c==int_c_end && (r_end>=0 && r_end<=7)){
    bishop_c=1;
    printf("слон не может ходить по вертикали\n");
    }

	if (r==r_end && (r_end>=0 && r_end<=7)){
    bishop_c=1;
    printf("слон не ходит по горизонтали\n");
    }

    for(int i=0; i<=7; i++){ //проход по всем вертикалям и диагоналям

    if (int_c==int_c_end+i && r==r_end-i){
        if (int_c+r==int_c_end+r_end) //вниз налево со строны белых
        	bishop_c=0;

    }
    if (int_c==int_c_end-i && r==r_end-i){
        if (int_c-r==int_c_end-r_end) //вниз направо со строны белых
              bishop_c=0;
    }

     if (int_c==int_c_end+i && r==r_end+i){
     	if (int_c-r==int_c_end-r_end) //наверх налево со строны белых
               bishop_c=0;
        }

    if (int_c==int_c_end-i && r==r_end+i){

    	if (int_c+r==int_c_end+r_end)//наверх направо со стороны белых
            bishop_c=0;
 
        }

}



	    if (bishop_c!=0){
    	return 1;
    printf("Слон ходит по диагонали\n");
    }


 }

//конец провекри на слона





//Проверка на короля
if (figure=='k' || figure=='K'){
	int king_c=1;

    if ((int_c==int_c_end+1 || int_c==int_c_end-1) && r==r_end){
    	king_c=0;
    }
    if ((r==r_end+1 || r==r_end-1)&& int_c==int_c_end ){
        king_c=0;
    }

    if (int_c==int_c_end+1 && r==r_end+1){
        king_c=0;
    }
    if (int_c==int_c_end+1 && r==r_end-1){
        king_c=0;
    }
    if (int_c==int_c_end-1 && r==r_end-1){
        king_c=0;
    }
    if (int_c==int_c_end-1 && r==r_end+1){
        king_c=0;
}
    if (king_c!=0){
    	return 1;
    printf("Король может ходить куда угодно лишь на одну клетку\n");
    }

}
//конец проверки на короля


//Проверка на ферзя
if (figure=='q' || figure=='Q'){

	int queen_c=1;

    if (int_c==int_c_end && (r_end>=0 && r_end<=7))
    queen_c=0; //королева ходит по вертикали

	if (r==r_end && (r_end>=0 && r_end<=7))
    queen_c=0;// королева ходит по горизонтали

       for(int i=0; i<=7; i++){ //проход по всем вертикалям и диагоналям

    if (int_c==int_c_end+i && r==r_end-i){
        if (int_c+r==int_c_end+r_end) //вниз налево со строны белых
        	queen_c=0;

    }
    if (int_c==int_c_end-i && r==r_end-i){
        if (int_c-r==int_c_end-r_end) //вниз направо со строны белых
              queen_c=0;
    }

     if (int_c==int_c_end+i && r==r_end+i){
     	if (int_c-r==int_c_end-r_end) //наверх налево со строны белых
               queen_c=0;
        }

    if (int_c==int_c_end-i && r==r_end+i){

    	if (int_c+r==int_c_end+r_end)//наверх направо со стороны белых
            queen_c=0;
 
        }

}


     
    if (queen_c!=0){
    	return 1;
    printf("Королева ходит по вертикали, горизонатли и диагонали\n");
    }

}
return 0;    
}//конец функции






