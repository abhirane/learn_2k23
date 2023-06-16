#include <stdio.h>
#include <stdlib.h>


void main(){
    int a,b;
    printf("enter the first no");
    scanf("%d",&a);
    printf("enter the second no");
    scanf("%d",&b);
    if(a>b){
        printf("%d is the biggest number\n",a);
    }
    else if(b>a){
        printf("%d is the biggest number\n",b);
    }
    else{
        printf("numbers are equal");
    }


}
