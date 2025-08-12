#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//在有序数组中查找某个元素是否存在
//二分查找法
int main (){
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int k = 0;
    int left = 0;
    // int right = 9;
    int right = sizeof(arr) / sizeof(arr[0]) - 1; // 计算数组的最后一个索引
    int mid = 0;
    printf("请输入要查找的元素：");
    scanf("%d", &k);
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == k) {
            printf("%d 存在于数组中\n", k);
            break; // 找到元素后退出循环
        }
        else if (arr[mid] < k) {    
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    if (left > right) {
        printf("%d 不存在于数组中\n", k);
    }
    return 0;
}