#include<stdio.h>
void power(int a, int b);
int main(){
    int x,y;
    printf("enter the numbers;");
    scanf("%d %d",&x,&y);
    power(x,y);}

void power(int a,int b){
    int i;
    int p=1;
    for (i=1;i<=b;i++){
        p=p*a;
    }
    printf("%d",p);
}
