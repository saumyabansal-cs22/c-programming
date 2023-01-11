#include<stdio.h>
 void find(int x);
 int main(){
    int a;
    printf("enter the number; \n");
    scanf("%d",&a);
    
    find(a);
    return 0;
 }
 void find(int x){
    //int x;
    if(x%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
 }
