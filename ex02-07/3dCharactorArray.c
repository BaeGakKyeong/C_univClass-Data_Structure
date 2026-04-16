#include <stdio.h>

int main(){
    char students[2][3][20];

    for(int i = 0; i < 2; i++){
        printf("\n학생 %d의 이름 : ", i + 1);
        fgets(students[i][0], sizeof(students[i][0]), stdin);
        //getchar();

        printf("학생 %d의 학과 : ", i + 1);
        fgets(students[i][1], sizeof(students[i][1]), stdin);
        //getchar();

        printf("학생 %d의 학번 : ", i + 1);
        fgets(students[i][2], sizeof(students[i][2]), stdin);
        //getchar();
    }

    for(int i = 0; i < 2; i++){
        printf("\n학생 %d\n", i + 1);

        for(int j = 0; j < 3; j++){
            fputs(students[i][j], stdout);
        }
    }
}