#include<stdio.h>

unsigned char a;//0x00-0xff 1个字节
unsigned short b;//0x0000-0xffff 2个字节
unsigned int c;//0x00-0xffffffff 4个字节

// float temp = 37.5;  
// char *mac ="192.168.31.84";  
//  1.底层将mac地址转化为数组 2.上报到服务器 3.服务器根据协议转化为字符串
// char mac_array[4]={192,168,31,84};  //array：数组 
// char temp_array[2]={37.5}

//5FCB0F4F
unsigned char time_buffer[4]={0X5F,0XCB,0X0F,0X4F};
unsigned int time;

unsigned int u8Tou32B(unsigned char *buffer){
    return(((((((unsigned int)buffer[0])<<8)|buffer[1])<<8)|buffer[2])<<8)|buffer[3];
}

void main()
{
    printf("hello,world\n");
    printf("%d %d %d\n",sizeof(a),sizeof(b),sizeof(c));
    time =u8Tou32B(time_buffer);
    printf("time= %d s\n",time);
}