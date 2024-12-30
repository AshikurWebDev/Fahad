#include <stdio.h>
int main(){
    int n1, n2, sum;
    //Getting input from user
    printf("Enter a number to add\n");
    printf("Num1: ");
    scanf("%d", &n1);
    printf("\n Num2: ");
    scanf("%d", &n2);
    sum = n1 + n2;

    printf("Summation is: %d", sum);
    return 0;
}