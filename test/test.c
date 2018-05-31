#include <ctest.h>
#include "board.h"

CTEST(move, move_pawn) // Ход пешки 
{	
    const int Zero = 0;
    const int One = 1;
    char figure='p';
    int int_c=0; 
    int r=6; 
    int int_c_end=0;
    int r_end=5;
     
    int check1 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check1);//провека на один ход

     int_c=3;
     r=6;
     int_c_end=3;
     r_end=4;

    int check2 = move_check(figure, int_c, r, int_c_end, r_end ); 
	ASSERT_EQUAL(Zero, check2);//проверка на 2 хода

     int_c=4;
     r=6;
     int_c_end=3;
     r_end=4;

    int check3 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check3);//проверка на 3 хода

     int_c=7;
     r=6;
     int_c_end=5;
     r_end=6;

    int check4 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check4);//проверка на диагональ навлево

     int_c=6;
     r=6;
     int_c_end=7;
     r_end=6;

    int check5 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check5);//проверка на диагональ направо



}

CTEST(move, move_rook) // Ход ладьи
{	
    const int Zero = 0;
    const int One = 1;
    char figure='r';
    int int_c=0; 
    int r=7; 
    int int_c_end=0;
    int r_end=4;
     
    int check1 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check1);//провека на вертикаль

     int_c=0;
     r=7;
     int_c_end=7;
     r_end=7;

    int check2 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check2);//провека на горизонталь

 
     int_c=0;
     r=7;
     int_c_end=7;
     r_end=0;

    int check3 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check3);//провека на диагональ налево


     int_c=7;
     r=7;
     int_c_end=0;
     r_end=0;

    int check4 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check4);//провека на диагональ направо

}

CTEST(move, move_knight) // Ход коня
{	
    const int Zero = 0;
    const int One = 1;
    char figure='n';
    int int_c=1; 
    int r=7; 
    int int_c_end=2;
    int r_end=5;
     
    int check1 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check1);//провека на г


     int_c=1;
     r=7;
     int_c_end=6;
     r_end=7;

    int check2 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check2);//провека на ход вперед


     int_c=1;
     r=7;
     int_c_end=5;
     r_end=7;

    int check3 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check3);//провека на вертикаль

     int_c=7;
     r=7;
     int_c_end=3;
     r_end=7;

    int check4 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check4);//провека на горизонталь

     int_c=1;
     r=7;
     int_c_end=3;
     r_end=6;

    int check5 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check5);//провека на перевернутую налево затем инвертированную г*/

}

CTEST(move, move_bishop) // Ход слона
{	
    const int Zero = 0;
    const int One = 1;
    char figure='b';
    int int_c=2; 
    int r=7; 
    int int_c_end=3;
    int r_end=6;
     
    int check1 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check1);//провека диагональ


     int_c=5;
     r=7;
     int_c_end=0;
     r_end=2;

    int check2 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check2);//провека на диагональ

     int_c=2;
     r=7;
     int_c_end=2;
     r_end=3;

    int check3 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check3);//провека на вертикаль

     int_c=2;
     r=7;
     int_c_end=7;
     r_end=7;

    int check4 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check4);//провека на горизонталь


}

CTEST(move, move_king) // Ход короля
{	
    const int Zero = 0;
    const int One = 1;
    char figure='k';
    int int_c=4; 
    int r=7; 
    int int_c_end=4;
    int r_end=6;
     
    int check1 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check1);//провека диагональ на один ход


  
     int_c_end=4;
     r_end=5;

    int check2 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check2);//провека на диагональ на 2 хода

     int_c_end=3;
     r_end=7;

    int check3 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check3);//провека налево на один ход


  
     int_c_end=2;
     r_end=7;

    int check4 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check4);//провека налево на 2 хода
     
     int_c_end=5;
     r_end=7;

       int check5 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check5);//провека направо на один ход


  
     int_c_end=6;
     r_end=7;

    int check6 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check6);//провека направо на 2 хода

     int_c_end=3;
     r_end=6;

    int check7 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check7);//провека диагональ на 1 ход

     int_c_end=5;
     r_end=6;

    int check8 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check8);//провека диагональ на 1 ход
     
     int_c_end=2;
     r_end=5;

    int check9 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check9);//провека диагональ на 2 хода

    int_c_end=6;
    r_end=5;

    int check10 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check10);//провека диагональ на 2 хода


}

CTEST(move, move_queen) // Ход короля
{	
    const int Zero = 0;
    const int One = 1;
    char figure='q';
    int int_c=3; 
    int r=7; 
    int int_c_end=3;
    int r_end=0;
     
    int check1 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check1);//провека на вертикаль

 
     int_c_end=0;
     r_end=7;

    int check2 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check2);//провека на горизонталь

     int_c_end=1;
     r_end=5;


    int check3 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check3);//провека на диагональ налево


     int_c_end=6;
     r_end=4;


    int check4 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(Zero, check4);//провека на диагональ направо

     int_c_end=2;
     r_end=5;

       int check5 = move_check(figure, int_c, r, int_c_end, r_end ); 
    ASSERT_EQUAL(One, check5);//ошибочный ход

}