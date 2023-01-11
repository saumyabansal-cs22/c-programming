// #include<stdio.h>
// void display_array(int a[],int n);
// int main(){
//     int n;
//     printf("enter the size of the array; ");
//     scanf("%d",&n);
//     int a[n];
//     // display_array(a[n]);
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     display_array(a,n);
//      }
// void display_array(int a[],int n){
//     for ( int i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
    

    
// }

#include<stdio.h>
void sum(int a[],int n);
int main(){
     int n;
     printf("enter the size of the array;");
     scanf("%d",&n);
     int a[n];
     for (int i=0; i<n;i++){
        scanf("%d",&a[i]);
     }
     sum(a,n);
     return 0;

     }
     
void sum(int a[],int n){
        int s=0;
          for ( int i = 0; i < n; i++)
          {
            /* code */
            s=s+a[i];
          }
          printf("sum of elements of array= %d",s);
          
}
