#include <stdio.h>

int main(){
    /*Variable
        Not accepted 
        =============
        1. 1fahad
        2. *abcd
        3. abd ad

        Accepted        Case sensitive:  Heml =! heml
        ==========
        1. product
        2. ProductName
        3. Num1
        2. _Num2_
    */ 

//    int x;
//    int y; 

   int x, y, sum, sub, mul;
   float div, num1, num2;
   x = 10;
   y = 13;
   num1 = 10;
   num2 = 13; 
    sum = x + y;
    div = num1 / num2;
    sub = x - y;
    mul = x * y;

    printf("Summation of the x & y is : %d \n", sum);
    printf("The division of x & y is: %.2f \n", div);
    printf("mul of the x & y is : %d \n", mul);
    printf("sub of the x & y is : %d \n", sub);




    // Character data type check 

    char a;
    a = 'x';
    printf("Printing the  charcter for the first time: %c", a);
}