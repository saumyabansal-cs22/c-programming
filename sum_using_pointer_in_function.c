#include<stdio.h>
void sumandAvg(int a, int b, int *sum,float *avg){
    *sum=a+b;
    *avg=(float)((a+b)/2);
}
int main(){
    int x,y,sum;
    float avg;
    scanf("%d",&x);
    scanf("%d",&y);
    sumandAvg(x,y,&sum,&avg);
    printf("the value of sum is %d\n",sum);
    printf("the value of avg is %f\n",avg);
     return 0;

     }
