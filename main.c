/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,x;
    printf("enter the size of square matrix=");
    scanf("%d",&n);
    int a[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
              {
                  scanf("%d",&a[i][j]);
              }}
    printf("enter the value of scalar=");
    scanf("%d",&x);
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
              {
                  if (i==j){
                      a[i][j]=x;
                  }
                  else
                     a[i][j]=0;
              }}
    for (int i=0;i<n;i++){
        printf("[");
        for (int j=0;j<n;j++)
              {
                 printf("%d ",a[i][j]);
              }
        printf("]\n");}
    return 0;
}

