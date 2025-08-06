#include <stdio.h>
// typedef unsigned int uint;
// typedef struct Node {
//     int data;
//     struct Node *next;
// } Node;

// int add (int x,int y)
// {
// int z = 0;
// z =x+y;
// return z;
// }
// #include <stdio.h>
// int main (void){
//     int n1 = 0;
//     int n2 = 0;
//     //输入
//     scanf("%d,%d",&n1,&n2);
//     //int sum = n1+n2;
//     int sum = add(n1,n2);
//     printf("%d\n",sum);
//     return 0;
// }
// void test() {
//     static int a = 1;
//     a++;
//     printf("%d\t", a);
// //     }
// extern int g_val;//声明一个全局变量
// int main (void) {
    // int a[20] ={10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
    // // printf("%d\n", a[8]);
    // int i = 0;
    // for (i = 0; i < 20; i++) {
    //     printf("%d\n", a[i]);
    // }
    //sizeof是个单目操作符
    // int a = 0;
    // int b = 0;
    // printf("请输入两个整数：");
    // scanf("%d,%d",&a,&b);
    // int r = a > b ? a :b;
    // // printf("较大值为：%d\n",r);
    // uint a = 1;
    // Node n2;    
    // for (int i = 0; i < 10; i++) {
    //     test();
    // }
    // printf("%d\n",g_val);

//     return 0;
// }
//static
//1.修饰局部变量
//2.修饰函数
//修饰全局变量
// int add (int x,int y)
// {
//     int z = 0;
//     z = x + y;
//     return z;
// }
// extern int add(int x, int y); // 声明函数
// int main (void) {
//     int n1 = 0;
//     int n2 = 0;
//     scanf("%d,%d",&n1,&n2);
//     int sum = add(n1,n2);
//     printf("%d\n",sum);
//     return 0;
// }
//register --寄存器
// int main (void) {
//     //寄存器变量
//     register int a = 0;//建议将a放在寄存器中
//     for (a = 0; a < 10; a++) {
//         printf("%d\n", a);
//     }
//     return 0;
// }