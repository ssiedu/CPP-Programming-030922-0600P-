#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float sal;
	void getdata()
	{
		printf("\nEnter Employee Id :");
		scanf("%d",&id);
		printf("\nEnter Employee Name : ");
		scanf("%s",&name);
		printf("\n Enter Employee Salary : ");
		scanf("%f",&sal);
	}
	void display()
	{
		printf("\n Employee Id : %d",id);
		printf("\n Employee Name : %s",name);
		printf("\n Employee salary : %.2f",sal);
	}
}emp;
int main()
{
	emp.getdata();
	emp.display();
	return 0;
}




