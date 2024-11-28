#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main(){
    
    int mid  = 0;
    int n;
    int m;
    int sum = 1;
    do
    {

        printf("1--1부터 n까지 더하기\n");
        printf("2--1부터 n까지 곱하기\n");
        printf("3--n부터 m까지 더하기\n");
        printf("하나를 선택하시오\n");
        scanf("%d",&mid);
            
    }while(mid<1||mid>3);

    switch(mid){

    case 1:
        printf("값을 입력해주세요: ");
        scanf("%d",&n);
        sum = 0;
        for(int i = 1; i<=n; i++){
            sum += 1;
        }
        printf("다 더한 값은 %d 입니다", &sum);

    case 2:
        printf("값을 입력해주세요: ");
        scanf("%d",&n);
        sum = 0;
        for(int i = 1; i<=n; i++){
            sum *= 1;
        }
        printf("다 곱한 값은 %d 입니다", &sum);

    case 3:
        printf("n값을 입력해주세요: ");
        scanf("%d",&n);
        printf("m값을 입력해주세요: ");
        scanf("%d",&m);
        sum = 0;
        for(int i = n; i<=m; i++){
            sum += i;
        }
        printf("다 더한 값은 %d", &sum);
    }


    printf("선택된 메뉴 = %d\n",mid);
2
    return 0;

}