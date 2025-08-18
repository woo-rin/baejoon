#include <stdio.h>
int main(){

    int n;
    scanf("%d", &n);

    int arr[2000] = {0};

    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }

    int count = 0;
    int max = n;

    while(count < max){
        if(count % 2 == 0){
            printf("%d ", arr[count]);
            count++;
        }
        else{
            arr[max] = arr[count];
            count++;
            max++;
        }
    }
}
