#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    printf("the sixe of int on my pc is=%d\n",sizeof(int));
    ptr=(int *)calloc(6,sizeof(int)); 
    // for (int i=0;i<6;i++){
    //     printf("the value of %d element ",i);
    //     scanf("%d",&ptr[i]);
    // }
    for (int i=0;i<6;i++){
        printf("the valuf of %d element is %d:\n",i,ptr[i]);
    }
    // Type caste because ptr in integer type pointer and malloc returns void value;
    return 0;

     }
