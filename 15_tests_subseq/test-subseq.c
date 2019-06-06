#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

size_t maxSeq(int * arrry , size_t n);

int main(){

  int arr0[0]={};
  int arr1[7]={0};
  int arr2[1]={6};
  int arr3[5]={8 , 4 , 3 , 2 , 1};
  int arr4[3]={1 , 3 , 5};
  int arr5[7]={1 , 2 , 3 , 2 , 6 , 11 , 12};
  int arr6[5]={1 , 3 , 5 , 2 , 3};
  int arr7[5]={-12 , -11 , -10 , -5 , -1};
  int arr8[10]={6 , 1 , 2  , 3 , 9 , 2 ,1 , 6 , 4 ,8};
  int arr9[7]= {-5 , -2 , -1 , 0 , 1 ,7 ,8};
  int arr10[8]={-1 , 5 , 3 , -2 , -1 , 0 , 4 , 8};
  int arr11[]={ 1, 2, 1, 3, 5, 7, 2, 4, 6, 9};
  assert(0==maxSeq(arr0 , 0));
  assert(4==maxSeq(arr11 , 10));
  assert(1==maxSeq(arr1 , 7));
  assert(1==maxSeq(arr2 , 1));
  assert(1==maxSeq(arr3 , 5));
  assert(3==maxSeq(arr4 , 3));
  assert(4==maxSeq(arr5 , 7));
  assert(3==maxSeq(arr6 , 5));
  assert(5==maxSeq(arr7 , 5));
  assert(4==maxSeq(arr8 , 10));
  assert(7==maxSeq(arr9 , 7));
  assert(5==maxSeq(arr10 , 8));
  return EXIT_SUCCESS;
}
