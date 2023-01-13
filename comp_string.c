#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
     char b[100],r;
     scanf("%[^\n]s",a);
     scanf("%c",&r);
     scanf("%[^\n]s",b);
     int i,k=0;
     for(i=0;a[i];i++){
        if (strlen(b)!=strlen(a)){
            k=1;
        }
        else{
            int flag=0;
            for (int j=0;a[j];j++){
                if (b[j]==a[j]){
                    flag=1;
                }}
            if (flag==1){
                k=0;
            
            }
           
            
        }
        
     }
     if (k==1){
        printf("both the strings are not equal;");

     }
     else{
        printf("both the strings are equal;");
     }
     
     return 0;

}
     
