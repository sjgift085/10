#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char input[100];
  FILE* fp;
  char c;
  
  fp = fopen("sample.txt", "r");

  //c = fgetc(fp);
  while((c = fgetc(fp)) != EOF){
    putchar(c);
		} 

  fclose(fp);
  
  system("PAUSE");
  return 0;
  
}
