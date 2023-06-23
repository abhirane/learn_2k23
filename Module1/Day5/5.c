#include<stdio.h>
int main()
{
  FILE *ptr;
  char i;
  ptr=fopen("myfile.c","r");
  while((i=fgetc(ptr))!=NULL)
     printf("%c", i);
  printf("\n");
  return 0;
}