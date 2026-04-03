#include <stdio.h>
#include <string.h>

void sort_strings(char **arr, int size){
  char *tmp;
  for(int i=0;i<size - 1;i++){
    for(int j=0; j<size -1 -i; j++){
      //주소값의 위치만 서로 바꿔서 정렬
      if (strcmp(arr[j], arr[j+1])>0){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }         
}

int main(){
  char* words[] = {"apple", "ant", "banana", "cherry"};
  int size = 4;

  sort_strings(words, size);

  for(int i=0;i<size;i++){
    printf("%s\n", words[i]);
  }
  
  return 0; 
}
