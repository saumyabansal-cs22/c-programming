#include<stdio.h>
void sumeo(int a,int b);
int main(){
    int x, y;
    printf("enter the numbers;");
    scanf("%d %d",&x,&y);
    sumeo(x,y);
    return 0;
}
void sumeo(int a,int b)
{
    int s=0,m=0;
    for(int i=a;i<=b;i++)
    
    {
       
        if (i%2==0){
            s=s+i;
        }
        else
           m=m+i;
        
    }
    

  printf("sum of even integers; %d\n",s);
  printf("sum of odd integers; %d",m);
}
