#include<stdio.h>

int facto(int n){
    if(n == 0 || n ==1)
    return 1;
    else
    return n*facto(n-1);
}

void main()
{
    int n=5;
    
   int cnt=1;
  for(int i=1; i<=n ; i++){
    
    for(int j=1 ; j<=n-i ; j++){
        printf(" ");
    }
        for(int k=1 ; k<=i ; k++){
            int var = facto(i-1)/(facto(k-1)*facto(i-k)) ; 
            printf("%d ", var);
    }
    cnt+=2;
    printf("\n");
  }
}
