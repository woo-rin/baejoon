#include <stdio.h>

int main()
{
    int N;
    int num = 666;
    int cnt = 0;

    scanf("%d", &N);

    while (1) {
        int temp = num;         //num값을 유지해야하기 때문에 temp에 num값을 복사
        int check = 0;          //666이라는 숫자를 가지고 있는지 확인할 때 사용하는 변수

        while (temp > 0) {
            if (temp % 1000 == 666) {       //666이라는 숫자를 포함하고 있는지 확인
                check = 1;          
                break;
            }
            temp /= 10;
        }

        if (check) {
            cnt++;
        }

        if (cnt == N) {             //N번째 종말의 수를 찾으면 출력하고 종료
            printf("%d", num);
            break;
        }

        num++;
    }

    return 0;
}