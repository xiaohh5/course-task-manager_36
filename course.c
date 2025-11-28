#include "course.h"
#include <stdio.h>
#include <string.h>

// 添加课程
void add_course(Course courses[], int *count) {
    if (*count >= 20) {
        printf("课程数量已达上限（最多20门）！\n");
        return;
    }
    Course c;
    printf("请输入课程名：");
    scanf("%s", c.name);
    printf("请输入老师名：");
    scanf("%s", c.teacher);
    printf("请输入上课时间（如“周一1-2节”）：");
    scanf("%s", c.time);
    printf("请输入教室：");
    scanf("%s", c.classroom);

    courses[*count] = c;
    (*count)++;
    printf("课程添加成功！\n");
}

// 查询所有课程
void query_course(Course courses[], int count) {
    if (count == 0) {
        printf("暂无课程，请先添加！\n");
        return;
    }
    printf("\n===== 我的课表（学号后两位36）=====\n");
    for (int i = 0; i < count; i++) {
        printf("第%d门课：\n", i+1);
        printf("  课程名：%s\n", courses[i].name);
        printf("  老师：%s\n", courses[i].teacher);
        printf("  时间：%s\n", courses[i].time);
        printf("  教室：%s\n", courses[i].classroom);
        printf("-------------------\n");
    }
}