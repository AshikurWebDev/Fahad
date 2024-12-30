#include <stdio.h>
// int main(){
//     float L,W,area ;
//     printf("enter length: ");
//     scanf("%f",&L);
//     printf("\n enter width: ");
//     scanf("%f",&W);
//     area= L*W;
//     printf("area of rectengle %.2f", area);

// }

int area(){
    float l, w, a;
    printf("enter the length & width ");
    scanf("%f, %f", &l, &w);
    a = l*w;
    printf("\n Area of rectangular: %.2f", a);
}