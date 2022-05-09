#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the sides of the triangle:");
    scanf("%d %d %d",&a,&b,&c);
    (a<b+c &&b<a+c &&c<a+b)?printf("Valid triangle"):printf("Not valid");
}
