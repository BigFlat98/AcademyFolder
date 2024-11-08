// c 언어 전체 구조
/*
#include<stdio.h>  // # preprocessor 전처리기
int main() {  // void main(void)  //  main() // int main(void) 
	printf("Hello c \n");
	return 0;
}
*/

// c 언어 printf 제어문자
/*
#include <stdio.h>
int main() {
	printf("안녕하세요 1");
	printf("안녕하세요 2");
	printf("안녕하세요 3");
	printf("안녕하세요 4 \n");
	printf("안녕하세요 5 \n");
	printf("안녕하세요 \t 6 \n");
	printf("안녕하세요 \'박\'샘 \n");
	printf("안녕하세요 \"박\"샘 \n");
	printf("c:\\workex\\exam.c \n");  // printf("c:\workex\exam.c \n");

	return 0;
}
*/

// 특수 문자 예제 실습 
/*
#include <stdio.h>
int main(void){
	printf("\t Hello C! \n Hello World! \n");
	printf("큰따옴표: \"홍길동\" \n");
	printf("작은따옴표: \'A\' \n");
	printf("역슬레시: c:\\ \n");

	return 0;
}
*/


// c 언어 형식 인자 1
/*
#include<stdio.h>
int main() {
	printf("10진수= %d, 16진수= %#X, 8진수= %#o, 문자= %c \n", 50, 50, 50, 50);
	printf("10진수= %d, 16진수= %X, 8진수= %o, 문자= %c \n", 65, 65, 65, 65);
	printf("10진수= %d, 16진수= %X,  문자= %c \n", 66, 66, 66);
	printf("10진수= %d, 16진수= %X,  문자= %c \n", 97, 97, 97);
	printf("10진수= %d, 16진수= %X,  문자= %c \n", 98, 98, 98);
	printf("10진수= %d, 16진수= %X,  문자= %c \n", 49, 49, 49);
	printf("국적은 :  %s \n", "korea");
	return 0;
}
*/


// c 언어 형식 인자 2
/*
#include <stdio.h>
int main() {
	int ch1=65, ch2=97;
	int ch16 = 0x41, ch8= 0101;

	printf("ch1=%d번 \n", ch1);
	printf("ch1=%#x번 \n", ch1);
	printf("ch1=%#o번 \n", ch1);
	printf("ch1=%c번 \n", ch1);
	printf("-----------------\n");
	printf("ch2=%d번 \n", ch2);
	printf("ch2=%x번 \n", ch2);
	printf("ch2=%o번 \n", ch2);
	printf("ch2=%c번 \n", ch2);
	printf("-----------------\n");
	printf("ch16=%d번 \n", ch16);
	printf("ch8=%d번 \n", ch8);
	return 0;
}
*/

// 리터럴 상수 – 정수형 상수 예제 실습 

/*
#include<stdio.h>
int main(void){
	printf("10진수 정수형 상수 %d + %d = %d 입니다. \n", 10, 20, 10 + 20);
	printf("16진수 정수형 상수 %#x + %#x = %#x 입니다. \n", 0x10, 0x20, 0x10 + 0x20);
	printf(" 8진수 정수형 상수 %#o + %#o = %#o 입니다. \n", 010, 020, 010 + 020);
	printf("문자 상수 %c %c %c 입니다.\n", 'a', 'b', 'c');
	printf("문자 상수 %d %d %d 입니다.\n", 'a', 'b', 'c');

	printf("실수형 상수 %f + %f = %f 입니다. \n", 3.1, 4.1, 3.1+4.1);
	return 0;
}
*/

/*
#include <stdio.h>

#define  PI   3.14
#define  NUM  100
#define  BUFFER_SIZE  200

int main(){
	printf("%lf  \n", PI);
	printf("%d  \n", NUM);
	printf("%d  \n", BUFFER_SIZE);

	return 0;
}
*/



// 3장 변수
/*
#include<stdio.h>
int main(void){
	int a=10;
	int b=20;
	int c;
	printf("&c=%#X \n", &c);
	c = a + b;
	printf("a=%d \n", a);
	printf("b=%d \n", b);
	printf("c=%d \n", c);

	printf("&a=%#X \n", &a);
	printf("&b=%#X \n", &b);
	printf("&c=%#X \n", &c);

	return 0;
}
*/


// 키보드로부터 데이터 입력받기 – scanf() 함수
/*
#include <stdio.h>
int main(void){
	int age;
	printf("What is your age?: ");
	scanf_s("%d", &age);
//	scanf("%d", &age);
	printf("Wow! Really? Are you %d years old?\n", age);

	return 0;
}
*/

//  키보드로부터 데이터 입력받기 – scanf() 함수
/*
#include <stdio.h>
int main(void){
	int a, b, c;
	float e;
//	char d;
	printf("실수 1개 입력: ");
	scanf_s("%f", &e);
	printf("e변수 실수 출력: %.1f \n", e);

	printf("10진수 정수 1개 입력: ");
	scanf_s("%d", &a);
	printf("10진수: %d, 16진수: %#x, 8진수: %#o, 문자:%c \n", a, a, a, a);

	printf("16진수 정수 1개 입력: ");
	scanf_s("%x", &b);
	printf("10진수: %d, 16진수: %#x, 8진수: %#o \n", b, b, b);

	printf("8진수 정수 1개 입력: ");
	scanf_s("%o", &c);
	printf("10진수: %d, 16진수: %#x, 8진수: %#o \n", c, c, c);

	printf("문자 입력: ");
//	scanf("%c", &d);
//	printf("10진수: %d,  문자:%c \n", d, d);
	return 0;
}
*/


// c 반복문 for
/*
#include <stdio.h>
int main() {
	int i;

	for (i = 1; i <= 10; i=i+1) {  // i < 11;  // i != 11;
		printf("안녕하세요 i=%2d 번 \n" , i);
	}
	printf("---반복문 종료---\n");
	printf("안녕하세요 i= %d번 \n", i);

	for (i = 10; i >= 1; i=i-1) {  // i > 0;  //  i != 0;
		printf("안녕하세요 i=%2d 번 \n", i);
	}
	printf("---반복문 종료---\n");
	printf("안녕하세요 i= %d번 \n", i);

	for (i = 1; i >= 10; i = i + 1) {
		printf("안녕하세요 i=%2d 번 \n", i);
	}
	printf("---반복문 종료---\n");
	printf("안녕하세요 i= %d번 \n", i);

	return 0;
}
*/

// c 반복문 for while 문으로 변경
/*
#include <stdio.h>
int main() {
	int i;

	for (i = 1; i <= 10; i=i+1) { // ++i ,  i++ , i+=1;
		printf("안녕하세요 i=%2d 번 \n" , i);
	}
	printf("---반복문 종료---\n");
	printf("안녕하세요 i= %d번 \n", i);

	i = 1;
	while( i <= 10 ) {
		printf("안녕하세요 i=%2d 번 \n", i);
		i = i + 1;
	}
	printf("---반복문 종료---\n");
	printf("안녕하세요 i= %d번 \n", i);

	i = (0);
	while (i < 10) {
		i = i + 1;
		printf("안녕하세요 i=%2d 번 \n", i);

	}
	printf("---반복문 종료---\n");
	printf("안녕하세요 i= %d번 \n", i);


	return 0;
}
*/

// 반복문 while문 응용 감소1
/*
#include<stdio.h>
int main() {
	int cnt;
	cnt = 11;
	while(  cnt > 1  ) {   //  cnt >= 2   //   cnt != 1 
		cnt=cnt-1;  
		printf("Hello c  %2d 번\n", cnt );

	}
	printf("---반복문 종료 ----\n");
	printf("cnt= %2d\n", cnt );
	return 0;
}
*/

// 반복문 while문 응용 감소2
/*
#include<stdio.h>
int main() {
	int cnt;
	cnt = 10;
	while(  cnt  >= 1  ) {   // cnt  > 0  // cnt  != 0
		printf("Hello c  %2d 번\n", cnt );
		cnt = cnt - 1;
	}
	printf("---반복문 종료 ----\n");
	printf("cnt= %2d\n", cnt );
	return 0;
}
*/





// 반복문 for 연습 응용 최고급
/*
#include<stdio.h>
int main() {
	int cnt, cnt1, i=0;
	int st=1, end=10, sw=1;
	while (i<5) {
		i = i + 1;
		for (cnt = st; cnt != end + sw; cnt = cnt + sw) {
			printf("Hello cnt=%d\n", cnt);
		}
		printf("---반복문 종료 ----\n");
		if (st < end) {
			st = 10;
			end = 1;
			sw = -1;
		}
		else {
			st = 1;
			end = 10;
			sw = 1;
		}
	}
	
	return 0;
}
*/

// 1) Sum=7+7+7+...+7  NUM(10항) 항까지의 합
/*
#include<stdio.h>
int main() {
	int cnt,  sum=0;
	float avg;
	for (cnt = 1; cnt <= 10; cnt++) { 
		sum = sum + 7;
		printf("cnt= %2d, sum= %3d\n", cnt, sum);
	}
	printf("---반복문 종료 ----\n");
	printf("cnt= %2d, sum= %3d\n", cnt, sum);
	avg = (float)sum / (cnt-1);
	printf("avg= %.2f\n", avg);
	return 0;
}
*/

// 2) Sum=1+2+3+4+?..+NUM   NUM(10)항까지의 합
//       i     1  2  3  4 
//               1  1  1  1
/*
#include<stdio.h>
int main() {
	int cnt, i=0, sum=0;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		sum = sum + i;
		printf("cnt= %2d, i= %2d, sum= %3d\n", cnt, i, sum);
		
	}
	printf("---반복문 종료 ----\n");
	printf("cnt= %2d, i= %2d, sum= %3d\n", cnt, i, sum);
	
	return 0;
}

// 3) Sum=1+2+3+4+?..+NUM   NUM(10)항까지의 합 변형 1
//       i     1  2  3  4 
//               1  1  1  1
/*
#include<stdio.h>
int main() {
	int cnt, i=1, sum=0;
	for (cnt = 1; cnt <= 10; cnt++) {
		sum = sum + i;
		printf("cnt= %2d, i= %2d, sum= %3d\n", cnt, i, sum);
		i = i + 1;  

	}
	printf("---반복문 종료 ----\n");
	printf("cnt= %2d, i= %2d, sum= %3d\n", cnt, i, sum);

	return 0;
}
*/

//4) Sum=1+3+5+?.....+..+NUM   NUM(10)항까지의 합
//       i     1  3  5
//               2  2  2  
/*
#include<stdio.h>
int main() {
	int cnt, i=-1, sum=0;

	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 2;  // i+=2;
		sum = sum + i;  // sum += i;
		printf("cnt= %2d, i= %2d, sum= %3d\n", cnt, i, sum);

	}
	printf("---반복문 종료 ----\n");
	printf("cnt= %2d, i= %2d, sum= %3d\n", cnt, i, sum);

	return 0;
}
*/

