#include<stdio.h>
int ten(int a){
   int t;
   int *m=&t;
   t=10*a;
   return *m;
}
int main(){
     int i=9;
     printf("value of %d after doing it 10 times=%d",i,ten(i));
     return 0;

     }
