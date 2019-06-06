#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


size_t maxSeq(int * array , size_t n){
  size_t max_counter=1;
  size_t counter=1;
  size_t i=1;
  if(!n)
    return 0;
  if(n==1)
    return 1;
  for(; i<n ; i++){
    if((array[i-1]< array[i])){
      counter++;
    }
    else if(max_counter<counter){
      max_counter=counter;
      counter=1;
    }
    else
      counter=1;
  }
  if(counter>max_counter)
    max_counter=counter;
  return max_counter;
}
