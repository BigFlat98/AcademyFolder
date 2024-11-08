#include <stdio.h>
#define Num = 5
void main(){
    
    int a[8] = {5,6,4,5,1,7,3,1};
    int n = sizeof(a)/sizeof(a[0]);


    //선택정렬 1
    // for(int i =0; i<n-1; i+=1){
    //     for(int j = i+1; j<n; j+=1){
    //         if(a[i]>a[j]){
    //             a[i] = a[i]^a[j];
    //             a[j] = a[i]^a[j];
    //             a[i] = a[i]^a[j];

    //         }
    //     }
    // }


    // 선택정렬 2
    // int ind;
    // for(int i = 0; i<n-1; i+=1){
    //     ind = i;
    //     for(int j = i+1; j<n; j+=1){
    //         if(a[ind]>a[j]){
    //             ind = j;
    //         }
    //     }
    // if(i==ind){
    //     continue;
    // }
    // else{
    //      a[i] = a[i]^a[ind];
    //     a[ind] = a[i]^a[ind];
    //     a[i] = a[i]^a[ind];
    // } 
    // }


    //버블 정렬
    // int swap;
    // for(int i =0;i<n-1;i+=1){
    //     swap = 0;
    //     for(int j=0; j<n-i-1;j+=1){
    //         if(a[j]>a[j+1]){
    //             a[j] = a[j]^a[j+1];
    //             a[j+1] = a[j]^a[j+1];
    //             a[j] = a[j]^a[j+1];
    //             swap = 1;
    //         }
    //     }

    //     if(swap==0){
    //         printf("정렬 완료 \n");
    //         break;
    //     }
    // }

    // for(int i = 0; i<n; i+=1){
    //     printf("%d ",a[i]);
    // }

    // for(int i=2; i<10;i+=1){
    //     for(int j=1; j<10; j+=1){
    //         if(i%2==1&&j%2==0){
    //             printf("|%2d*%2d=%2d|",i,j,i*j);
    //         }
    //     }
    //     printf("\n");
    // }


    for(int i=2; i<10;i+=1){
        for(int j=1; j<10; j+=1){
            if(j>5){
                continue;
            }
            printf("|%2d*%2d=%2d|",i,j,i*j);
        }
        printf("\n");
    }



}