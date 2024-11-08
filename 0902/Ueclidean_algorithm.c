#include <stdio.h>

int Ueclidean_algorithm_GCD(int a, int b){
    if(b==0){
        
        return a;
    }
    return Ueclidean_algorithm_GCD(b,a%b);//return이 %
    
}

int Ueclidean_algorithm_LCM(int a, int b){
    //호제법을 통해 구한 최대공약수로 두 수의 최소공배수 구하는 알고리즘.. 두 수의 곱의 절댓값/최대공약수
    int x,y,r = 0;
    x = a;
    y = b;
    while(y != 0){ //y != 0은 좋은 코드는 아님->
        printf("x=%d, y=%d\n",x,y);
        r = x%y;
        x = y;
        y = r;
        printf("x=%d, y=%d, r=%d\n",x,y,r);
    }//GCD(x)
    int LCM =0;
    if(a*b>0){
        LCM = a*b/x;
    }
    else{
        LCM = (-1)*a*b/x;
    }
    return LCM;
    
}

int main(){
    int a,b;
    printf("첫번째 숫자 입력:");
    scanf("%d",&a);
    printf("두번째 숫자 입력:");
    scanf("%d",&b);
    
    printf("입력한 두 수의 최대 공약수는 %d\n",Ueclidean_algorithm_GCD(a,b));
    printf("입력한 두 수의 최대 공약수는 %d\n",Ueclidean_algorithm_LCM(a,b));
    
    return 0;
}