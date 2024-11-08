#include <stdio.h>

int factorial(int s){
    if(s==0){
        return 1;
    }
    else{
        return s*factorial(s-1);
    }
}//재귀함수를 사용한 팩토리얼 구하는 메소드 

int main(){

    int a = 0;
    printf("숫자 입력:");
    scanf("%d",&a);
    printf("입력한 수의 팩토리얼은 %d 입니다.\n",factorial(a));
    return 0;

}