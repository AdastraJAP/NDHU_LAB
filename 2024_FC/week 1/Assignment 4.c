#include<stdio.h>
int main(){
    int a,b,c;
    float average;
    a=0;
    b=0;
    c=0;
    scanf("%d %d %d",&a,&b,&c);
    average=(a+b+c)/3.0;
    printf("%f",average);
    return 0;
}