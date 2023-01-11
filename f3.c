#include<stdio.h>
void type(int x,int y,int z);
//void area(int,int,int);
int main(){
    int a,b,c;
    scanf ("%d %d %d",&a,&b,&c);
    if (a<b+c && b<a+c &&c<a+b){
        type(a,b,c);
        //area(a,b,c);

    }
    else
    printf("no triangle is possible with these sides;");

}
void type(int x,int y,int z){
    if ((x*x)==(y*y)+(z*z) || (y*y)==(x*x)+(z*z) || (z*z)==(x*x)+(y*y))
    printf("triangle is right angled triangle ");
    else if(x==y && y==z)
    printf("triangle is equilateral");
    else if(x==y || y==z)
    printf("traingle is isoceles");
    else
    printf("triangle is scalene");

}
