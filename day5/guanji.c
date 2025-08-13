#include <stdio.h>
#include <string.h> // for strcmp function
#include <stdlib.h> // for system function

int main() {
    char input[20] = {0};
    // 设置系统在1000秒后关机，这里使用1000秒（约16分40秒）作为示例
    system("shutdown -s -t 1000");
    printf("Attention! Your computer will shut down in 60 seconds!\n");
    printf("If you want to cancel the shutdown, please enter: I am a dog\n");
    
    while (1) {
        fgets(input, sizeof(input), stdin); // 使用fgets读取一行输入
        // 去除换行符
        input[strcspn(input, "\n")] = 0; 

        // 比较输入的字符串
        if (strcmp(input, "I am a dog") == 0) {
            system("shutdown -a"); // 取消关机
            printf("Shutdown has been cancelled!\n");
            break; // 成功取消关机，退出循环
        } else {
            printf("Incorrect input, the shutdown will continue!\n");
        }
    }
    return 0;
}