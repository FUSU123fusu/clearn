#include <stdio.h>
#define add(x, y) ((x) + (y)) //宏定义

struct stu{
    char name[20];
    int age;
    char sex [10];
    char telephone[20];
};
void print(struct stu* ps){
    //printf("%s, %d, %s, %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).telephone);
    //-> 结构体指针访问成员
    //结构体指针
    printf("%s, %d, %s, %s\n", ps->name, ps->age, ps->sex, ps->telephone);
}
int main (void)
{
    struct stu s = {"Tom", 20, "male", "1234567890"}; //结构体变量

    printf("%s, %d, %s, %s\n", s.name, s.age, s.sex, s.telephone); //输出结构体变量的值
    
    // int a = 10;//申请4个字节的内存空间
    // // &a; 取地址
    // int* p = &a; //指针变量p指向了变量a的地址
    // //指针变量
    // *p = 20; //通过指针变量修改a的值
    // printf("%d\n", a); //输出a的值
    // printf("%d\n", *p); //输出指针变量p指向的值
    // printf("%d\n", &a); //输出变量a的地址
    printf("hello world\n");
   print(&s); //通过函数输出结构体变量的值
    return 0;
}
