#include<stdio.h>
#include<string.h>
// void printstr(char str[])
// {
//     int i=0;
//     while(str[i]!='\0')
//     {
//         printf("%c",str[i]);
//         i++;
//     }
// }
// int main(){
//     //char str[]={'s','a','u','m','y','a','\0'};
//     //char str[7]="saumya";
//     char str[89];
//     scanf("%s",str);
//     printstr(str);

//      return 0;

//      }

//*************to find the length of a string****************
#include<stdio.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    int i=0;
    while (str[i]!='\0'){

        i++;
    }
    printf("length of the string=%d",i);
}

//*************TO COPY ONE STRING TO ANOTHER**********************
// #include<string.h>
// int main(){
//    int i;
//    char a[100];
//    char b[100];
//    scanf("%[^\n]s",a);
//    for (i=0;i<sizeof(a);i++){
//     b[i]=a[i];
//    }
//    printf("value of first string %s\n",a);
//    printf("value of second string %s",b);
// }

//***************TO CONCANATE TWO STRING************
// int main(){
//    char a[100];
//    char b[100];
//    char c[200],s;
//    int k;
//    scanf("%[^\n]s",a);
//    scanf("%c",&s);
//    scanf("%[^\n]s",b);
//    int j,i;
//    for(i=0;a[i];i++)
//    {
//       c[i]=a[i];
//    }
//    for(k=i,j=0;b[j];j++,k++)
//    {
//       c[k]=b[j];
//    }
//    c[k]=0;
//    printf("%s",c);
//    return 0;
// }