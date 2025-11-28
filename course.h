#ifndef COURSE_H
#define COURSE_H


typedef struct {
    char name[50]; 
    char teacher[50]; 
    char time[30]; 
    char classroom[30];
} Course;

void add_course(Course courses[], int *count);
void query_course(Course courses[], int count);

#endif
