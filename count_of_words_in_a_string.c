#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%[^\n]s",a);
    int k=0;
    for (int i=0;a[i];i++){

        if (a[i]==' ' && a[i+1]!=' ')
        k++;

    }
    printf("count of words in given string=%d",k+1);
    return 0;

     }
