#include <stdio.h>

int main(){
    int score[3] = {91, 86, 97};
    char grade[3] = {'A', 'B', 'A'};

    printf("***학년별 취득 학점***");
    for(int i = 0; i < 3; i++){
        printf("\n%d학년 : 총점 = %d, 등급 = %c", i + 1, score[i], grade[i]);
    }
}