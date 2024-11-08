#include <stdio.h>
int sum(int a, int b){
    a = a+b;
    return a;
}

int gcd(int a, int b){
    /*2개의 자연수(또는 정식) a, b에 대해서 a를 b로 나눈 
    나머지를 r이라 하면(단, a>b), a와 b의 최대공약수는 b와 r의 
    최대공약수와 같다.
    이 성질에 따라, b를 r로 나눈 나머지 r'를 구하고, 다시 r을 r'로 나눈 
    나머지를 구하는 과정을 반복하여 나머지가 0이 되었을 때 나누는 수가 a와 b의 
    최대공약수이다.*/
    if(a>b){
        if(b==0) return a;
        gcd(b,a%b); 
    }
    else if(a<b){ //내 멍청함을 증명
        if(a==0) return b;
        gcd(a,b%a);
    }
    else return a;
    //if 문을 사용해서 매개변수의 크기별로 작성해줄 필요가 없음 b에 a보다 
    //큰 수가 들어가면 b%a가 a이기 때문에 
}


int gcd2(int a, int b){
    if(b==0){
        return a;
    }
    gcd2(b,a%b);
}//무지성 코딩 금지 ㅎㅎ;
int main(void){
    printf("hello~\n");
    printf("/Users/daejunehwang/dj_vscode/hello.c\n");

    printf("oh \"god\" \\\n"); // \' \" \\-> 인지 
    int x = sum(3,4);
    printf("%d\n",x);
    
    return 0;

}

