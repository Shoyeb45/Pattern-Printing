#include<stdio.h>

void main()
{
    int n=5;

    for(int i=n; i>=0 ; i-- ){
        for(int j=1; j<=n-i+1 ; j++){
            printf("%d",j);
        }
        printf("\n");
    }
}