#include <stdio.h>

void printSequence(int max) {
    // a + b의 합이 max보다 작거나 같은 경우 출력
    for (int sum = 0; sum <= max; sum++) {
        for (int a = 0; a <= sum; a++) {
            int b = sum - a;  // b는 sum에서 a를 뺀 값
            printf("(%d, %d) ", a, b);
        }
    }
        for (int a = 1; a <= max; a++) {
        for (int b = a + 1; b <= max; b++) {
            printf("(%d, %d) ", a, b);
        }
    }
}

int main(){
    int max = 4;  // a, b의 합이 최대 4인 경우까지 출력
    printSequence(max);
    return 0;
}