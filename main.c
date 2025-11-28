#include "course.h"
#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(936);
    SetConsoleCP(936);
    #endif

    Course courses[20];
    int course_count = 0;
    int choice;

    printf("===== 课表管理小助手_36=====\n");
    while (1) {
        printf("\n请选择功能：\n");
        printf("1. 添加课程\n");
        printf("2. 查询课表\n");
        printf("0. 退出程序\n");
        printf("输入选择：");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_course(courses, &course_count);
                break;
            case 2:
                query_course(courses, course_count);
                break;
            case 0:
                printf("退出程序成功！\n");
                return 0;
            default:
                printf("输入错误，请重新选择！\n");
        }
    }
}