#include <stdio.h>
int main(){
  int i, n, flag=0;
  printf("Enter a number");
  scanf("%d",&n);
  if(n<2)
  {
    printf("Not a prime number");
  }
  
  for(i=2;i<n;i++){
    if(n%i==0)
      flag=1;
      break;
  }
  if(flag==0){
    printf("%d is prime number",n);
  } else{
    printf("%d is not a prime number",n);
    }
    
  }
