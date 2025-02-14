#include <stdio.h>

int main(){
    float r,area,pie;
    scanf("%f",&r);
    pie = 3.14;
    area = r*pie*r;
    printf("Area: %.2f",area);
    return 0;
}