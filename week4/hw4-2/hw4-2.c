/*
Computer Programming : hw4-2
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    (a+b>c && a+c>b && b+c>a)?printf("Triangle is valid."):printf("Triangle is not valid.");
}