#include <stdio.h>
#include <stdlib.h>


void main(){
    //선택정렬(큰 값부터 내림차순)
    //반복문을 진행하면서 값을 저장해 비교하는 것이 아닌 ***인덱스*** 값을 저장
    int a[10]={5,2,3,6,1,3,9,15,4,4};
    int Asize = sizeof(a)/sizeof(a[0]);
    int maxI,d;

    for(int i =0; i<Asize; i+=1){
        maxI = i;
        for(int j = i+1; j<Asize; j+=1){
            if(a[j]>a[maxI]){
                maxI = j;
            }
        }
        if(maxI !=i){
            a[i] = a[i]^a[maxI];
            a[maxI] = a[i]^a[maxI];
            a[i] = a[i]^a[maxI];
        }

    }

    for(int i = 0; i<Asize; i+=1){
        printf("%d ", a[i]);
    }
    //선택 정렬 끝

    printf("\n\n\n");


    //버블 정렬(내림차수 정렬)
    int b[10] = {5,2,1,6,2,3,7,16,9,0};
    int r = sizeof(b)/sizeof(b[0]);
    int swap;//gpt는 신이다
    for(int i =r-1; i>0; i-=1 ){
        swap=0;
        for(int j = 0;j<i; j+=1){
            if(b[j]<b[j+1]){
                b[j] = b[j]^b[j+1];
                b[j+1] = b[j]^b[j+1];
                b[j]=b[j]^b[j+1];
                swap=1;
            }
        }
        if(swap==0){
            break;
        }
    }

    for(int i = 0; i<r; i+=1){
        printf("%d ",b[i]);
    }


}