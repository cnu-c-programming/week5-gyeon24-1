#include <stdio.h>

void print_reverse(int *arr, int size){
  int* p = arr + size -1;
  
  for(int *i = p; i > arr-1;i--){
    if(i == arr) printf("%d", *i);
    else {
      printf("%d ", *i);
    }
  }
}

int main(){
  int nums[] = {1,2,3,4,5};

  print_reverse(nums, 5);
  printf("\n");  
  return 0; 
}
