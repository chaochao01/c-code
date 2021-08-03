#include<stdio.h>


int main(){
    int a = 10;  //4个字节
    int* p = &a;  //取地址，将a的地址赋予指针p
    //printf("%p\n",&a);
    //printf("%p\n",p);
    *p = 20;  //* -解引用操作符   通过指针p找到a，将20赋予a
    printf("a= %d\n",a);
    //指针在32位大小为4字节，在64位操作系统上为8字节
    return 0;
}