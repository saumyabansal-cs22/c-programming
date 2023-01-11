#include<stdio.h>
// void drawline(void);
// void main(){
//     drawline();
// }
// void drawline(){
//     int i;
//     for(i=0;i<10;i++){
//         printf("----");
//     }
// }
//**********passing arguement and return value********
int sum(int x,int y);
int main(){
    int a,b,s;
    scanf("%d %d",&a,&b);
    s= sum(a,b);
    printf("sum of %d and %d is %d",a,b,s);
    return 0;
}
int sum(int x, int y){
    int s;
    s=x+y;
    return s;
}