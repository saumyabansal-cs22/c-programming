#include<stdio.h>
 int func(void);    
 int main(){
    //int a;
    //a=func();
    printf("%d",func());
    return 0;  

 }
 int func(void){
    int n,s=0;
    for (n=1;n<=25;n++){
        if (n%2!=0)
        s=s+n*n;

    }
    return s;
 }
