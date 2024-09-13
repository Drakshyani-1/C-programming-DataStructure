#include<stdio.h>
int main()
{
  FILE *fp;
  char c[100];
  fp=fopen("Gaganadrakshu.txt","a");
 
  fputs("gagana",fp);
  return 0;
}