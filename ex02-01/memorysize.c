#include <stdio.h>

int main(){
    char c, c_array[100];   //char: 1byte
    int i, i_array[100];    //int: 4byte
    short s, s_array[100];  //short: 2byte
    float f, f_array[100];  //float: 4byte
    long l, l_array[100];   //long: 8byte
    
    //sizeof 함수로 변수나 배열의 크기를 바이트 단위로 표시한다.
    printf("\n char의 크기: %d,\tchar_array[100]의 크기: %4d", sizeof(c), sizeof(c_array)); //sizeof의 매개변수로 배열을 넘기려면 배열포인터를 사용한다.
    printf("\n int의 크기: %d,\tint_array[100]의 크기: %4d", sizeof(i), sizeof(i_array));
    printf("\n short의 크기: %d,\tshort_array[100]의 크기: %4d", sizeof(s), sizeof(s_array));
    printf("\n float의 크기: %d,\tfloat_array[100]의 크기: %4d", sizeof(f), sizeof(f_array));
    printf("\n long의 크기: %d,\tlong_array[100]의 크기: %4d", sizeof(l), sizeof(l_array));

    //getchar(); 함수를 사용하면, main함수가 실행되자마자 닫히는 현상을 방지하여 키 입력시까지 대기한다.
}