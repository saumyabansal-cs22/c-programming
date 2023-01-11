#include<stdio.h>
int prime(int a, int b);
int main(){
    int x,y;
    printf("enter the values of the interval;");
    scanf("%d %d",&x,&y);
    prime(x,y);

}
int prime(int a,int b)
{
    int i;
    for (i=a;i<=b;i++){
        for(int j=0;j<=i;j++){
            if (i%j==0)
            {
                printf("%d",i);

            }

        }
}
}