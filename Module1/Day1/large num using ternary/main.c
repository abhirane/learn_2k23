#include <stdio.h>
#include <stdlib.h>


int main(){
    int a,b,big;
    printf("enter the first no:\n");
    scanf("%d",&a);
    printf("enter the second no:\n");
    scanf("%d",&b);
    if(a!=b){
    big=(a>b)?a:b;
    printf("the biggest number is:%d\n",big);
    }
    else{
        printf("the no are same");
    }

    return 0;

}
