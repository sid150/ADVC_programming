

#include <stdio.h>

int main()
{
    
    char a[100];
    printf("Enter a string containing only 0's and 2's :");
    scanf("%s",a);
    int c=0,s=0,tr=0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]=='0' && c==1&&s>0){
            printf("%d occurence is the string 0",tr+1);
            for(int t=0;t<s;t++){
                printf("2");
            }
            printf("0\n");
            tr++;
            s=0;
            c=0;
            i--;
        }
        else if(a[i]=='0'&&c==1){
            c=0;
            i--;
        }
        else if(a[i]=='0'){
            c++;
        }
        else if(a[i]=='2'){
            s++;
        }
        
        
        
        
    }
    printf("Total occurences of the pattern 0(2+)0 is %d",tr);

    return 0;
}
