#include<stdio.h>
#include<string.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main(){
        //char str[]={'s','a','u','m','y','a','\0'};
    //char str[7]="saumya";
    char str[89];
    scanf("%s",str);
    printstr(str);
     return 0;

     }
