#include<stdio.h>
#include<stdlib.h>
// int main(int argc, char *argv[]){
//     int i,n;
//     for(i=1;i<argc;i++){
//         n=atoi(argv[i]);
//         printf("argv[%d]=%d is %s\n",i,n,(n%2)&&(n!=5)?"odd":"even");
//     }
// }


typedef struct{
    int a;
    int b;
    struct{
        int ar[10];
    }sob;
}bob;
// enum day{Mon=5,t,y,u,p};
// typedef enum day tt;

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
}
int main(){
    int n=9;
    bob first={1,2,{3,3,6,2,4,46,6,2,2}};
    sort(first.sob.ar,n);
    for(int i=0;i<n;i++){
        printf("%d ",first.sob.ar[i]);
    }
}