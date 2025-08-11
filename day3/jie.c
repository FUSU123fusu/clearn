#include <stdio.h>
int main() {
    // int i = 1;
    // int n = 0;
    // int j = 1;
    // scanf("%d", &n);
    // for (i = 1; i <= n; i++) {
    //     j *= i;
    // }
    // printf("n的阶乘是%d", j);
    int i = 1;
    int j = 1;
    int n = 1; // 当前阶乘项
    int sum = 0;
    while (n <= 3)
    {
        j = 1;
        for (i = 1; i <= n; i++)
        {
            j *= i;
        }
        sum += j;
        n ++;
    }
    printf("n的阶乘之和是%d", sum);
    return 0;
}