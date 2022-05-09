#include<stdio.h>
#define loop(x,i) for(i=0;i<x;i++)
#define print(x) printf("%d\t",x);

int main(){
    int x,y;//dimensions of the matrix
    printf("Enter the dimensions of the matrix: ");
    scanf("%d %d",&x,&y);
    int arr[x][y];
    int i,j;
    printf("Enter the values of matrix: ");
    loop(x,i){
        loop(y,j){
            scanf("%d",&arr[i][j]);
        }
    }
    int transp[y][x];
    printf("The matrix is: \n");
    loop(x,i){
        loop(y,j){
            print(arr[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of the matrix is: \n");
    loop(y,i){
        loop(x,j){
            transp[i][j]=arr[j][i];
            print(transp[i][j]);
        }
        printf("\n");
    }
    
}