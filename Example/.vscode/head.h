/**
@Date:2017-8-3
@Description: 
    如果要在main(),return 0之前调用函数
    在main()中调用atexit(void* f)方法即可
int main(void)
{
    atexit(middle);
    return 0;
}
*/
#include <stdlib.h>
static void before(void) __attribute__((constructor));
static void after(void) __attribute__((destructor));
static void middle(void);
static void before()
{
    system("chcp 65001");
    system("cls");
}
static void after()
{
    system("echo.");
    system("pause");
}
