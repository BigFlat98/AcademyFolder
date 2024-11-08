#include <stdio.h>

void main(){
    int i=1,j,k=0;

    // while(i<=9){
    //     j=1;
    //     printf(" %d 단 \n",i);
    //     while(j<=9){
    //         k = i*j;

    //         printf("%2d *%2d = %2d \n", i, j, k);
    //         j+=1;
    //     }
    //     printf("-----%d단 종료---- \n", i);
    // 	printf("i=%2d , j=%2d , k=%2d \n", i, j, k);
        
    //     i+=1;
    // }
    // printf("구구단 종료");
    // printf("i=%2d , j=%2d , k=%2d \n", i, j, k);



    //while문 종료 후 while문 밖에서 사용한 변수의 값을 확인했을 때 더해진 값이 아닌 우리가 의도한 값대로 나오는 코드
    // i=0;
    // while(i<9){
    //     i+=1;
    //     j=0;
    //     printf(" %d 단 \n",i);
    //     while(j<9){
    //         j+=1;
    //         k = i*j;
    //         printf("%2d *%2d = %2d \n", i, j, k);
    //     }
    //     printf("-----%d단 종료---- \n", i);
    // 	printf("i=%2d , j=%2d , k=%2d \n", i, j, k);
    // }
    // printf("구구단 종료");
    // printf("i=%2d , j=%2d , k=%2d \n", i, j, k);





    // i=0;
    // do{
    //     i+=1;
    //     j=0;
    //     do{
    //         j+=1;
    //         k = i*j;
    //         printf("%2d *%2d = %2d \n", i, j, k);
    //     }while(j<9);
    //     printf("-----%d단 종료---- \n", i);
    // 	printf("i=%2d , j=%2d , k=%2d \n", i, j, k);

    // }while(i<9);
    // printf("구구단 종료");
    // printf("i=%2d , j=%2d , k=%2d \n", i, j, k);



    // i=0;
    // while(1){
    // i+=1;
    //     j=0;
    //     while(1){
    //     j+=1;
    //         k = i*j;
    //         printf("%2d *%2d = %2d \n", i, j, k);
             
    //         if(j==9) break;
    //     }
        
    //     if(i==9) break;
    // }
    
   
   
        int array[10];
        for (i = 2; i <= 9; i++) {
            for (j = 1; j <= 9; j++) {
                array[j-1] = i * j;
            }
            for(int t = 0; t<9;t+=1){
                printf("%2d *%2d = %2d ,", i, t+1, array[t]);
            }
            printf("-----%d단 종료---- \n", i);
    		printf("i=%2d , j=%2d , k=%2d \n", i, j, k);
        }
        printf("---구구단 종료--------- \n");
    	printf("i=%2d , j=%2d , k=%2d \n", i, j, k);

        
    

}