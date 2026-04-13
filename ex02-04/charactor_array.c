#include <stdio.h>

int main(){
    char data[20] = "Data Structure!";

    printf("문자배열: data[] : ");
    for(int i = 0; i < 20; i++){
        printf("%c", data[i]);
    }
}