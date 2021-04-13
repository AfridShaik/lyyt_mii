#include<stdlib.h>
#include<string.h>
#include<stdio.h>

#ifndef __FUNTION_H__
#define __FUNTION_H__

//Student details are mentioned in this structure
typedef struct Students { 
	char name[50];
	char registration_number[15];
	char year[4];
	char department[6];
	char course[30];
	int age;
	char gender[7];
} Student;

//Student Marks in various exams for a subject
struct Subject_Marks {
	int mid1,mid2,mid3,wt1,wt2,wt3,wt4,wt5,external,attendance,internal,total,sub_status;
};

//Marks input function
struct Subject_Marks marks_input_function();

struct Subject_Marks s1,s2,s3,s4,s5,s6;

enum State {Passed = 1, Failed = 0};




int student_input();

int marks_input();


int internal_calculation(int a,int b,int c,int aa,int bb,int cc,int dd,int ee,int att);

int total_marks_calculation(int a,int b);

int main(void);



#endif 