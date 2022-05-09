#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
   
    int c=0;
    printf("Enter the string: ");
    gets(string); 
    
    if (strlen(string)<=3&&strcmp(string,"the")==0){
       c=1;
    }
    else{
        char a[4];
        int p=0;
        for(int i=0;i<strlen(string);i++){
            
            if(strlen(a)<3){
                a[p++]=string[i];
            }
            else if(strlen(a)==3){
                if(strcmp(a,"the")==0){
                    c++;
                }
                for(int j=0;j<strlen(a);j++){
                    a[j]=a[j+1];
                }
                a[strlen(a)]=string[i];
            }
            //printf("%s\n",a);

        }
        if(strcmp(a,"the")==0){c++;}
       
    }
    
    printf("The number of times 'the' is present in the string '%s' is %d.",string,c);
}
    
