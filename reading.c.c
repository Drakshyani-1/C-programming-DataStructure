#include<stdio.h>
int main()
{
  FILE *fp;
  char c;
  fp=fopen("Gaganadrakshu.txt","r");
  c=fgetc(fp);
  printf("charcter is %c",c);
  fclose(fp);
  return 0;
}