// 5) Sum=1+3+5+?.....+..+NUM   NUM(10)항까지의 합 변형1
//       i     1  3  5
//               2  2  2 
/*
#include<stdio.h>
int main() {
	int cnt, i=1, sum=0;
	for (cnt = 1; cnt <= 10; cnt++) {
		sum = sum + i;  // sum += i;
		printf("cnt= %2d, i= %2d, sum= %3d\n", cnt, i, sum);
		i = i + 2;  // i+=2;
	}
	printf("---반복문 종료 ----\n");
	printf("cnt= %2d, i= %2d, sum= %3d\n", cnt, i, sum);

	return 0;
}
*/

// 8) Sum=1+(1+2)+(1+2+3)+(1+2+3+4)+?...+(1+2+3+4+ +NUM) NUM(10)항까지의 합
// 8) Sum=1+  3+   6+  10 + 15+...+NUM  NUM(10)항까지의 합

// 8) Sum= 1 +  3+  6+ 10 + 15+...+NUM  NUM(10)항까지의 합
// 6) Sum = 2 + 3 + 5 + 8 + 12 + 17 + ? ... + NUM   NUM(10)항까지의 합
//       i       2    3    5    8    ?
//       j          1    2    3    4
//                     1    1    1

// 6) Sum = 2 + 3 + 5 + 8 + 12 + 17 + ? ... + NUM   NUM(10)항까지의 합
//       i      2    3    5    8    ?
//       j         1   2    3    4
//                   1    1    1    1
// 6번 문제 풀이 시험용
/*
#include <stdio.h>
int main() {
	int  cnt, i=2 , j=0 , sum=2;
	for (cnt = 1; cnt <= 9; cnt++) {
		j = j + 1;  // j++
		i = i + j;
		sum = sum + i;
		printf("cnt=%2d, j=%2d, i=%3d, sum=%5d\n", cnt, j, i, sum);
		
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, j=%2d, i=%3d, sum=%5d\n", cnt, j, i, sum);
	return 0;
}
*/

// 7) Sum = 1 + 2 + 4 + 7 + ? ... + NUM   NUM(10)항까지의 합  
//       i      1    2    4    7    ?
//       j         1    2    3    4
//                    1    1    1    
// 7번 문제 풀이 시험용
/*
#include <stdio.h>
int main() {
	int  cnt, i=1 , j=0 , sum=1;
	for (cnt = 1; cnt <= 9; cnt++) {
		j = j + 1;  
		i = i + j;
		sum = sum + i;
		printf("cnt=%2d, j=%2d, i=%3d, sum=%5d\n", cnt, j, i, sum);

	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, j=%2d, i=%3d, sum=%5d\n", cnt, j, i, sum);
	return 0;
}
*/




// 7) Sum = 1 + 2 + 4 + 7 + ? ... + NUM   NUM(10)항까지의 합
// 6번 문제 풀이
/*
#include <stdio.h>
int main() {
	int  cnt, i=2 , j=0 , sum=0;
	for (cnt = 1; cnt <= 10; cnt++) {
		
		sum = sum + i;
		printf("cnt=%2d, j=%2d, i=%3d, sum=%5d\n", cnt, j, i, sum);
		j = j + 1;
		i = i + j;
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, j=%2d, i=%3d, sum=%5d\n", cnt, j, i, sum);
	return 0;
}
*/


// 9) Sum=1 + 1 +  2  +  3 + 5+8+13+21+?...+NUM(10항) 항까지의 합;  *1000_시험용
//             i     j     fi=i+j
//                   i     j      fi
// 피보나치 수열의 합
// 1, 1, 2 , 3 , 5, 8, 13, 21, ?
/*
#include <stdio.h>
int main() {
	int cnt, i = 1, j = 1, fi,  sum=2;  // sum=i+j;
	for (cnt = 3; cnt <= 10; cnt++) {
//  for (cnt = 1; cnt <= 10-2; cnt++) {
		fi = i + j;
		sum = sum + fi;
		printf("cnt=%2d, i=%2d, j=%2d, fi=%3d, sum=%4d\n", cnt, i, j, fi, sum);
		i = j;
		j = fi;
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, j=%2d, fi=%3d, sum=%4d\n", cnt, i, j, fi, sum);
	return 0;
}
*/

// 12) Sum= (1*10)+(2*9)+(3*8)+...+(10*1)
/*
#include <stdio.h>
int main() {
	int  sum=0, cnt, m, i=0, j=11;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		j = j - 1;
		m = i * j;
		sum = sum + m;
		printf("cnt=%2d, i=%2d, j=%2d, m=%4d, sum=%5d\n", cnt, i, j, m, sum);
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, j=%2d, m=%4d, sum=%5d\n", cnt, i, j, m, sum);

	return 0;
}
*/

// 12) Sum= (1*10)+(2*9)+(3*8)+...+(10*1)
/*
#include <stdio.h>
int main() {
	int  sum=0, cnt, m, i=0, j=11;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		j = j - 1;
		m = i * j;
		sum = sum + m;
		printf("cnt=%2d, i=%2d, j=%2d, m=%4d, sum=%5d\n", cnt, i, j, m, sum);
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, j=%2d, m=%4d, sum=%5d\n", cnt, i, j, m, sum);

	return 0;
}
*/


// 10) Sum=1!+2!+3!+...+NUM!  NUM(10)항까지의 합 항까지의 합
// 10) Sum = (1) + (1 * 2) + (1 * 2 * 3) + (1 * 2 * 3 * 4)... + (1 * 2 * 3 * 4*...*NUM)
/*
#include <stdio.h>
int main() {
	int  sum = 0, fact=1, i=0, cnt;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		fact = fact * i;
		sum = sum + fact;
		printf("cnt=%2d, i=%2d, fact=%7d, sum=%8d\n", cnt, i, fact, sum);
	}
	printf("----------반복문 종료-------------\n");
	printf("cnt=%2d, i=%2d, fact=%7d, sum=%8d\n", cnt, i, fact, sum);

	return 0;
}
*/

// 13) Sum=1-2+3-4+...-NUM NUM(10)항까지의 합 풀이 1
//      Sum=1+(-2)+3+(-4)+...-NUM NUM(10)항까지의 합
//		sw 의미는 1 또는 -1 양수 음수 부호의 의미
/*
#include<stdio.h>
int main() {
	int cnt, i = 0, sum = 0, m, sw=1;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		m = i * sw;
		sum = sum + m;
		printf("cnt= %2d, i= %2d, sw=%d, m=%d, sum= %3d\n", cnt, i, sw, m, sum);
		sw = sw * ( -1);   // sw=-sw;
		
	}
	printf("---반복문 종료 ----\n");
	printf("cnt= %2d, i= %2d, sw=%d, sum= %3d\n", cnt, i, sw, sum);

	return 0;
}
*/

// 13) Sum=1-2+3-4+...-NUM NUM(10)항까지의 합 풀이 2 : 나머지 연산자 이용
/*
#include<stdio.h>
int main() {
	int cnt, i = 0, sum = 0, na ;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		na = i % 2;
		if (na == 1) 	sum += i;   // if (na = 1)  --> if(1)
		else sum -= i;
		
		printf("cnt=%2d, i=%2d, na=%2d, sum=%3d\n", cnt, i, na, sum);

	}
	printf("---반복문 종료 ----\n");
	printf("cnt=%2d, i=%2d, sum=%3d\n", cnt, i, sum);

	return 0;
}
*/


// 13) Sum=1-2+3-4+...-NUM NUM(10)항까지의 합 풀이 3 : 
//  sw 변수 이용 sw 의미는 sw 0 또는 1 : 교대로
/*
#include<stdio.h>
int main() {
	int cnt, i = 0, sum = 0,  sw=0 ;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		if (sw == 0) {
			sum += i;
			sw = 1;
		}
		else {
			sum -= i;
			sw = 0;
		}

		printf("cnt=%2d, i=%2d, sw=%2d, sum=%3d\n", cnt, i, sw, sum);

	}
	printf("---반복문 종료 ----\n");
	printf("cnt=%2d, i=%2d, sum=%3d\n", cnt, i, sum);

	return 0;
}
*/

// if 문장 연습
/*
 #include<stdio.h>
int main() {
	int cnt, i = 0, sum = 0, sw = 1;
	for (cnt = 1; cnt <= 10; cnt++) {
		i = i + 1;
		if (sw == 0)
			printf("만족\n");
			printf("불만족\n");
		
		
		printf("cnt=%2d, i=%2d, sw=%2d, sum=%3d\n", cnt, i, sw, sum);

	}
	printf("---반복문 종료 ----\n");
	printf("cnt=%2d, i=%2d, sum=%3d\n", cnt, i, sum);

	return 0;
}
*/


// 다중 if 연습
/*
#include<stdio.h>
int main() {
	int input;
	while (1) {
		printf("점수를 입력 하세요 :  단_9999_입력 : 종료 : ");
		scanf_s("%d", &input);
		if (input == 9999)break;
		printf("입력점수= %d \n ", input);
		if (input >= 90  && input <= 100) printf("A \n");
		else if (input >= 80 && input < 90) printf("B \n");
		else if (input >= 70 && input < 80) printf("C \n");
		else if (input >= 60 && input < 70) printf("D \n");
		else if (input >= 0  && input < 60) printf("F \n");
		else printf("입력 점수 확인 요망^^ \n");
	}
	printf("프로그램 반복 종료 \n");

	return 0;
}
*/

// 제어문
// 다중 if 연습 고급
/*
#include<stdio.h>
int main() {
	int input;
	char ch;
	while (1) {
		printf("계속 진행  예(y)  또는 아니오(n) \n ");
		scanf_s(" %c", &ch);
		printf("입력 문자 확인 : %c\n", ch);
		if (( ch >= 'a' && ch <= 'z') ||  (ch >= 'A' && ch <= 'Z') )	{
			if (ch == 'n' || ch == "N")break;
		}
		else {
			printf("진행 여부 확인 하세요 : 예(y)  또는 아니오(n) 를 입력하세요^^ ");
			continue;
		}
		
		printf("점수를 입력 하세요 :  ");
		scanf_s("%d", &input);
		
		printf("입력점수= %d \n ", input);
		if (input >= 90  && input <= 100) printf("A \n");
		else if (input >= 80 && input < 90) printf("B \n");
		else if (input >= 70 && input < 80) printf("C \n");
		else if (input >= 60 && input < 70) printf("D \n");
		else if (input >= 0  && input < 60) printf("F \n");
		else printf("입력 점수 확인 요망^^ \n");
	}
	printf("프로그램 반복 종료 \n");

	return 0;
}
*/

