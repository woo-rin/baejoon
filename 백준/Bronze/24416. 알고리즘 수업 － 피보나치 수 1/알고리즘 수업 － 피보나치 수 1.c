#include<stdio.h>

int fib(int n) {
    if (n == 1 || n == 2){
        return 1;
    }
    else{
        return (fib(n - 1) + fib(n - 2));
    }
}

int fibonacci(int n) {
    int f[n];
    int t = 0;
    f[0] = 1;
    f[1] = 1;
    if(n == 1 || n==2){
        return 1;
    }
    else{
        for(int i = 2; i < n; i++){
            f[i] = f[i-1] + f[i-2];
            t++;
        }
        return t;
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d %d", fib(n), fibonacci(n));
    return 0;
}