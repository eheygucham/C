//나무 높이 측정
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main(void) {
    double height, distance, tree_height, degrees, radians;

    printf("나무와의 길이(단위는 미터): ");
    scanf("%lf", &distance);  // 사용자로부터 나무와의 길이 입력 받기

    printf("측정자의 키(단위는 미터): ");
    scanf("%lf", &height);  // 사용자로부터 측정자의 키 입력 받기

    printf("각도(단위는 도): ");
    scanf("%lf", &degrees);  // 사용자로부터 각도 입력 받기

    radians = degrees * (3.141592 / 180.0);  // 입력받은 각도를 라디안으로 변환

    tree_height = tan(radians) * distance + height;  // 삼각비를 이용하여 나무의 높이 계산

    printf("나무의 높이(단위는 미터): %lf \n", tree_height);  // 계산된 나무의 높이 출력

    return 0;
}


