#include <stdio.h>
# pragma warning(disable:4996)

int main (void) 
{
    // 정수형 변수에 대한 예제
    /* int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age); */

    // 실수형 변수에 대한 예제
    // float f = 46.5;
    // printf("%.2f\n", f);
    // double d = 4.428;
    // printf("%.2lf\n", d);

    // const YEAR = 2000; // 상수
    // printf("태어난 년도 : %d\n", YEAR);

    // printf
    // 연산
    // int add = 3 + 7; // 10
    // printf("3 + 7 = %d\n", add);
    // printf("%d x %d = %d\n", 30, 79, 30 * 79);

    // scanf
    // 키보드 입력을 받아서 저장
    // int input;
    // printf("값을 입력하세요 : ");
    // scanf("%d", &input);
    // printf("입력값 : %d\n", input);

    // int one, two, three;
    // printf("3개의 정수를 입력하세요 : ");
    // scanf("%d %d %d", &one, &two, &three);
    // printf("첫번째 값 : %d\n", one);
    // printf("두번째 값 : %d\n", two);
    // printf("세번째 값 : %d\n", three);

    // 문자(한 글자), 문자열 (한 글자 이상의 여러 글자)
    // char c = 'A';
    // printf("%c\n", c);

    // char str[256];
    // scanf("%s", str, sizeof(str));
    // printf("%s\n", str);

    // 프로젝트
    // 경찰관이 범죄자의 정보를 입수 (조서 작성)
    // 이름? 나이? 몸무게? 키? 범죄명?

    char name[256];
    printf("이름이 뭐예요? ");
    scanf("%s", name, sizeof(name));

    int age;
    printf("몇살이에요? ");
    scanf("%d", &age);

    float weight;
    printf("몸무게는 몇 kg 이예요? ");
    scanf("%f", &weight);

    double height;
    printf("키는 몇 cm 이에요? ");
    scanf("%lf", &height);

    char what[256];
    printf("무슨 범죄를 저질렀어요? ");
    scanf("%s", what, sizeof(what));

    // 조서 내용 출력
    printf("\n\n--- 범죄자 정보 ---\n\n");
    printf(" 이름\t : %s\n", name);
    printf(" 나이\t : %d\n", age);
    printf(" 몸무게\t : %.2f\n", weight);
    printf(" 키\t : %.2lf\n", height);
    printf(" 범죄\t : %s\n", what);



    return 0;
}