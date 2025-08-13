//多个字符从两端向中间汇聚
#include <stdio.h>
#include <string.h>
#include <windows.h> // For Sleep function
#include <stdlib.h> // For system function
int main() {
    char arr1[] = "welcome to c programming";
    char arr2[] = "########################";
    int left = 0;
    int right = strlen(arr1) - 1;
    // int right = sizeof(arr1) / sizeof(arr1[0]) - 2; // -2 to exclude the null terminator
    while(left <=right){
    
    arr2[left] = arr1[left];
    arr2[right] = arr1[right];
    printf("%s\n", arr2);
    Sleep(1000);//暂停1000ms
    //清空屏幕
    system("cls");//system是一个库函数，可以执行命令行命令，这里是清空屏幕
    left++;
    right--;
    }
    printf("%s\n", arr2);
    return 0;
}