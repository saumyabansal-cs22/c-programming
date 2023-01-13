#include<stdio.h>
void wrong_swap(int a,int b){
    int temp =a;
    a=b;
    b= temp;
}
void swap(int *a,int *b){
         int temp;
         temp=*a;
         *a=*b;
         *b=temp;
}
int main(){
     //call by reference value address se leta hai
     int x,y;
     scanf("%d %d",&x,&y);
     //wrong_swap(x,y);//will not work because of call by value;
     swap(&x,&y);
     printf("values of a and b after swapping\n");
     printf("values of x=%d\n",x);
     printf("value of y is=%d",y);
     return 0;

     }
