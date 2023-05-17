//동전 던지기 게임
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// 동전 던지기 함수    
int coin_toss(void);

int main(void) {
    int toss;
    int heads = 0;
    int tails = 0;
    
    // 시드 값 설정
    srand((unsigned)time(NULL));

    // 100번 동전 던지기 반복
    for (toss = 0; toss < 100; toss++) {
        // 동전 던지기 결과에 따라 앞면(heads) 또는 뒷면(tails) 갯수 증가
        if (coin_toss() == 1)
            heads++;
        else
            tails++;
    }
    
    // 앞면(heads)과 뒷면(tails) 개수 출력
    printf("동전이 앞면: %d\n", heads);
    printf("동전의 뒷면: %d\n", tails);
    
    return 0;
}

// 동전 던지기 함수 정의
int coin_toss(void) {
    // 0 또는 1의 랜덤 값 반환 (앞면: 1, 뒷면: 0)
    int head = rand() % 2;
    return head;
}

