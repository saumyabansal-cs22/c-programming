#include<stdio.h>
void sdigit(int a);
int main(){
    int x;
    printf("enter the number;");
    scanf("%d",&x);
    sdigit(x);


}
void sdigit(int a){
    int r,s=0;
    while(a!=0){
        r=a%10;
        s=s+r;
        a=a/10;

    }
    printf("sum of digits = %d ",s);
}
