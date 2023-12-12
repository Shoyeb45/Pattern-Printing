#include<stdio.h>

void main()
{
    int n=4;
int cnt=1;
  for(int i=1; i<=n ; i++){
    for(int j=1 ; j<=n-i ; j++){
        printf(" ");
    }
    
    for(int k=1 ; k<=cnt ; k++){
        printf("*");
    }
    cnt+=2;
    printf("\n");
  }
    
    }
