#include <stdio.h>
int main(void){
    int age;
    printf("Enter a age: ");
    scanf("%d", &age);
    if(age != 0){
       if(age >= 18 ){
            printf("Your are eligible for NID card");
            }else{
            printf("You are not eligible for NID card");
            }
    }else{
        printf("Please enter a age.");
    }
    return 0;
}