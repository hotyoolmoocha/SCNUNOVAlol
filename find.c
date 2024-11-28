#include <stdio.h>


int max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;

}

int main(void)
{

    int x,y,larger;

    printf("정수 2개를 입력하세요:");
    scanf("%d %d", &x,&y);

    larger = max(x,y);

    printf("더 큰값은 %d입니다. \n",larger);
    return 0;

}


void print_Stars()
{

    for(int i = 0; i<30; i++)
            printf("*");

}


int main(void){

    print_Stars();

    return 0;
}

double sub1(double d)
{

    sub2(100.0);
    
}