#include<stdio.h>
void palindrome(int a);
int main(){
    int x;
    printf("enter the number;");
    scanf("%d",&x);
    palindrome(x);
}
void palindrome(int a){
    int n=a,r,d=0;
    while(a!=0){
          r=a%10;
          d=d*10+r;
          a=a/10;
    }
    if (d==n)
    printf("it is a palindrome;");
    else
    printf("It is not a palindrome;");
}