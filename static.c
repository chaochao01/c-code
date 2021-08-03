#include<stdio.h>
void test()
{
    static int a=1;  //修饰局部变量，a的每次++值呗保留下来
    a++;             //修饰全局变量时，改变变量作用域，出源文件将无法使用
    printf("%d\n",a);
}

int main(){
    int i=0;
    while (i<5)
    {
        test();
        i++;
    }
    
    return 0;
}