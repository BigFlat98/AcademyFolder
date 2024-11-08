#include<stdio.h>
#define max 10
#define money 5000
void main(){
    // for(int i =2; i<10; i+=1){
    //     for(int j = 1; j<=i; j+=1){
    //         if(i%2==0){
    //             printf("|%2d*%2d=%2d| ",i,(10-j),i*(10-j));
    //         }
    //         else{
    //             printf("|%2d*%2d=%2d| ",i,j,i*j);
    //         }
    //     } 
    //     printf("\n");
    // }

    // int a[max][max] = {0};
    // int k = 0;
    // for(int i = 0; i<max; i+=1){
    //     for(int j = 0; j<=i;j+=1){
    //         k+=1;
    //         a[i][j] =k;
    //     }
    // }

    // for(int i = 0; i<max; i+=1){
    //     for(int j = 0; j<max;j+=1){
    //        printf("%3d",a[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // //시계방향으로 90도 회전
    // int b[max][max];
    // for(int i = 0; i<max; i+=1){
    //     for(int j = 0; j<max;j+=1){
    //     //    b[j][max-1-i] = a[i][j];
    //     b[i][j]=a[max-1-j][i];
           
    //     }
    // }
    // for(int i = 0; i<max; i+=1){
    //     for(int j = 0; j<max;j+=1){
    //        printf("%3d",b[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");



    // int a = 300,b=400,c=500,sum = 0;
    // printf("%d %d %d\n",money/a,money/b,money/c);
    // for(int i = 0; i<=money/a; i+=1){
    //     for(int j = 0; j<=money/b; j+=1){
    //         for(int t = 0; t<=money/c; t+=1){
    //             if(((a*i)+(b*j)+(c*t))<=5000){
    //                 sum+=1;
    //                 printf("a=%d, b=%d, c=%d\n",i,j,t);
    //             }
    //         }
    //     }
    // }
    // printf("모든 경우의 수:%d\n",sum-1);


        //버블 정렬
    int arr[max] = {6,7,6,9,1,5,3,9,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s=1;
    int swap;
    int index = n-1;
    int a=0,b;
    
    while(1){
        if(s==1){
            b=index;
        }
        else if(s==(-1)){
            a=index;
        }
        
        for(int i= a; i!=b; i+=s){
            
            if(s==1){
                if(arr[i]<arr[i+1]){
                    arr[i] = arr[i]^arr[i+1];
                    arr[i+1] = arr[i]^arr[i+1];
                    arr[i] = arr[i]^arr[i+1];
                    index = i+1;
                }
            }
            else{
                if(arr[i]<arr[i-1]){
                    arr[i] = arr[i]^arr[i-1];
                    arr[i-1] = arr[i]^arr[i+1];
                    arr[i] = arr[i]^arr[i-1];
                    index = i-1;
                }
            }
        }
        s = s*(-1);
        a=a^b;
        b=a^b;
        a=a^b;
        
    }
    
}