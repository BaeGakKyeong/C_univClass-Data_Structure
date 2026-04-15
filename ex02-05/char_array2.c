//입력받은 문자열의 길이를 배열을 이용하여 구하기
#include <stdio.h>

int main(){
    char str[20];

    printf("문자열을 입력하시오 : ");
    fgets(str, sizeof(str), stdin);

    int index = 0, charactorCount;
    while(str[index] != '\0'){
        charactorCount = ++index;
    }
    charactorCount--;
    
    printf("\n입력받은 문자열 : ");
    for(int i = 0; i < charactorCount; i++){
        printf("%c", str[i]);
    }

    printf("\n\n입력된 문자열의 길이 : %d", charactorCount);

    return 0;
}