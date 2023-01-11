#include<stdio.h>
void reverse(int a){
  int i,r,n=a,d=0;
  while (a!=0)
  {
    r=a%10;
    d=d*10+r;
    a=a/10;
  }
   
        printf("%d",d);
}
int main(){
    int x;
    printf("enter the element;");
    scanf("%d",&x);
    reverse(x);

}
