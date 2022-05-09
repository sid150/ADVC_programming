#include<stdio.h>
int main(){
    int w;
    printf("Enter wieght of boxer(in pounds): ");
    scanf("%d",&w);
    w<115?printf("Fly weight"):w<=121?printf("Bantam"):w<=153?printf("Feather weight"):w<=189?printf("Middleweight"):w>=190?printf("Heavyweight"):printf("Invalid");}
