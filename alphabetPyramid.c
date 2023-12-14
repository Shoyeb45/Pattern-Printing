#include<stdio.h>

void main()
{
    int n=4;
    
int cnt=1;
  for(int i=1; i<=n ; i++){
    for(int j=1 ; j<=n-i ; j++){
        printf(" ");
    }
    int A = 65;
    for(int k=1 ; k<=cnt ; k++){
        printf("%c",A);
        A++;
    }
    cnt+=2;
    printf("\n");
  }
    
    }
