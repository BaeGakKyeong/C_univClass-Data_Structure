//1 ~ 9까지의 숫자를 입력받아 해당 숫자의 구구단을 출력하는 프로그램
#include <stdio.h>

int main(){
    int number;

    printf("1 ~ 9 사이의 자연수를 입력하시오 : ");
    scanf("%d", &number);
    
    for(int i = 1; i < 10; i++){
        printf("\n%d * %d =\t%d", number, i, number * i);
    }

    return 0;
}