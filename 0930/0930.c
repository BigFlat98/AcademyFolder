#include <stdio.h>

int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    if(a>=b){
        return a-b;
    }
    else{
        return b-a;
    }
}
int mul(int a, int b){
    return a*b;
}
double div(int a, int b){
    double x;
    if(a>=b){
        x = ((double)a / (double)b);
    }
    else{
        x = ((double)b / (double)a);
    }
    return x;
}


void main(){
    int a = 0;
    while(a!=10){
        a+=1;
    }
    printf("%d",a);
    
}

