//C程序存储空间布局
#include <stdio.h>
#include <stdlib.h>

int inited_data = 100;          //初始化数据段
int uninited_data;              //未初始化数据段
static int static_data;         //未初始化数据段

void count(void)
{
    static int num = 1;         //初始化数据段
    printf("\tthe %dth time\n", num);
    printf("\tAddress of local static varible: %p\n", &num);
}
int main(void)
{
    int local_data = 200;       //栈区
    char *p;                    //堆区
    
    p = (char *)malloc(4);
    printf("Text Location:\n");
    printf("\tAddress of main(Code Segment):%p\n", main);
    printf("____________________________________________\n");
    printf("Data Location\n");
    printf("\tAddress of inited global varible: %p\n", &inited_data);
    for (int i = 0; i < 5; i++)
    {
        count();
    }
    printf("____________________________________________\n");
    printf("BSS Location:\n");
    printf("\tAddress of uninited global varible %p\tuninited_data = %d\n", &uninited_data, uninited_data);
    printf("\tAddress of uninited global static varible %p\tuninited_global_static= %d\n", &static_data, static_data);
    printf("____________________________________________\n");
    printf("Heap Location:\n");
    printf("\tAddress of dynamic pointer %p\n", p);
    printf("____________________________________________\n");
    printf("Stack Location:\n");
    printf("\tAddress of local_data %p\n", &local_data);
    
    return 0;
}
