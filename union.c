#include<stdio.h>
union stud{
	int a,b;
	char name[20];
	float per;
};
int main()
{
	union stud a;
	printf("size is:%d",sizeof(a));
}
