//시간 맞추기 게임
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t start, end;
    start = time(NULL);  // 프로그램 시작 시간 저장
    printf("10초가 되면 아무 키나 누르세요\n");

    while (1) {
        if (getchar())  // 사용자로부터 키 입력 대기
            break;  // 키 입력 시 반복문 종료
    }

    printf("종료되었습니다\n");
    end = time(NULL);  // 프로그램 종료 시간 저장
    printf("경과된 시간은 %ld 초입니다.\n", end - start);  // 경과 시간 출력

    return 0;
}

