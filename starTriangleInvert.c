#include<stdio.h>

void main()
{
    int n=4;

    for(int i=0; i<n ; i++){
        for(int j=1; j<=n-i ; j++){
            printf("*");
        }
        printf("\n");
    }
}