// switch~case 문
/*
#include<stdio.h>
int main() {
	int input, num;
	while (1) {
		printf("점수를 입력 하세요 : _단 999입력시 종료_ ");
		scanf_s("%d", &input);
		if (input == 999)break;
		printf("입력점수= %d \n ", input);
		num = input / 10;
		switch (num) {
			case 10: case 9:
				printf("A 등급 출력\n");
				break;
			case 8:
				printf("B 등급 출력\n");
				break;
			case 7:
				printf("C 등급 출력\n");
				break;
			case 6:
				printf("D 등급 출력\n");
				break;
			default:
				printf("F 등급 출력\n");
			}
	}
	printf("프로그램 종료^^\n");

	return 0;
}
*/

// switch~case 문
/*
#include<stdio.h>
int main() {
	int input, num;
	while (1) {
		printf("점수를 입력 하세요 : _단 999입력시 종료_ ");
		scanf_s("%d", &input);
		if (input == 999)break;
		printf("입력점수= %d \n ", input);
		num = input / 10;
		if (input > 100 || input < 0) {
			printf("입력자료를 확인하세요^^\n");
			continue;
		}
		switch (num) {
			case 10: case 9:
				printf("A 등급 출력\n");
				break;
			case 8:
				printf("B 등급 출력\n");
				break;
			case 7:
				printf("C 등급 출력\n");
				break;
			case 6:
				printf("D 등급 출력\n");
				break;
		//	case 5: case 4: case 3: case 2: case 1: case 0:
			default:
				printf("F 등급 출력\n");
			}
		
	}
	printf("프로그램 종료^^\n");

	return 0;
}
*/






// 구구단-1  for 이용
/*
#include <stdio.h>
int main() {
	int i, j, k;
	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			k = i * j;
			printf("%2d * %2d = %2d \n", i, j, k);
		}
		printf("-----%d단 종료---- \n", i);
//		printf("i=%2d , j=%2d , k=%2d \n", i, j, k);
	}
	printf("---구구단 종료--------- \n");
//	printf("i=%2d , j=%2d , k=%2d \n", i, j, k);

	return 0;
}
*/

// 구구단-1  for 이용 짝수단에 j 홀수값만 출력
/*
#include <stdio.h>
int main() {
	int i, j, k;
	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			if ( (i%2==0) && (j%2 ==1) ) {
				k = i * j;
				printf("%2d * %2d = %2d \n", i, j, k);
			}
		}
		printf("-----%d단 종료---- \n", i);
		
	}
	printf("---구구단 종료--------- \n");
	return 0;
}
*/

// 구구단-1  for 이용  break continue 이용
/*
#include <stdio.h>
int main() {
	int i, j, k;
	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			if (j == 5) {
//				continue;
				break;
			}
			else {
				k = i * j;
				printf("%2d * %2d = %2d \n", i, j, k);
			}
		}
		printf("-----%d단 종료---- \n", i);

	}
	printf("---구구단 종료--------- \n");


	return 0;
}
*/

// 구구단-1 for문장  while-1 변경
/*
#include <stdio.h>
int main() {
	int i, j, k;
	i = 2;
	while( i <= 9 ) {
		j = 1;
		while( j <= 9 ) {
			k = i * j;
			printf("%2d * %2d = %2d \n", i, j, k);
			j++;
		}
		printf("-----%d단 종료---- \n", i);
		i++;
	}
	printf("---구구단 종료--------- \n");
	printf("%2d * %2d = %2d \n", i, j, k);


	return 0;
}
*/

// 구구단-1 for문장  while-2 변경
/*
#include <stdio.h>
int main() {
	int i, j, k;
	i = 1;
	while( i < 9 ) {
		i++;
		j = 0;
		while( j < 9 ) {
			j++;
			k = i * j;
			printf("%2d * %2d = %2d \n", i, j, k);
		}
		printf("-----%d단 종료---- \n", i);
		
	}
	printf("---구구단 종료--------- \n");
	printf("%2d * %2d = %2d \n", i, j, k);


	return 0;
}
*/

// 구구단-1  do while-1 변경
/*
#include <stdio.h>
int main() {
	int i, j, k;
	i = 2;
	do {
		j = 1;
		do {
			k = i * j;
			printf("%2d * %2d = %2d \n", i, j, k);
			j++;
		} while (j <= 9);
		printf("-----%d단 종료---- \n", i);
		i++;
	} while (i <= 9);
	printf("---구구단 종료--------- \n");
	printf("%2d * %2d = %2d \n", i, j, k);


	return 0;
}
*/

// 구구단-1 do while-2 변경
/*
#include <stdio.h>
int main() {
	int i, j, k;
	i = 1;
	do {
		i++;
		j = 0;
		do {
			j++;
			k = i * j;
			printf("%2d * %2d = %2d \n", i, j, k);
		} while (j < 9);
		printf("-----%d단 종료---- \n", i);

	} while (i < 9);
	printf("---구구단 종료--------- \n");
	printf("%2d * %2d = %2d \n", i, j, k);


	return 0;
}
*/






// 반복문 반복문(순위 석차)
// 기본순위 기사 산업기사 예시 문제
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j;
	int a[5] = { 50,60,40,70,30  };
	int rank;

	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++) {   // 선택
		rank = 1 ;
		for (j = 0; j < 5; j++) {   // 비교대상
			if (a[i] < a[j]) {
				rank = rank + 1;  // rank++; rank+=1; ++rank;
			}
		}
		printf("arr1[%d]=%d, rank=%d \n",i, a[i], rank);
	}

	return 0;
}
*/

//  기본순위 기사 산업기사 예시 문제_실전
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j;
	int arr1[5] = { 50,60,40,70,30 };
	int rank[5];

	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", arr1[i]);
	}
	printf("\n");

	//----기본 rank  값을 입력------
	for (i = 0; i < 5; i++) {
		rank[i]=1;
	}
	printf("----기본 rank  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", rank[i]);
	}
	printf("\n");


	for (i = 0; i < 5; i++) {   // 선택
		for (j = 0; j < 5; j++) {   // 비교대상
			if (arr1[i] < arr1[j]) {
				rank[i] = rank[i] + 1;  // rank[i]++;
			}
		}

	}

	printf("----최종 rank  출력-------\n");
	for(i = 0; i < 5; i++) {
		printf("%3d", rank[i]);
	}
	printf("\n");


	return 0;
}
*/

//  기본순위 기사 산업기사 예시 문제_실전 _ while 숙제
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j;
	int arr1[5] = { 50,60,40,70,30 };
	int rank[5];

	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", arr1[i]);
	}
	printf("\n");

	//----기본 rank  값을 입력------
	for (i = 0; i < 5; i++) {
		rank[i]=1;
	}
	printf("----기본 rank  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", rank[i]);
	}
	printf("\n");



	for (i = 0; i < 5; i++ ) {   // 선택
		for (j = 0; j < 5; j++) {   // 비교대상
			if (arr1[i] < arr1[j]) {
				rank[i] = rank[i] + 1;  // rank[i]++;
			}
		}
	}

	// for문을 while 문으로 변경 방법1 : 처리 후 증가

	//i = 0;
	//while ( i < 5 ) {   // 선택
	//	for (j = 0; j < 5; j++) {   // 비교대상
	//		if (arr1[i] < arr1[j]) {
	//			rank[i] = rank[i] + 1;  // rank[i]++;
	//		}
	//	}
	//	i++;
	//}


	// for문을 while 문으로 변경 방법2 : 증가 후 처리

	//i = -1;
	//while ( i < 4 ) {   // 선택
	//	i++; // i=i+1;
	//	for (j = 0; j < 5; j++) {   // 비교대상
	//		if (arr1[i] < arr1[j]) {
	//			rank[i] = rank[i] + 1;  // rank[i]++;
	//		}
	//	}
	//}


	printf("----최종 rank  출력-------\n");
	for(i = 0; i < 5; i++) {
		printf("%3d", rank[i]);
	}
	printf("\n");


	return 0;
}
*/

//사과 500원, 배 400원, 감 300원일때 5000원으로 구입가능한 경우의 수
/*
#include <stdio.h>
int main() {
	int i, j, k, hap, cnt=0;
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= 13; j++) {
			for (k = 1; k <= 17; k++) {
				hap = i * 500 + j * 400 + k * 300;
				if (hap == 5000) {
					cnt++;
					printf("cnt=%2d, 사과=%2d개, 배=%2d개, 감=%2d개 \n", cnt, i, j, k);
				}
			}
		}
	}
	printf("-----반복문 종료---- \n");

	return 0;
}
*/

// 복합 연산자
/*
#include <stdio.h>
int main() {
	int a = 5;
	int b = 2;
//	a *= b + 3;  // a=a*b+3 ;    (x)
	a *= b + 3;  // a=a*(b+3) ;  (o)
	printf("a= %d,  \n", a);

	return 0;
}
*/




// 기호형 상수
/*
#include<stdio.h>
int main(void){
	const  int  NUM = 2+3;
	int a;
	a= NUM * NUM;
	printf("a=%d \n", a);

	return 0;
}
*/

// #define  NUM  2+3
/*
#include<stdio.h>
#define  NUM  2+3
int main(void) {
	int a;
	a = NUM * NUM;
	//   =2+3 * 2+3
	printf("a=%d \n", a);
	return 0;
}
*/

// 산술연산자 연습
/*
#include<stdio.h>
int main() {
	int a = 13, b = 2;
	float mok;
	printf("a+b= %d \n", a + b);
	printf("a-b= %d \n", a - b);
	printf("a*b= %d \n", a * b);
	printf("a/b= %d \n", a / b);
	printf("a%%b= %d \n", a % b);
	mok = (float)a / b;
	printf("나누기 연산 결과:몫 %f \n", mok);
	return 0;
}
*/

// 대입연산자 연습
/*
#include<stdio.h>
int main() {
	int a = 2, b = 3;
	a*=b+4;   // a=a*b+4  (x)  // a=a*(b+4)  (0)
	printf("a*=b+4---> %d\n", a);
	return 0;
}
*/

// 증감 연산자
/*
#include<stdio.h>
int main() {
	int a = 3, b = 3, c, d, e, f;
	int num1, num2, num3, num4;
	
	++a;  // a=a+1;  // a++;  // a+=1;
	printf("a= %d\n", a);
	b++;  // b=b+1
	printf("b= %d\n", b);

	num1 = num2 = num3 = num4 = 3;
	c = ++num1;  //   num1=num1+1; c=num1;
	printf("c= %d, num1= %d \n", c, num1);

	d = num2++;  //  d=num2; num2=num2+1;
	printf("d= %d, num2= %d \n", d, num2);

	printf("num3=%d, num3주소=%#X \n", num3, &num3);
	e = ++num3 + ++num3 + ++num3;
	printf("num3=%d, e=%d  \n", num3, e);
	printf("num3=%d, num3주소=%#X \n", num3, &num3);

	printf("num4주소=%#X \n",  &num4);
	f = num4++ + ++num4 + num4++;
	printf("num4=%d, f=%d  \n", num4, f);
	printf("num4주소=%#X \n",  &num4);


	return 0;
}
*/

