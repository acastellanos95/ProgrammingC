#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX_LEN 100

int main(){
  while(1){
  char str[MAX_LEN];
  str[MAX_LEN+1]='\0';
  srand(time(0));
    for(int i=0; i<=MAX_LEN; i++){
      int num = rand()%2;
      if(num)
	str[i]='\\';
      else{
        str[i]='/';
      }
    }
    str[MAX_LEN+1]='\0';
    printf("%s",str);
  }; 
  return 0;
}
