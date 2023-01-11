#include<stdio.h>
void max(int a,int b);
void min(int a,int b);
int main(){
   int a,b;
   printf("enter the two numbers;");
   scanf("%d %d",&a,&b);
   max(a,b);
   min(a,b);
}
void max(int a,int b){
    if (a>b)
    printf("maximum %d \n",a);
    else
    printf("maximum %d\n",b);
}
void min(int a,int b){
    if (a<b)
    printf("minimum %d \n",a);
    else
    printf("minimum %d \n",b);
}

