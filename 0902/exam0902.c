#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
    printf("hello c!");


    printf("\t Hello C! \n Hello World! \n");
    printf("큰따옴표: \"홍길동\" \n");
    printf("작은 따옴표: \'ㅁ\' \n");

    int a = 10;
    char b[] = "asdf";


    printf("10진수= %d, 16진수=%#X, 8진수= %#o, 문자=%c\n",a,a,a,(char)a);
    printf("문자열=%s\n",b);

    int s = 0;
    scanf("정수 입력:%d",&s);
    char *str = (char *)malloc((s+1)*sizeof(char));    //배열 생성 시 끝에 \0 들어가
    
    str =(char *)realloc(str, 1000*sizeof(char));
    
    
    free(str);//할당한 메모리 해제


    
    return 0;
}