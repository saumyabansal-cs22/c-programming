#include<stdio.h>
void strong(int a, int b);
int main(){
    int s,m;
    printf("enter the values of interval;");
    scanf("%d %d",&s,&m);
    strong(s,m);
}
void strong(int a, int b){
    int i,j,s=0;
    for (i=a;i<=b;i++)
    {
        int r, n=i;
        while (i!=0)
        {
            r=i%10;
            int f=1;
            for (int j=1;j<=r;j++)
            {
                  f=f*j;
            }
            i=i/10;
            s=s+f;
        }
        
        if (n==s)
        {
            printf("%d",n);
        }
        
    }
    printf("%d",s);
    }

