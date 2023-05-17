//자동차 게임
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

// 자동차를 표시하는 함수
void disp_car(int car_number, int distance) {
    int i;
    printf("CAR #%d: ", car_number);
    
    // 거리에 따라 *를 출력하여 자동차 표시
    for (i = 0; i < distance / 10; i++) {
        printf("*");
    }
    
    printf("\n");
}

int main(void) {
    int i;
    int car1_dist = 0, car2_dist = 0;

    // 시드 값 설정
    srand((unsigned)time(NULL));

    for (i = 0; i < 6; i++) {
        // 각 자동차의 거리를 랜덤하게 증가시킴
        car1_dist += rand() % 100;
        car2_dist += rand() % 100;
        
        // 각 자동차의 거리 출력
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        printf("-------------------\n");
        
        // 사용자 입력 대기
        _getch();
    }

    return 0;
}

