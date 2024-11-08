#include<stdio.h>

void main(){
    int sum=0;
    int* ptr;
    int x[10]; //*x(0) == x[0]
    for(int i = 0; i<=10; i+=1){
        printf("%#x\n",&x[i]);
        sum +=i;
    }
    printf("%d\n",sum);
    // for(int a:x){
        
    // } c++에서 사용 가능


    //포인터 개념잡기
    int r=0;
    int* p = &r;
    printf("r data=%d , r address=%#x \n",r,&r);
    printf("p data=%#x , *p data=%d,p address=%#x\n",p,*p,&p);
    
    int** y = &p;
    printf("y=%#x , *y=%#x , **y=%#x\n",y,*y,**y);

    
    int num3=3,num4=3,e=0,f=0;
    printf("num3=%d, num3주소=%#X \n", num3, &num3);
	e = ++num3 + ++num3 + ++num3;//정상적인 결과는 18이 나와야 함, 연산자의 순서가 증가 연산자가 모두 처리된 후에 대입연산자가 처리되기 때문에 6+6+6 연산이 된다 메모리 하나에서 연산을 수행하기 때문에
	printf("num3=%d, e=%d  \n", num3, e);
	printf("num3=%d, num3주소=%#X \n", num3, &num3);

	printf("num4주소=%#X \n",  &num4);
	f = num4++ + ++num4 + num4++;
	printf("num4=%d, f=%d  \n", num4, f);
	printf("num4주소=%#X \n",  &num4);

    int a =0,b=0;
    ++a;  // a=a+1;  // a++;  // a+=1;
	printf("a= %d\n", a);
	b++;  // b=b+1
	printf("b= %d\n", b);
    
}