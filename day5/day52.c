//模拟用户登录，最多三次
#include <stdio.h>
#include <string.h> // For strcmp function
int main() {
    int i =0;
    char password[10];
    //假设是字符串
    for (i=0; i<3; i++)
    {
        printf("请输入密码：");
        scanf("%s", password);//数组名本来就是地址，不需要取地址
        if (strcmp(password,"abcdef")==0)//比较两个字符串是否相等别用==，用strcmp,返回0表示相等，否则不相等
        {
            printf("登录成功！");
            break; // 登录成功，退出循环
    }
    else {
        printf("密码错误！还可以尝试%d次\n", 2-i);
    }
    }
    return 0;
}