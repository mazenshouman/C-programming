#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char * str) {
  size_t Local_counter=0;
  size_t Local_sizeOfArray=0;
  if(!str[0])
    return;
  while(str[Local_counter++]);
  Local_sizeOfArray=Local_counter;
  char  Local_str[Local_sizeOfArray];
  Local_sizeOfArray-=1;
  Local_counter=0;
  while(str[Local_counter]){
    Local_str[Local_counter]=str[Local_counter];
    Local_counter+=1;
  }
  Local_str[Local_counter]=0;
  Local_counter=0;
  while(Local_sizeOfArray>0){
    str[Local_counter++]=Local_str[--Local_sizeOfArray];
  } 
}

int main(void) {
  char str0[] = "";
  char str1[] = "123";
  char str2[] = "abcd";
  char str3[] = "Captain's log, Stardate 42523.7";
  char str4[] = "Hello, my name is Inigo Montoya.";
  char str5[] = "You can be my wingman anyday!";
  char str6[] = "Executor Selendis! Unleash the full power of your forces! There may be no tomorrow!";
  char * array[] = {str0, str1, str2, str3, str4, str5, str6};
  for (int i = 0; i < 7; i++) {
    reverse(array[i]);
    printf("%s\n", array[i]);
  }
  return EXIT_SUCCESS;
}
