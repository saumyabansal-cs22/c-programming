#include<stdio.h>
void mami(int a[],int n);
int main(){
    int n;
    printf("enter size of array;");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    mami(a,n);
     return 0;

     }
void mami(int a[], int n)
   {
    int max=a[0],min=a[0];
    for (int i=1;i<n;i++){
           if (max<a[i])
           max=a[i];
       
           if (a[i]<min)
           min=a[i];
       

}
     printf("maximum=%d\n",max);
     printf("minimum=%d",min);

   }