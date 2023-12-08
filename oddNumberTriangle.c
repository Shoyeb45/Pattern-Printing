#include<stdio.h>

void main()
{

    int n=4;
    for(int i=n; i>=0 ; i--){
        int count=1;
        for(int j=1; j<=i; j++){
            printf("%d", count);
            count+=2;
        }
        printf("\n");
    }
}