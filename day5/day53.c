//猜数字
#include <stdio.h>
#include <stdlib.h>
#include <time.h> // For time function
void menu(){
    printf("欢迎来到猜数字游戏！\n");
    printf("**********\n");
    printf("1.开始游戏\n");
    printf("2.退出游戏\n");
    printf("**********\n");
}
//0--RAND_MAX32767
void game(){
    int guess;
    //1生成随机数
    int ret = rand()%100 + 1;// 生成1到100之间的随机数
    //2提示用户猜数字
    printf("请猜一个1到100之间的数字：\n");
    while (1){
    scanf("%d",&guess);
        if(guess <ret){
        printf("猜小了！\n");
}
else if(guess > ret){
        printf("猜大了！\n");
}
else{
        printf("恭喜你，猜对了！\n");
        break; // 猜对了，退出循环
         }
    }
}
int main(){
    int input;
    srand((unsigned int)time (NULL));//设置随机数种子
    do
    {
        menu();
      
        printf("请选择：");
        scanf("%d",&input);
        switch(input){
            case 1:
                printf("开始游戏...\n");
                // 游戏逻辑可以在这里实现
                game();
                break;  
            case 2:
                printf("退出游戏...\n");
                break;  
            default:
                printf("输入错误，请重新输入！\n");
                break;
        }
    }while (input != 2);
    
    
    return 0;
}