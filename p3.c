#include<stdio.h>
#include<math.h>
void prime(int a);
// void arm(int a);
// void perfect(int a);
int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    prime(a);
    // arm(a);
    // perfect(a);
    return 0;
}
void prime(int a){
    int c=0,i;
    for (i=1;i<=a;i++){
        if (a%i==0)
            c++;
    }
    if (c==2)
    printf("It is a prime number;\n");
    else
    printf("It is not a prime number;\n");
}
// void arm(int a){
//     int r,s=0,m,n;
//     n=a;
//     m=log10(a)+1;
//     while(a!=0){
//         r=a%10;
//         s=s+pow(r,m);
//         a=a/10;
//     }
//    if (s==n)
//    printf("It is an armstrong number;\n");
//    else
//    printf("It is not an armstrong number;\n");
// }

// void perfect(int a){
//     int s=0,i,n;
//     n=a;
//     for (i=1;i<a;i++){
//         if (a%i==0)
//         s=s+i;
//     }
//     if (s==n)
//     printf("It is a perfect number;\n");
//     else
//     printf("It is not a perfect number;\n");

// }