#include <stdio.h>
 
int main(void) 
{
    int arr[11] = { 0 };	//입력받을 배열
    int cntArr[10] = { 0 };	//정렬한 수를 저장할 배열
    int num;
    int i;
    scanf("%d", &num);
    
	//각 자리수를 따서 배열에 저장하기
    	//i는 몇 자리 수인지 기억
    for (i = 0;  num /= 10 > 0; i++) {
        arr[i] = num % 10;
        num /= 10;
    }
	//i(자리수)만큼 숫자에 해당하는 인덱스 +1
    for (int j = 0; j < i; j++) {
        cntArr[arr[j]] += 1;
    }
	//역순으로 출력
    for (i = 9; i >= 0; i--) {
        for (int j = 0; j < cntArr[i]; j++)
            printf("%d", i);
    }
 
    return 0;
}