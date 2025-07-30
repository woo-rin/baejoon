#include <stdio.h>
int main(void){
	int N, ans=0;
	scanf("%d", &N);
	while(N){
		if(N%2==1)
			ans++;
		N /= 2;
	}
	printf("%d", ans);
}