// 함수정의
/*
#include <stdio.h>
int add(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);
int main() {
	int addresult;
	int subresult;
	int mulresult;
	double divresult;
	addresult = add(3 , 4);
	printf("addresult=%d \n", addresult);
	subresult = sub(3, 4);
	printf("subresult=%d \n", subresult);
	mulresult = mul(3, 4);
	printf("mulresult=%d \n", mulresult);
	divresult = div(3, 4);
	printf("divresult=%f \n", divresult);
	return 0;
}

int add(int x, int y) {
	int result;
	result = x + y;
	return result;
}
int sub(int x, int y) {
	int result;
	result = x - y;
	return result;
}
int mul(int x, int y) {
	int result;
	result = x * y;
	return result;
}

double div(int x, int y) {
	double result;
	result = (double)x / y;
	return result;
}
*/

// 9-9.c *100 static 변수
/*
#include <stdio.h>
void count(void);

int main(void){
	int i;
	for ( i = 0; i < 3; i++) {
		printf("i=%d \n", i);
		printf("i주소=%x \n", &i);
	}
	printf("i주소=%x \n", &i);
		count( );	
		
		count( );		
		count( );			
		
		return 0;
}

void count(void){
		static int x;		// 정적 변수, 초기화를 한 번 수행
		int y=0;				// 지역 변수, 초기화를 매번 수행
		x=x+1;
		y=y+1;

		printf("count x 값 : %d, y 값 : %d\n", x, y);
		printf("count x 주소값: %#x\n", &x);
		printf("count y 주소값: %#x\n", &y);
		
		
}
*/





// 피보나치(재귀함수)
// 0, 1, 1, 2, 3, 5, 8, 13
// 1  2  3  4  5  6  7  8
/*
#include <stdio.h>

int fib(int n);
int main() {
	int  input, answer;
	printf("input을 입력하세요= : ?");
	scanf_s("\n%d", &input);
	answer = fib(input);
	printf("fib(%2d)=%3d\n", input, answer);
	return 0;
}
// recursive
int fib(int n) {
	if (n == 1) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}
	else {
		return  fib(n - 1) + fib(n - 2);
	}
}

*/



// 팩토리얼 (되부름)_ 문제2
// 함수-2 fact  // recursive(재귀적) // 5!=5*(5-1)!
// 0!=1 정의
/*
#include<stdio.h>
int fact(int x);
int main(void) {
	int answer, num;
	printf("num를 입력하세요= ");
	scanf_s("%d", &num);
	answer = fact(num);
	printf("answer =%2d \n", answer);

	return 0;
}

int fact(int x) {
	if (x == 0) {
		return  1;
	}
	else {
		return  x * fact(x - 1);
		//        5 * fact(4)
		//              4 * fact(3)
	}

}
*/

//10) Sum=1!+2!+3!+...+NUM! NUM(10항)까지의 합
// recursive(재귀적) 
// 5!=5*(5-1)!   // 1!=1
/*
#include<stdio.h>
int fact(int x);
int main(void) {
	int num, sum=0,cnt;
		printf("num를 입력하세요= ");
		scanf_s("%d", &num);
		for (cnt = 1; cnt <= num; cnt++) {
			sum = sum + fact(cnt);
			printf("cnt =%2d, fact(%2d) =%5d, sum =%10d \n", cnt, cnt, fact(cnt), sum);
		}
		printf("----반복문 종료------ \n");
		printf("cnt =%2d, fact(%2d) =%5d, sum =%10d \n", cnt-1, cnt-1, fact(cnt-1), sum);
	
	return 0;
}
int fact(int x) {
	if (x <= 1) {   // if (x == 1)
		return 1;
	}
	else {
		return x * fact(x - 1);
	}
}
*/

//9) Sum=1+1+2+3+5+8+13+?...+NUM  NUM(10항)까지의 합
// recursive(재귀적) 
/*
#include<stdio.h>
int fib(int x);
int main(void) {
	int num, result;
	while (1) {
		printf("num항을 입력하세요= _ 단 0 입력이면 종료_");
		scanf_s("%d", &num);
		if (num == 0)break;
		printf("num= %d \n", num);
		result = fib(num);
		printf("result= %d \n", result);
	}
	return 0;
}
int fib(int x) {
	if (x <= 2) {  
		return 1;
	}
	else {
		return fib(x - 2) + fib(x - 1);
	}
}
*/


// 배열 정의
/*
#include <stdio.h>
int main(void){
	int student[5];

	student[0] = 90;
	student[1] = 80;
	student[2] = 70;

	printf("첫 번째 학생의 점수 : %d \n", student[0]);
	printf("두 번째 학생의 점수 : %d \n", student[1]);
	printf("세 번째 학생의 점수 : %d \n", student[2]);
	printf("네 번째 학생의 점수 : %d \n", student[3]);
	printf("다섯 번째 학생의 점수 : %d \n", student[4]);

	return 0;
}
*/

// 배열 정의-2
/*
#include <stdio.h>
int main(void){
//	int student[30]={90,80,70};
	int student[30] = { 0 };
	printf("첫 번째 학생의 점수 : %d \n", student[0]);
	printf("두 번째 학생의 점수 : %d \n", student[1]);
	printf("세 번째 학생의 점수 : %d \n", student[2]);
	printf("네 번째 학생의 점수 : %d \n", student[3]);
	printf("다섯 번째 학생의 점수 : %d \n", student[29]);

	return 0;
}
*/

// 배열 정의-3
/*
#include <stdio.h>
#define NUM 5  // 기호형 상수
int main(void){
	int cnt;
	int student[NUM]={90,80,70};
	for (cnt = 0; cnt < NUM; cnt++) {
		printf("cnt=%2d 학생의 점수 : %3d \n", cnt, student[cnt]);
	}
	printf("---반복문 종료----\n");
	for (cnt = 0; cnt < NUM; cnt++) {
		printf("&student[%2d] => %#x  \n", cnt, &student[cnt]);
	}
	printf("---반복문 종료----\n");
	

	return 0;
}
*/

// 배열 정의-4
/*
#include <stdio.h>
#define NUM 5
//#define NUM1 3+4
int main() {
	int cnt, a, b;
	int array1[NUM] = { 90,80,70,60,50 };  // 배열 선언 과 동시에 저장(초기화) 
	int array2[] = { 90,80,70,60,50 };
	int array3[NUM] = { 90,80,70 };
//	a = NUM1 * NUM1;  // a= 3+4 * 3+4;    // a= (3+4) * (3+4);  (x)
//	printf("a=%3d \n", a);  // a=19
//	b = (NUM1) * (NUM1);  // a= (3+4) * (3+4);
//	printf("a=%3d \n", b);

	
	for (cnt = 0; cnt < NUM; cnt++) {
		printf("%3d ", array1[cnt]);
	}
	printf("\n");
	for (cnt = 0; cnt < NUM; cnt++) {
		printf("%#X ", &array1[cnt]);
	}
	printf("\n");
	for (cnt = 0; cnt < NUM; cnt++) {
		printf("*&array1[%2d]=%3d  ", cnt, *&array1[cnt]);
	}
	printf("\n");
	printf("array1[0]=%2d \n", array1[0]);
	printf("&array1[0]=%#x \n", &array1[0]);
	printf("*&array1[0]=%2d \n", *&array1[0]);

	printf("array1[1]=%2d \n", array1[1]);
	printf("&array1[1]=%#x \n", &array1[1]);
	printf("*&array1[1]=%2d \n", *&array1[1]);

	printf("&array1[0]=%#x \n", &array1[0]);
	printf("array1=%#x \n", array1);

	return 0;
}
*/

// 석차 구하기-1
/*
#include <stdio.h>
int main() {
	int i, j, rank;
	int arr1[5] = { 50,60,40,70,30 };
	for (i = 0; i < 5; i++) {
		rank = 1;
		for (j = 0; j < 5; j++) {
			if (arr1[i] < arr1[j]) {
				rank=rank+1;
			}
		}
		printf("arr1[%d]=%4d, rank=%3d \n", i, arr1[i], rank);
	}

}
*/


// 정렬_선택정렬
/*
#include <stdio.h>
int main() {
	int i, j, k, temp;
	int arr1[5] = { 50,60,40,70,30 };
	printf("정렬전 자료 \n");
	for (i = 0; i < 5; i++) {
		printf("%4d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++) {   // 선택
		for (j = i+1; j < 5; j++) {   // 비교대상
			if (arr1[i] > arr1[j]) {
				temp = arr1[i];
				arr1[i] = arr1[j];
				arr1[j] = temp;

			}
		}
		printf("i=%d  : ", i);
		for (k = 0; k < 5; k++) {
			printf("%4d ", arr1[k]);
		}
		printf("\n");
	}
	printf("정렬완성\n");
	for (i = 0; i < 5; i++) {
		printf("%4d ",arr1[i]);
	}
	printf("\n");
	
}
*/

//-------------------------------------------------------





// 5행 5열 정사각형 도형 -1
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j, k=9;
	int a[NUM][NUM] = {0};
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			k = k + 1;
			a[i][j]=k;  // a[i][j]=++k;
		}
	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

// 5행 5열 정사각형 도형 -2 세로로 배치
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j, k=9;
	int a[NUM][NUM] = {0};
	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			k = k + 1;
			a[j][i] =k;
		}
	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

