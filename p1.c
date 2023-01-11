#include<stdio.h>
int diameter( int r);
int circumfrence(int r);
int area(int r);



int main(){
    int r;
    printf("enter the radius");
    scanf("%d",&r);
    diameter(r);printf("\n");
    circumfrence(r);printf("\n");
    area(r);printf("\n");
    }
int diameter(int r){
    int d;
    d=2*r;
    printf("%.2f",(float)d);
}
int circumfrence(int r){
    int c;
    c=2*3.14*r;
    printf("%d",c);


}
int area(int r){
    int a;
    a= 3.14*r*r;
    printf("%d",a);
}

