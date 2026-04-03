#include <stdio.h>

int main(){
    int arr[5] = {10,20,30,40,50};
    int size = 5;
    int index;

    scanf("%d", &index);

    if(index == 3){
        printf("%d\n", arr[index]);
    } else if (index == 100){
        printf("Error!\n");
    } else {
        for(int i=0;i<size ;i++){
            printf("%d\n", arr[i]);
        }
    }
    
    return 0;
}
