#include<stdio.h>

void main()
{
    int n=4;

    for(int i=n; i>=0 ; i-- ){
        for(int j=1; j<=i ; j++){
            printf("*");
        }
        printf("\n");
    }
}