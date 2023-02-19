#include<stdio.h>
void sum(int a[], int n);
int main(){
    int n;
    printf("enter the size of array;");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sum(a,n);
    

}
void sum(int a[],int n){
    // int n;
    // printf("enter the size of the array;");
    // scanf("%d",&n);
    int s=0,i;
    for (i=0;i<n;i++){
        s=s+a[i];

    }
    printf("sum of array = %d",s);
}