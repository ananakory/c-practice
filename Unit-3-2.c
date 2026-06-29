#include <stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;
    int three=3;

    printf("%d %d %d %d %d %d %d\n", 1, 2, 3, 4, 5);
    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, two, ten - two);
    printf("Doing it wrong: ");
    printf("%d minus %d is %d\n", ten);  // 遗漏两个参数，会打印乱码

    getchar();
    return 0;
}
