//삼각함수 그리기
#include <stdio.h>
#include <math.h>

// 원주율 상수 정의
#define PI 3.141592

// degree를 radian으로 변환하는 함수
double rad(double degree)
{
    return PI * degree / 180.0;
}

// 높이에 맞게 막대 그리기 함수
void drawbar(int height)
{
    for (int i = 0; i < height; i++)
        printf("*");
    printf("\n");
}

int main(void) {
    int degree, x, y;
    
    // 0도부터 180도까지 10도씩 증가하면서 반복
    for (degree = 0; degree <= 180; degree += 10) {
        // sin 함수를 이용하여 높이 계산
        y = (int)(60 * sin(rad((double)degree)) + 0.5);
        
        // 막대 그리기 함수 호출
        drawbar(y);
    }
    
    return 0;
}