// 5행 5열 직각삼각형 도형 -1
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j, k=9;
	int a[NUM][NUM] = {0};
	for (i = 0; i < NUM; i++) {
		for (j = 0; j <=i; j++) {
			k = k + 1;
			a[i][j]=k;
		}
	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			if (a[i][j] == 0) {
				printf("    ");
			}
			else {
				printf("%3d", a[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
*/

// 5행 5열 직각삼각형 도형 -2
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j, k=9;
	int a[NUM][NUM] = {0};
	for (i = 0; i < NUM; i++) {
		for (j = NUM-i-1; j < NUM; j++) {
			k = k + 1;
			a[i][j]=k;  // a[i][j]=++k;

		}
	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			if (a[i][j] == 0) {
				printf("    ");
			}
			else {
				printf("%3d ", a[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
*/


// 5행 5열 직각삼각형 도형 -3 // 선택 정렬 기초
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j, k=9;
	int a[NUM][NUM] = {0};
	for (i = 0; i < NUM; i++) {
		for (j = i; j < NUM; j++) {
			k = k + 1;
			a[i][j]=k;  // a[i][j]=++k;

		}
	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			if (a[i][j] == 0) {
				printf("    ");
			}
			else {
				printf("%3d ", a[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
*/

// 5행 5열 직각삼각형 도형 -4 // 버블 정렬 기초
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j, k=9;
	int a[NUM][NUM] = {0};
	for (i = 0; i < NUM; i++) {
		for (j = 0; j <= NUM-1-i; j++) { // for (j = 0; j < NUM-i; j++)
			k = k + 1;
			a[i][j]=k;  // a[i][j]=++k;

		}
	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			if (a[i][j] == 0) {
				printf("    ");
			}
			else {
				printf("%3d ", a[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}
*/

// 선택 정렬 *100 
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j;
	int a[5] = { 50,60,40,70,30  };
	int temp;

	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	for (i = 0; i < 5-1; i++) {   // 선택
		for (j = i+1; j < 5; j++) {   // 비교대상
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		int k;
		printf("i=%2d :", i);
		for (k = 0; k < 5; k++) {
			printf("%3d", a[k]);
		}
		printf("\n");
	}
	printf("----정렬 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	return 0;
}
*/
// 선택 정렬 2 *100 while 1
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j;
	int a[5] = { 50,60,40,70,30  };
	int temp;

	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	for (i = 0; i < 4; i++) {
		j = i + 1;
		while( j < 5 ) {
			if (a[i] >  a[j]) {
				temp = a[i];a[i] = a[j];a[j] = temp;
			}
			j++;
		}
	}

	printf("----정렬 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	return 0;
}
*/

// 선택 정렬 3 *100 while 2
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j;
	int a[5] = { 50,60,40,70,30 };
	int temp;

	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	for (i = 0; i < 4; i++) {
		j = i + 1 - 1;
		while (j < 5 - 1) {
			j++;
			if (a[i] > a[j]) {
				temp = a[i]; a[i] = a[j]; a[j] = temp;
			}

		}
	}

	printf("----정렬 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	return 0;
}
*/

//  버블정렬
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j;
	int a[5] = { 50,60,40,70,30 };


	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");

	int temp, k;
	for (i = 0; i < 5-1; i++) {
		for (j = 0; j < 5-1-i; j++) {   // 비교대상
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		printf("i=%2d :",i);
		for (k = 0; k < 5; k++) {
			printf("%3d ", a[k]);
		}
		printf("\n");
	}

	printf("----정렬 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");

	return 0;
}
*/


// 향상된 버블정렬  
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, j;
	int a[5] = { 55, 50,60,70,80 };


	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");

	int temp, k, sw;
	for (i = 0; i < 5-1; i++) {
		sw = 0;
		for (j = 0; j < 5-1-i; j++) {   // 비교대상
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				sw = 1;
			}
		}
		if (sw == 0)break;
		printf("i=%2d :",i);
		for (k = 0; k < 5; k++) {
			printf("%3d ", a[k]);
		}
		printf("\n");
	}

	printf("----정렬 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d ", a[i]);
	}
	printf("\n");

	return 0;
}
*/


// c 포인터 1
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i=3, j=4;
	printf("i=%d\n", i);
	printf("&i=%#x\n", &i);
	printf("*&i=%d\n", *&i);

	printf("j=%d\n", j);
	printf("&j=%#x\n", &j);
	printf("*&j=%x\n", *&j);

	int arr1[5] = { 50,60,70,80 };  //  arr1[0]=50;....  arr1[4]=30;
	printf("arr1[0]=%3d\n", arr1[0]);
	printf("&arr1[0]=%x\n", &arr1[0]);
	printf("*&arr1[0]=%3d\n", *&arr1[0]);
	printf("------------------------\n");
	printf("arr1[1]=%3d\n", arr1[1]);
	printf("&arr1[1]=%x\n", &arr1[1]);
	printf("*&arr1[1]=%3d\n", *&arr1[1]);
	printf("------------------------\n");
	printf("&arr1[0]=%x\n", &arr1[0]);
	printf("arr1=%x\n", arr1);
	printf("------------------------\n");
	printf("arr1[0]=%d\n", arr1[0]);
	printf("*&arr1[0]=%d\n", *&arr1[0]);
	printf("*arr1=%d\n", *arr1);
	printf("*(arr1+0)=%d\n", *(arr1+0));
	printf("------------------------\n");
	printf("arr1[1]=%d\n", arr1[1]);
	printf("*&arr1[1]=%d\n", *&arr1[1]);
	printf("*(arr1+1)=%d\n", *(arr1 + 1));
	printf("------------------------\n");
	printf("*(arr1+1)=%d\n", *(arr1 + 1));
	printf("*arr1+1=%d\n", *arr1 + 1 );
	printf("------------------------\n");

	return 0;
}
*/

// c 포인터 2
/*
#include <stdio.h>
int main() {
	int  i;
	int* ptr;
	i = 3;
	ptr = &i;
	printf("i=%d\n", i);
	printf("&i=%#x\n", &i);
	printf("ptr=%#x\n", ptr);
	printf("*ptr=%d\n", *ptr);
	printf("&ptr=%#x\n", &ptr);
	printf("------------------------\n");
	char arr1[5] = { 'A','F','C','D','E' };
	char* ptr;
	printf("arr1[0]=%c\n", arr1[0]);
	printf("&arr1[0]=%#x\n", &arr1[0]);
	printf("*&arr1[0]=%c\n", *&arr1[0]);
	printf("------------------------\n");
	printf("arr1=%#x\n", arr1);
	printf("&arr1[0]=%#x\n", &arr1[0]);
	printf("&arr1[1]=%#x\n", &arr1[1]);
	printf("&arr1[2]=%#x\n", &arr1[2]);
	printf("--------------\n");
	printf(" *arr1=%c\n", *arr1);
	printf(" *(arr1+0)=%c\n", *(arr1 + 0));
	printf("arr1[0]=%c\n", arr1[0]);
	printf("--------------\n");
	printf(" *(arr1+1)=%c\n", *(arr1 + 1));
	printf("arr1[1]=%c\n", arr1[1]);
	printf("--------------\n");
	printf(" *(arr1+0)=%c\n", *(arr1 + 0));
	printf(" *arr1+0=%c\n", *arr1 + 0);
	printf("--------------\n");
	printf(" *(arr1+1)=%c\n", *(arr1 + 1));
	printf(" *arr1+1=%c\n", *arr1 + 1);


	return 0;
}
*/

// c 포인터 3
/*
#include <stdio.h>
int main() {
	char* p = "korea";
	printf("%s\n", p);
//	printf("p=%c\n", p);
	printf("%s\n", p + 3);
	printf("%c\n", *p);
	printf("%c\n", *(p + 3));
	printf("**&p=%c\n", **&p);
	
	return 0;
}
*/

//	char arr[6] = "korea";
//	char* p;
//	p = arr;

// c 포인터 실전 예상 문제
/*
#include <stdio.h>
int main() {
	char* p = "korea";
	char  array2[] = "morning";
	char* p1 = NULL;
	p1 = array2;   // 
	printf("p1 : %#X\n", p1);
	printf("array2 : %X\n", array2);
	printf("*p1 : %c\n", *p1);
	printf("*array2 : %c\n", *array2);
	printf("*array2+1 : %c\n", *array2+1);
	printf("*(array2+1) : %c\n", *(array2+1));
	printf("*p1+1 : %c\n", *p1+1);
	printf("*(p1+1) : %c\n", *(p1 + 1));
	printf("p : %s\n", p);
	printf("p : %X\n", p);
	printf("p : %s\n", p+3);
	printf("p+3 : %X\n", p+3);
	printf("*p : %c\n", *p);
	printf("*(p+1): %c\n", *(p+1));
	printf("*p + 1: %c\n", *p + 1);

	return 0;
}
*/

// 구조체
/*
#include <stdio.h>
struct group{                      // 구조체 정의
	int a;
	double b;
};
int main(void){
	struct group g1;    	       // 구조체 변수 g1 선언

	g1.a = 10;
	g1.b = 1.1234;

	printf("g1.a의 값: %d \n", g1.a);
	printf("g1.b의 값: %.2f \n", g1.b);

	return 0;
}
*/

// 구조체 입력
/*
#include <stdio.h>
struct group {
	int a;
	double b;
};
int main() {
	struct group g1;
	scanf_s("\n%d", &g1.a);  // scanf("%d", &i); // scanf("%d", &g1.a);
	printf("g1.a의 값: %d \n", g1.a);
	scanf_s("\n%lf", &g1.b);
	printf("g1.b의 값: %f \n", g1.b);

	return 0;
}
*/
// 구조체 시작3
/*
#include <stdio.h>
struct group {
	int a;
	int b;
	float c;
};
int main() {
	struct group g1 = { 10,20,10.1234 };    	      // 구조체 변수의 초기화
	struct group g2 = { 30,40,30.1234 };
	struct group g3 = { 50,60,50.1234 };

	printf("g1.a의 값: %d,  g1.b의 값: %d, g1.c의 값: %f\n", g1.a, g1.b, g1.c);
	printf("g2.a의 값: %d,  g2.b의 값: %d, g2.c의 값: %f\n", g2.a, g2.b, g2.c);
	printf("g3.a의 값: %d,  g3.b의 값: %d, g3.c의 값: %f\n", g3.a, g3.b, g3.c);

	return 0;
}
*/
// 구조체 시작4
/*
#include <stdio.h>
struct group {
	int a;
	int b;
	float c;
};
int main() {
//	struct group g1 = { 10,20,10.1234 };    	      // 구조체 변수의 초기화
//	struct group g2 = { 30,40,30.1234 };
//	struct group g3 = { 50,60,50.1234 };
	struct group g[3] = {
		{ 10,20,10.1234 },
		{ 30,40,30.1234 },
		{ 50,60,50.1234 }
	};
	struct group* point;
	point = g;  // point = &g[0];
	printf("g[0].a의 값: %d,  g[0].b의 값: %d, g[0].c의 값: %f\n", g[0].a, g[0].b, g[0].c);
	printf("g[1].a의 값: %d,  g[1].b의 값: %d, g[1].c의 값: %f\n", g[1].a, g[1].b, g[1].c);
	printf("g[2].a의 값: %d,  g[2].b의 값: %d, g[2].c의 값: %f\n", g[2].a, g[2].b, g[2].c);
	int i;
	for (i = 0; i < 3; i++) {
		printf("g[%d].a의 값: %d,  g[%d].b의 값: %d, g[%d].c의 값: %f\n",i, g[i].a, i, g[i].b, i, g[i].c);
	}
	int j;
	for (j = 0; j < 3; j++) {
	printf("point->a의 값: %d,  point->b의 값: %d, point->c의 값: %f\n",  point->a,  point->b, point->c);
	point++;
	}
	return 0;
}
*/

// 구조체 실습
/*
#include<stdio.h>
struct score {
	int num;
	char name[8];
	int kor;
	int eng;
	int math;
	int total;
	float avg;
	char grade;
	int rank;
};
int main() {
//	struct score member0 = { 1,"김경민",89,75,60 };
//	struct score member1 = { 2,"노순희",67,56,80 };
	struct score member[5] = {
		{1,"김경민",90,95,50},
		{2,"노순희",67,56,77},
		{3,"민은희",90,100,89},
		{4,"이은하",75,86,96},
		{5,"황은영",90,89,79}
	};
	struct score temp;
	int i, j;
	for (i = 0; i < 5; i++) {
		member[i].total = member[i].kor + member[i].eng + member[i].math;
//		member[i].avg = member[i].total / 3.0;
		member[i].avg = (float)member[i].total / 3;
		member[i].rank = 1;
	}
	for (i = 0; i < 5; i++) {
		if (member[i].avg >= 90 && member[i].avg <= 100)
			member[i].grade = 'A';
		else if (member[i].avg >= 80 && member[i].avg < 90)
			member[i].grade = 'B';
		else if (member[i].avg >= 70 && member[i].avg < 80)
			member[i].grade = 'C';
		else if (member[i].avg >= 60 && member[i].avg < 70)
			member[i].grade = 'D';
		else if (member[i].avg >= 0 && member[i].avg < 60)
			member[i].grade = 'F';
		else
			member[i].grade = 'X';
		//			printf("입력자료 확인 하세요 \n");
	}
	for (i = 0; i < 5-1; i++) {
		for (j = i+1; j < 5; j++) {
			if (member[i].total == member[j].total) {
				continue;
			}
			else if (member[i].total > member[j].total) {
				member[j].rank++;
			}
			else {
				member[i].rank++;
			}
		}
	}


	printf("===========정렬 전 자료===========================\n");
	printf("번호\t이름\t국어\t영어\t수학\t총점\t평균\t등급\t석차\n");
	printf("==================================================\n");
	for (i = 0; i < 5; i++) {
		printf("%3d\t%3s\t%3d\t%3d\t%3d\t%3d\t%.2f\t%3c\t%3d\n", member[i].num, member[i].name, member[i].kor, member[i].eng, member[i].math, member[i].total, member[i].avg, member[i].grade, member[i].rank);
	}

	// 선택정렬
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (member[i].total < member[j].total) {
				temp = member[i];
				member[i] = member[j];
				member[j] = temp;

			}
		}
	}

	// 자료 출력 포인터 이용
	struct score* point;
	point = member;
	printf("===========정렬 후 자료===========================\n");
	printf("번호\t이름\t국어\t영어\t수학\t총점\t평균\t등급\t석차\n");
	printf("==================================================\n");
	for (i = 0; i < 5; i++) {
		printf("%3d\t%3s\t%3d\t%3d\t%3d\t%3d\t%.2f\t%3c\t%3d\n", point->num, point->name, point->kor, point->eng, point->math, point->total, point->avg, point->grade, point->rank);
		point++;
	}


	return 0;
}
*/

// 구조체 실습 2
/*
#include<stdio.h>
struct score {
	int num;
	char name[8];
	int kor;
	int eng;
	int math;
	int total;
	float avg;
	char grade;
	int rank;
};
int main() {
	struct score member[5] = {
		{1,"김경민",90,95,50},
		{2,"노순희",67,56,77},
		{3,"민은희",90,100,89},
		{4,"이은하",75,86,96},
		{5,"황은영",90,89,79}
	};
	struct score temp;
	int i, j;
	for (i = 0; i < 5; i++) {
		member[i].total = member[i].kor + member[i].eng + member[i].math;
		member[i].avg = (float)member[i].total / 3;
		member[i].rank = 1;
	}
	for (i = 0; i < 5; i++) {
		switch ((int)(member[i].avg) / 10) {
			case 10:
			case 9:
				member[i].grade = 'A'; break;
			case 8:
				member[i].grade = 'B'; break;
			case 7:
				member[i].grade = 'C'; break;
			case 6:
				member[i].grade = 'D'; break;
			default:
				member[i].grade = 'F';
		}

		//			printf("입력자료 확인 하세요 \n");
	}
	for (i = 0; i < 5-1; i++) {
		for (j = i+1; j < 5; j++) {
			if (member[i].total == member[j].total) {
				continue;
			}
			else if (member[i].total > member[j].total) {
				member[j].rank++;
			}
			else {
				member[i].rank++;
			}
		}
	}


	printf("===========정렬 전 자료===========================\n");
	printf("번호\t이름\t국어\t영어\t수학\t총점\t평균\t등급\t석차\n");
	printf("==================================================\n");
	for (i = 0; i < 5; i++) {
		printf("%3d\t%3s\t%3d\t%3d\t%3d\t%3d\t%.2f\t%3c\t%3d\n", member[i].num, member[i].name, member[i].kor, member[i].eng, member[i].math, member[i].total, member[i].avg, member[i].grade, member[i].rank);
	}

	// 선택정렬
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (member[i].total < member[j].total) {
				temp = member[i];
				member[i] = member[j];
				member[j] = temp;

			}
		}
	}

	// 자료 출력 포인터 이용
	struct score* point;
	point = member;
	printf("===========정렬 후 자료===========================\n");
	printf("번호\t이름\t국어\t영어\t수학\t총점\t평균\t등급\t석차\n");
	printf("==================================================\n");
	for (i = 0; i < 5; i++) {
		printf("%3d\t%3s\t%3d\t%3d\t%3d\t%3d\t%.2f\t%3c\t%3d\n", point->num, point->name, point->kor, point->eng, point->math, point->total, point->avg, point->grade, point->rank);
		point++;
	}

	return 0;
}
*/


//  버블정렬 응용-3_좌우 교대로_진행-1
/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 20
int main(void) {
//	srand((unsigned int)time(NULL));

	int i, j, temp, cnt=0;
	
	int arr[NUM];
	for (i = 0; i < NUM; i++) {
		printf("%3d", i);
	}
	printf("\n");

	for (i = 0; i < NUM; i++) {
		arr[i] = (i + 1) * 4;
	}
	printf("-----------정렬전 자료 출력 ---------\n");
	for (i = 0; i < NUM; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");
	for (i = 6; i < 15; i++){
		arr[i] = rand() % 30 + 25;
		if (i > 0){
			for (j = 0; j < i; j++){
				if (arr[i] == arr[j])
				{
					i--;
				}
				continue;
			}
		}
	}
	printf("-----------정렬전 자료  재 출력 ---------\n");
	for (i = 0; i < NUM; i++){
		printf("%3d", arr[i]);
	}
	printf("\n");
	int left = 0, right = NUM - 1, shift;
	while (left < right)	{
		for (i = left; i < right; i++){
			if (arr[i] > arr[i + 1]){
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				shift = i;
			}
		}
		cnt++;
		printf("cnt=%2d회전, left=%2d, right=%2d \n", cnt, left, right);
		for (i = 0; i < NUM; i++) {
			printf("%3d", arr[i]);
		}
		printf("\n");

		right=shift;

		for (i = right; i > left; i--){
			if (arr[i] < arr[i - 1]){
				temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
				shift = i;
			}
		}
		cnt++;
		printf("cnt=%2d회전, left=%2d, right=%2d \n", cnt, left, right);
		for (i = 0; i < NUM; i++) {
			printf("%3d", arr[i]);
		}
		printf("\n");

		left=shift;
	}

	printf("-----------정렬 완료-----------\n");
	printf("cnt=%2d회전, left=%2d, right=%2d \n", cnt, left, right);
	for (i = 0; i < NUM; i++){
		printf("%3d", arr[i]);
	}
	printf("\n");

	return 0;
}
*/

// c 최종 정리 - 1
/*
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 20
int main() {
	int i, j, temp;
	int arr1[NUM] = { 0 };
//	srand((unsigned int)time(NULL));  //시간에 따라 seed 값 변경
	for (i = 0; i < NUM; i++) {
		arr1[i] = rand() % 90 + 10;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr1[i] == arr1[j]) {
					i--;
					printf(" 자료 : %d 번호는 중복 되어서는 안됩니다.\n",  arr1[j]);
					break;
				}
			}
		}
	}
	printf("----초기자료 출력-------\n");
	for (i = 0; i < NUM; i++) {
		printf("%4d", arr1[i]);
	}
	printf("\n");

//	 버블 정렬
	//int sw;
	//for (i = 0; i < NUM-1; i++) {
	//	sw = 0;
	//	for (j = 0; j < NUM-1-i; j++) {
	//		if (arr1[j] > arr1[j+1]) {
	//			temp = arr1[j];
	//			arr1[j] = arr1[j + 1];
	//			arr1[j+1] = temp;
	//			sw = 1;
	//		}
	//	}
	//	if (sw == 0)break;
	//}

	//	 향상된 선택 정렬 *100
	int cnt, k, lo;
	for (i = 0; i < 20 - 1; i++) {
		cnt = 0;
		lo = i;
		for (j = i+1; j < NUM; j++) {
			if (arr1[lo] > arr1[j]) {
				lo = j;
			}
		}
		temp = arr1[i];
		arr1[i] = arr1[lo];
		arr1[lo] = temp;
		cnt++;
		printf("i=%d : arr1[i : %d]=%d  , lo=%d , arr1[lo : %d]=%d cnt=%2d\n",i , i, arr1[i],  lo, lo, arr1[lo] , cnt);
		for (k = 0; k < NUM; k++) {
			printf("%4d", arr1[k]);
		}
		printf("\n");
	}

	printf("----정렬자료 출력-------\n");
	for (i = 0; i < NUM; i++) {
		printf("%4d", arr1[i]);
	}
	printf("\n");

	// 이분검색 *100
	int input, low, high, mid, flag=0;
	while (1) {
		printf("검색자료 입력 : 단_0_입력:종료 : ");
		scanf_s("%d", &input);
		if (input == 0)break;
		low = 0;	high = NUM - 1,  flag=0;
		while (1) {
		if(low <= high)break;
			mid = (low + high) / 2;
			if (arr1[mid] == input) {
				printf("--------- 검색 자료 출력----------\n");
				printf(" arr1[%d]=%4d \n", mid, arr1[mid]);
				flag = 1;
				break;
			}
			else if (arr1[mid] > input) { high = mid - 1;	}
			else {   low = mid + 1;	}
		}
		if (flag == 0) {
			printf("해당 자료가 없습니다.");
			printf(" low=%3d, high=%3d,  input=%d  \n", low, high, input);
		}
	}

	printf("수고^^ \n");

	return 0;
}
*/

// c 최종 정리 - 2 삽입정렬
/*
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define NUM 20
int main() {
	int i, j, temp;
	int arr1[NUM] = { 0 };
//	srand((unsigned int)time(NULL));  //시간에 따라 seed 값 변경
	for (i = 0; i < NUM; i++) {
		arr1[i] = rand() % 90 + 10;
		if (i > 0) {
			for (j = 0; j < i; j++) {
				if (arr1[i] == arr1[j]) {
					i--;
					printf(" 자료 : %d 번호는 중복 되어서는 안됩니다.\n",  arr1[j]);
					break;
				}
			}
		}
	}
	printf("----초기자료 출력-------\n");
	for (i = 0; i < NUM; i++) {
		printf("%4d", arr1[i]);
	}
	printf("\n");


	//	 삽입정렬
	int key, k;
	for (i = 1; i < 20; i++) {
		key = arr1[i];
		for (j = i-1; j >=0; j--) {
			if (arr1[j] > key) {
				arr1[j + 1] = arr1[j];
			}
			else {
				break;
			}
		}
		arr1[j+1] = key;
		for (k = 0; k < NUM; k++) {
			printf("%4d", arr1[k]);
		}
		printf("\n");
	}

	printf("----정렬자료 출력-------\n");
	for (i = 0; i < NUM; i++) {
		printf("%4d", arr1[i]);
	}
	printf("\n");

	// 이분검색 *100
	int input, low, high, mid, flag=0;
	while (1) {
		printf("검색자료 입력 : 단_0_입력:종료 : ");
		scanf_s("%d", &input);
		if (input == 0)break;
		low = 0;	high = NUM - 1,  flag=0;
		while (1) {
		if(low > high)break;
			mid = (low + high) / 2;
			if (arr1[mid] == input) {
				printf("--------- 검색 자료 출력----------\n");
				printf(" arr1[%d]=%4d \n", mid, arr1[mid]);
				flag = 1;
				break;
			}
			else if (arr1[mid] > input) { high = mid - 1;	}
			else {   low = mid + 1;	}
		}
		if (flag == 0) {
			printf("해당 자료가 없습니다.");
			printf(" low=%3d, high=%3d,  input=%d  \n", low, high, input);
		}
	}

	printf("수고^^ \n");

	return 0;
}
*/
//  10진수를 2진수로 진법변환-1_기초
/*
#include <stdio.h>
int main() {
	int i, dec, mok, na, id;
	int bin[10]={0};

	printf("dec 입력하시오= 단 0:종료");
	scanf_s("%d", &dec);

	id = dec;
	for (i = 0; i < 10; i++) {
		mok = dec / 2;
		na = dec % 2;
		bin[i] = na;
		if (mok == 0)break;
		dec = mok;
	}

	printf("10진수 값=%4d : ", id);
	for (i = 9; i >= 0; i--) {
		printf("%2d", bin[i]);
	}
	printf("\n");

	return 0;
}
*/



//  10진수를 2진수로 진법변환-2_기초
/*
#include <stdio.h>
int main() {
	int i, dec, mok, na, id;
	int bin[10]={0};

	printf("dec 입력하시오= 단 0:종료");
	scanf_s("%d", &dec);

	id = dec;
	for (i = 0; i < 10; i++) {
		if (dec == 0)break;
		na = dec % 2;
		dec= dec / 2;
		
		bin[9-i] = na;
		
	//	dec = mok;
	}

	printf("10진수 값=%4d : ", id);
	for (i = 0; i < 10; i++) {
		printf("%2d", bin[i]);
	}
	printf("\n");

	return 0;
}
*/

//  10진수를 2진수로 진법변환-3_시험용
/*
#include <stdio.h>
int main() {
	int i, dec, na, id;
	int bin[10]={0};

	printf("dec 입력하시오= 단 0:종료  :   ");
	scanf_s("%d", &dec);

	id = dec;
	for (i = 9; i >= 0; i--) {
		if (dec == 0)break;
		na = dec % 2;
		dec = dec / 2;
		
		bin[i] = na;

	}
	int k;
	printf("10진수 값=%4d : ", id);
	for (k = i+1; k< 10; k++) {
		printf("%2d", bin[k]);
	}
	printf("\n");

	return 0;
}
*/

//  10진수를 2진수로 진법변환-4_시험용(x)
/*
#include <stdio.h>
int main() {
	int i, dec, mok, na, id;
	int bin[10] = { 0 };

	printf("dec 입력하시오= 단 0:종료");
	scanf_s("%d", &dec);

	id = dec;
	for (i = 0; i < 10; i++) {
		mok = dec / 2;
		na = dec % 2;
		bin[i] = na;
		if (mok < 2)break;
		dec = mok;
	}

	bin[i+1] = mok;
	printf("10진수 값=%4d : ", id);
	for (i = 9; i >= 0; i--) {
		printf("%2d", bin[i]);
	}
	printf("\n");

	return 0;
}
*/

// 배수 최대값 약수 소수 소인수분해 최대공약수 


//배수 문제8
/*
#include<stdio.h>
int  main() {
	int  i, k, mok, na;
	int cnt = 0, sum = 0;
	printf("1 부터 100 사이의 5 배수를 구하시오\n");
	for (i = 1; i <= 100; i++) {
		// if (i % 2 == 0 || i % 3 == 0){
		if (i % 2 == 0 && i % 3 == 0){
		// if( i % 5 == 0 ){
			cnt = cnt + 1;
			sum = sum + (i);
			printf("6의 배수 인쇄 : %d \n", i);
		}
	}
	printf("cnt=%3d , sum= %3d \n", cnt, sum);
	return 0;
}
*/

//최대값, 최소값-1
/*
#include<stdio.h>
int  main() {
	int a[7] = { 50, 99, 1, 34, 50, 34, 56 };
	int i, max, min, cnt = 1, sum = 0;
	float avg;

	max = 0;	min = 77777777;	sum = 0;

	for (i = 0; i < 7; i++) {
		if (a[i] > max) {  //  if (  max  < a[i]) {
			max = a[i];
		}

	//	max = a[i] > max ? a[i] : max;
		if (min > a[i]) {
			min = a[i];
		}
	//	min = a[i] <  min ? a[i] : min;
		sum = sum + a[i];
	}

	sum = sum - (max + min);
	avg = (float)sum / 5;

	printf("\n------------------------------\n");
	printf("최대값:%3d\n", max);
	printf("최소값:%3d\n", min);
	printf("합:%3d, 평균:%.2f\n", sum, avg);

	return 0;
}
*/

//최대값, 최소값-2 _ 시험용
/*
#include<stdio.h>
int  main() {
	int a[7] = { 50, 99, 1, 34, 50, 34, 56 };
	int i, max, min, cnt = 1, sum = 0;
	float avg;

	max = a[0];	min = a[0];	sum = a[0];
	
	i = 0;
	do{
		i++;
		if (a[i] > max) {  //  if (  max  < a[i]) {
			max = a[i];
		}
		if (min > a[i]) {
			min = a[i];
		}
		sum = sum + a[i];
		
	} while (i < 7-1);

	sum = sum - (max + min);
	avg = (float)sum / 5;

	printf("\n------------------------------\n");
	printf("최대값:%3d\n", max);
	printf("최소값:%3d\n", min);
	printf("합:%3d, 평균:%.2f\n", sum, avg);

	return 0;
}
*/

// 50에 가장 가까운 값 출력하기-시험용 문제10

/*
#include<stdio.h>
#define FIND 50
int  main() {
	int a[7] = { 35, 99, 49, 34, 51, 34, 56 };
	int i, min, diff, k;
	min = 5555555;
	for (i = 0; i < 7; i++) {
		if (a[i] < FIND) {
			diff = FIND - a[i];
		}
		else {
			diff = a[i] - FIND;
		}
		if (min >= diff) {  // if (min >= diff)
			min = diff;
			k = a[i];
		}
	}
	printf("50 근사값:%3d\n", k);

	return 0;
}
*/

//약수 구하기 시험용1  // 6 -> 1, 2, 3, 6  시험용 문제11-1
/*
#include<stdio.h>
int  main() {
	int i, k, num, cnt = 0, mok, na;
	int a[100];
	cnt = 0;
	printf("약수를 구할 숫자를 입력하시오 ");
	scanf_s("\n%d", &num);
	printf("입력 받은 수=%d \n", num);
	for (k = 1; k <= num; k++) {
		if (num % k == 0) {
			
			a[cnt] = k;  // a[cnt++] = k;
			cnt = cnt + 1;

		}
	}
	for (i =cnt; i > 0; i--) {
		printf(" a[%2d]= %3d \n", i-1, a[i-1]);
	}

	return 0;
}
*/

//약수 구하기 시험용 3  * 1000 
/*
#include<stdio.h>
int  main() {
	int i, k, num, cnt = 0;

	printf("약수를 구할 숫자를 입력하시오 ");
	scanf_s("\n%d", &num);
	printf("입력 받은 수=%d \n", num);

	for (i = 1; i <= num; i++) {
		printf("i=%2d : ", i);
		for (k = 1; k <= i; k++) {
			if (i % k == 0) {
				printf("%3d ", k);
			}
		}
		printf("\n");
	}


	return 0;
}
*/

//약수 구하기 시험용 4  (완전수)
/*
#include<stdio.h>
int  main() {
	int i, k, num, cnt = 0;
	printf("약수를 구할 숫자를 입력하시오 ");
	scanf_s("\n%d", &num);
	printf("입력 받은 수=%d \n", num);
	int sum;
	for (i = 1; i <= num; i++) {
		sum = 0;
		printf("i=%2d : ", i);
		for (k = 1; k <= i-1; k++) {  // for (k = 1; k <= i/2; k++)
			if (i % k == 0) {
				printf("%3d ", k);
				sum = sum + k;
			}
		}
		printf("\n");
		if(sum==i) printf("완전수 발견 i=%2d : \n", i);

	}


	return 0;
}

*/

// 소수 구하기   문제12 
/*
#include<stdio.h>
#include<math.h>
int main(void) {
	int i, j, num, na, cnt = 0, sum = 0;
	printf("소수를 구할 숫자를 입력하시오 ");
	scanf_s("\n%d", &num);
	printf("입력 받은 수=%d \n", num);
	for (i = 2; i <= num; i++) {
		int sw = 0;
		for (j = 2; j <= sqrt(i); j++) { // j <= i-1;   // j <= i/2;
			if (i % j == 0) {
				printf(" i=%3d 는 소수가 아님 \n", i);
				sw = 1;
				break;
			}
		}
		if (sw == 0) {
			printf(" i=%3d 는 소수 \n", i);
		}

	}

}
*/
// 소수 구하기 시험용  문제12 
/*
#include<stdio.h>
int main(void) {
	int i, j, num, na, cnt = 0, sum = 0;
	printf("소수를 구할 숫자를 입력하시오 ");
	scanf_s("\n%d", &num);
	printf("입력 받은 수=%d \n", num);
	for (i = 2; i <= num; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0) {
				if (i == j) {
					printf(" i=%3d 는  소수 발견  \n", i);
					break;
				}
				else {
					printf(" i=%3d 는 소수가 아님 \n", i);
					break;
				}
			}
		}
	}

}
*/
// 소인수 분해하기_1
/*
#include<stdio.h>
int main() {
	int i, num, no, mok;

	printf("소인수 분해할 수 입력: ");
	scanf_s("%d", &num);
	printf("입력 받은 수=%d \n", num);

	for (i = 2; i <= num; i++) {
		while (num>1) {
			if (num % i == 0) {
				printf("%d ", i);
			//	mok = num / i;
			//	num = mok;
				num = num / i;
			//	if (num == 1)break;
			}
			else {
				i++;
			}

		}
	//	if (num == 1)break;
	}

	return 0;
}
*/
// 소인수 분해하기_2
/*
#include<stdio.h>
int main() {
	int i, num;

	printf("소인수 분해할 수 입력: ");
	scanf_s("%d", &num);
	printf("입력 받은 수=%d \n", num);

	while (num > 1) {
		i = 2;
		while (1) {
			if (num % i == 0) {
				printf("%d ", i);
				num = num / i;
				break;
			}
			else {
				i = i + 1;
			}
		}
	//	if (num == 1)break;
	}

	return 0;
}
*/

// 최대공약수 최소 공배수 *2023 제 1회 실기 박샘 예상문제
/*
#include<stdio.h>
int main() {
	int num1, num2, small, large, gcm, lcm;

	printf("num1 입력: ");
	scanf_s("%d", &num1);
	printf("num1 입력 받은 수=%d \n", num1);
	printf("num2 입력: ");
	scanf_s("%d", &num2);
	printf("num2 입력 받은 수=%d \n", num2);

	if (num1 > num2) {
		small = num2;
		large = num1;
	}
	else {
		small = num1;
		large = num2;
	}
	while (1) {
		int na = large % small;
		if (na == 0) {
			gcm = small;
			break;
		}
		else {
			large = small;
			small = na;
		}
	}

	lcm = (num1 * num2 )/ gcm;
	printf("gcm=%d, lcm=%d \n", gcm, lcm);

	return 0;
}
*/

// 최대공약수 최소 공배수 *2023 제 1회 실기 박샘 수정
/*
#include<stdio.h>
int main() {
	int num1, num2, small, large, gcm, lcm;

	printf("num1 입력: ");
	scanf_s("%d", &num1);
	printf("num1 입력 받은 수=%d \n", num1);
	printf("num2 입력: ");
	scanf_s("%d", &num2);
	printf("num2 입력 받은 수=%d \n", num2);
	small = num1;
	large = num2;

	while (1) {
		int na = large % small;
		if (na == 0) {
			gcm = small;
			break;
		}
		else {
			large = small;
			small = na;
		}
	}

	lcm = (num1 * num2 )/ gcm;
	printf("gcm=%d, lcm=%d \n", gcm, lcm);

	return 0;
}
*/

//  2 보수 구하기
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, c=1;
	int arr1[5] = { 0,1,1,0,0 }; // { 0,1,1,0,1 };
	int com1[5];
	int com2[5];

	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", arr1[i]);
	}
	printf("\n");

	//1보수 구하기
	for (i = 0; i < 5; i++) {
		com1[i]=1-arr1[i];
	}
	//2보수 구하기
	for (i = 4; i >=0; i--) {
		com2[i]=com1[i]+c;
		com2[i]=com2[i] % 2;
		c=c*com1[i];
	}

	printf("----1 보수 출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", com1[i]);
	}
	printf("\n");

	printf("----2 보수 출력-------\n");
	for(i = 0; i < 5; i++) {
		printf("%3d", com2[i]);
	}
	printf("\n");


	return 0;
}
*/

//  2 보수 구하기 예상문제
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, c = ( 1  )   ;
	int arr1[5] = { 0,1,1,0,0 };
	int com1[5];
	int com2[5];

	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", arr1[i]);
	}
	printf("\n");

	//1보수 구하기
	for (i = 0; i < 5; i++) {
		com1[i] = 1 - arr1[i];
	}
	// i-> 5
	//2보수 구하기
	i=i-1;
	while( i >= 0) {
		com2[i] = com1[i] + c;
		com2[i] = com2[i] % 2;
		c =   c * com1[i]  ;
		i--;
	}

	printf("----1 보수 출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", com1[i]);
	}
	printf("\n");

	printf("----2 보수 출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", com2[i]);
	}
	printf("\n");


	return 0;
}
*/

//  2 보수 구하기 예상문제 2
/*
#include <stdio.h>
#define NUM 5
int main() {
	int  i, c = ( 1  )   ;
	int arr1[5] = { 0,1,1,0,0 };
	int com1[5];
	int com2[5];

	printf("----기본 data  출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", arr1[i]);
	}
	printf("\n");

	//1보수 구하기
	for (i = 0; i < 5; i++) {
		com1[i] = 1 - arr1[i];
	}

	//2보수 구하기
	while( i >= 1) {

		com2[i-1] = com1[i-1] + c;
		com2[i-1] = com2[i-1] % 2;
		c =   c * com1[i-1]  ;
		i--;
	}

	printf("----1 보수 출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", com1[i]);
	}
	printf("\n");

	printf("----2 보수 출력-------\n");
	for (i = 0; i < 5; i++) {
		printf("%3d", com2[i]);
	}
	printf("\n");


	return 0;
}

*/


// 가중치 진법변환  * 100
// 10진수를 N진수로 진법변환-5_가중치 이용
/*
#include <stdio.h>
int main() {
	int dec, n, mok, na;
	char bin[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
	while (1) {
		printf("dec 입력하시오 : 단 0 입력시 종료 --> ");
		scanf_s("%d", &dec);
		if (dec == 0)break;
		printf("dec = %d \n", dec);
		printf("진수 n을 입력하시오 : ");
		scanf_s("%d", &n);
		printf("n = %d \n", n);

		int k = 1;
		while (k <= dec) {
			k = k * n;
		}

		while (1) {  // while (k>1)  // // while (k !=1) 
			k = k / n;
			mok = dec / k;
			na = dec % k;
			printf("%c", bin[mok]);
//			if (k == 1)break;
			dec = na;
		}
		printf("\n");
	}

	return 0;
}
*/
// 화폐 단위별 수량 구하기-1
/*
#include <stdio.h>
int main() {
	int i, m, dec, mok, na, sw=0;
	printf("금액을 입력하시오= 단 0:종료 : ");
	scanf_s("%d", &dec);
	printf("입력금액= %d \n", dec);
	m = 50000;
	for (i = 0; i < 10; i++) {
		mok = dec / m;
		dec = dec % m;  // na = dec-dec/m * m;

		printf("m=%5d, 매수=%3d, \n ", m, mok);
		if (sw == 0) {
			m = m / 5;
			sw = 1;
		}
		else {
			m = m / 2;
			sw = 0;
		}
	}
	return 0;
}
*/

// 5행 5열  ㄹ도형 채우기
/*
#include <stdio.h>
#define NUM 7
int main() {
	int  i, j, k=9;

	int a[NUM][NUM] = { 0 };
	for (i = 0; i < NUM;i++) {
		if (i % 2 == 0) {
			for (j = 0; j < NUM; j++) {
				k = k + 1;
				a[i][j] = k;
			}
		}
		else {
			for (j = NUM-1; j >= 0; j--) {
				k = k + 1;
				a[i][j] = k;
			}
		}
	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/



// 5행 5열  ㄹ도형 채우기  * 시험예상
/*
#include <stdio.h>
#define NUM 7
int main() {
	int  i, j, k=9;
	int st = 0, end = NUM - 1, sw = 1, temp;
	int a[NUM][NUM] = { 0 };
	for (i = 0; i < NUM;i++) {
		for (j = st; j != end+sw; j=j+sw) {
			k = k + 1;
			a[i][j] = k;
		}
	//	temp = st;
	//	st = end;
	//	end = temp;
		st= st + end;
		end = st - end;
		st = st - end;

		sw = -sw;  // sw=sw*(-1);

	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

// 5행 5열  모래시계 도형 채우기 기본1
/*
#include <stdio.h>
#define NUM 7
int main() {
	int  i, j, k=9;
	int st = 0, end = NUM - 1;
	int a[NUM][NUM] = { 0 };
	int mid = NUM / 2;
	for (i = 0; i < NUM;i++) {
		for (j = st; j <= end; j++) {
				k = k + 1;
				a[i][j] = k;
		}
		if (i < mid) {
			st++;
			end--;
		}
		else {
			st--;
			end++;
		}

	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

// 5행 5열  모래시계 도형 채우기 기본2
/*
#include <stdio.h>
#define NUM 7
int main() {
	int  i, j, k=9;
	int st = (-1) , end = NUM;
	int a[NUM][NUM] = { 0 };
	int mid = NUM / 2;
	for (i = 0; i < NUM;i++) {
		if (i < mid) {
			st = st + 1;
			end = end - 1;
		}
		else {
			st--;
			end++;
		}
		for (j = st; j <= end; j++) {
				k = k + 1;
				a[i][j] = k;
		}



	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/


// 5행 5열  마름모 도형 채우기 
/*
#include <stdio.h>
#define NUM 7
int main() {
	int  i, j, k=9;
	int a[NUM][NUM] = { 0 };
	int mid = NUM / 2;
	int st = mid, end = mid;
	for (i = 0; i < NUM;i++) {
		if (i < mid) {
			st--;
			end++;
		}
		else {
			st++;
			end--;
		}
		for (j = st; j <= end; j++) {
				k = k + 1;
				a[i][j] = k;
		}


	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/

// 5행 5열  모래시계 도형 채우기_시험용 *100 
/*
#include <stdio.h>
#define NUM 7
int main() {
	int  i, j, k = 1;
	int st, end;
	int a[NUM][NUM] = { 0 };
	int mid = NUM / 2;
	for (i = 0; i < NUM; i++) {
		if (i <= mid) {
			st=i;
			end=NUM-1-i;
		}
		else {
			st = NUM - 1 - i;
			end = i;
		}
		for (j = st; j <= end; j++) {
			k = k + 1;
			a[i][j] = k; // a[i][j] = ++k;


		}

	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/



// 마방진
// 5행 5열 직각삼각형 도형 -5 마방진
/*
#include <stdio.h>
#define NUM 7
int main() {
	int  i, j, k;
	int r = 0, c = NUM / 2;
	int a[NUM][NUM] = { 0 };
	for (k = 1; k <= NUM* NUM; k++) {
		a[r][c] =k;
		if (k % NUM == 0) {
			r = r + 1;
		}
		else {
			r = r - 1;
			c = c + 1;
			if (r < 0) r = NUM - 1;
			if (c > NUM - 1) c = 0;
		}
	}

	for (i = 0; i < NUM; i++) {
		for (j = 0; j < NUM; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
*/














