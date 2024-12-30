#include <stdio.h> 
int main() {
    int yr;
    //functoin 
    printf("Enter a year: ");
    scanf("%d", &yr);
    if(yr%400 == 0){
        printf("Year %d is leap year", yr);
    } else if(yr%100 != 0 && yr%4 ==0){
         printf("Year %d is leap year", yr);
    }else{
        printf("!Ooops. Year %d is not Leap year");
    }
}