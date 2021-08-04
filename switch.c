#include<stdio.h>


int main(){
    int day = 0;
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("工作日\n");
            break;
        case 6:
        case 7:
            printf("休息日\n");
            break;   
    }
    return 0;
}


/* int main(){
    int day = 0;
    scanf("%d",&day);
    switch(day)
    {
        case 1:
            printf("工作日\n");
            break;
        case 2:
            printf("工作日\n");
            break;
        case 3:
            printf("工作日\n");
            break;
        case 4:
            printf("工作日\n");
            break;
        case 5:
            printf("工作日\n");
            break;
        case 6:
            printf("休息日\n");
            break;  
        case 7:
            printf("休息日\n");
            break;   
    }
    return 0;
} */