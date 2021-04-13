#include<stdio.h>
#include"funtion.h"

int internal_calculation(int a,int b,int c,int aa,int bb,int cc,int dd,int ee,int att)
{
	return ((a + b + c)/5)+(((aa + bb + cc + dd + ee)*18)/50) + att;
}
int total_marks_calculation(int a,int b)
{
	return a+b;
}