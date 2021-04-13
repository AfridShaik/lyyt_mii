#include"funtion.h"
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
int student_input(){ 
Student s;
	int num=1,x,count=0,*ptr,i;
	FILE *fptr;
	while(num!=0)
	{
		printf("\nEnter Student details:\n");
		printf("\nEnter Name:");
		gets(s.name);
		printf("\nEnter Registration number:");
		gets(s.registration_number);
		loop1:
		printf("\nEnter the graduation year:\nPress 1 for I\nPress 2 for II\nPress 3 for III\nPress 4 for IV\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1: strcpy(s.year,"I");
			break;
			case 2: strcpy(s.year,"II");
			break;
			case 3: strcpy(s.year,"III");
			break;
			case 4: strcpy(s.year,"IV");
			break;
			default: printf("\nYou have entered a wrong choice"); 
			goto loop1;
			break;
		}
		loop2:
		printf("\nEnter the department name:\nPress 1 for CSE\nPress 2 for ECE\nPress 3 for EEE\nPress 4 for IT\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1: strcpy(s.department,"CSE");
			break;
			case 2: strcpy(s.department,"ECE");
			break;
			case 3: strcpy(s.department,"EEE");
			break;
			case 4: strcpy(s.department,"IT");
			break;
			default: printf("\nYou have entered a wrong choice"); 
			goto loop2;
			break;
		}
		strcpy(s.course,"B.Tech");
		printf("\nEnter age of the student:");
		scanf("%d",&s.age);
		loop3:
		printf("\nEnter gender of the student:\nPress 1 for Male\nPress 2 for Female\nPress 3 for Other\n");
		scanf("%d",&x);
		switch(x)
		{
			case 1: strcpy(s.gender,"Male");
			break;
			case 2: strcpy(s.gender,"Female");
			break;
			case 3: strcpy(s.gender,"Other");
			break;
			default: printf("\nYou have entered a wrong choice"); 
			goto loop3;
			break;
		}
		printf("Enter Student Marks:\n");
	
		// For Subject 1
		printf("\nFor Subject 1:");
		s1 = marks_input_function();
		// For Subject 2
		printf("\nFor Subject 2:");
		s2 = marks_input_function();
		// For Subject 3
		printf("\nFor Subject 3:");
		s3 = marks_input_function();
		// For Subject 4
		printf("\nFor Subject 4:");
		s4 = marks_input_function();
		// For Subject 5
		printf("\nFor Subject 5:");
		s5 = marks_input_function();
		// For Subject 6
		printf("\nFor Subject 6:");
		s6 = marks_input_function();
		
		ptr = (int*)calloc(6, sizeof(int));
		
		if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
	    }
	    else {	
	    ptr[0] = s1.sub_status;
		ptr[1] = s2.sub_status;
		ptr[2] = s3.sub_status;
		ptr[3] = s4.sub_status;
		ptr[4] = s5.sub_status;
		ptr[5] = s6.sub_status;
        for (i = 0; i < 6; ++i) {
            count+=ptr[i];
        }
	    }
		fptr = fopen("E:/program.txt","w");
		fprintf(fptr,"Student Details are:\n%s \n %s \n %s \n %s \n %s \n %d \n %s \n",s.name,s.registration_number,s.course,s.year,s.department,s.age,s.gender);
		
	   if(fptr == NULL)
	   {
	      printf("Error!");   
	      exit(1);             
	   } 
	   else
	   {
	   		if(count==6)
	   		{
	   			fprintf(fptr,"\n %s have passed this semester with 0 backlogs",s.name);	
			}
			else
			{
				count = 6-count;
				fprintf(fptr,"\n %s have passed this semester with %d backlogs",s.name,count);
			}
	   }
	   
	   fclose(fptr);
		printf("Do you want to report for other student?\nPress 1 for Yes\nPress 0 for No\n");
		scanf("%d",&num);
	}	
}