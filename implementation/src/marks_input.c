#include"funtion.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
    struct Subject_Marks marks_input_function(){
	struct Subject_Marks m;
	loop4:
	printf("\nEnter marks for mid1:");
	scanf("%d",&m.mid1);
	printf("\nEnter marks for mid2:");
	scanf("%d",&m.mid2);
	printf("\nEnter marks for mid3:");
	scanf("%d",&m.mid3);
	if(m.mid1 > 30 || m.mid1 < 0 || m.mid2 > 30 || m.mid2 < 0 || m.mid3 > 30 || m.mid3 < 0)
	{
		printf("\nYou have entered a wrong choice");
		goto loop4;
	}
	loop5:
	printf("\nEnter marks for wt1:");
	scanf("%d",&m.wt1);
	printf("\nEnter marks for wt2:");
	scanf("%d",&m.wt2);
	printf("\nEnter marks for wt3:");
	scanf("%d",&m.wt3);
	printf("\nEnter marks for wt4:");
	scanf("%d",&m.wt4);
	printf("\nEnter marks for wt5:");
	scanf("%d",&m.wt5);
	if(m.wt1 > 10 || m.wt1 < 0 || m.wt2 > 10 || m.wt2 < 0 || m.wt3 > 10 || m.wt3 < 0 || m.wt4 > 10 || m.wt4 < 0 || m.wt5 > 10 || m.wt5 < 0)
	{
		printf("\nYou have entered a wrong choice");
		goto loop5;
	}
	loop6:
	printf("\nEnter the attendace percentage:\nPress 1 for attendance below 70%%\nPress 2 for attendance between 70 - 80%%\nPress 3 for attendance between 80 - 90%%\nPress 4 for attendance above 90%%\n");
	scanf("%d",&m.attendance);
	if(m.attendance<1 || m.attendance>4)
	{
		printf("\nYou have entered a wrong choice");
		goto loop6;
	}
	m.internal = internal_calculation(m.mid1,m.mid2,m.mid3,m.wt1,m.wt2,m.wt3,m.wt4,m.wt5,m.attendance);
	//m.internal = ((m.mid1 + m.mid2 + m.mid3)/5)+(((m.wt1 + m.wt2 + m.wt3 + m.wt4 + m.wt5)*18)/50) + m.attendance;
	loop7:
	printf("\nEnter marks for externals (out of 60):");
	scanf("%d",&m.external);
	if(m.external>60 || m.external<0)
	{
		printf("\nYou have entered a wrong choice");
		goto loop7;
	}
	m.total = total_marks_calculation(m.internal, m.external);
	if(m.total < 50 || m.internal < 24 || m.external < 26)
	{
		m.sub_status = Failed;
	}
	else 
	{
		m.sub_status = Passed;
	}
	return m;	
}