/*#include<stdio.h>
struct stud{
	int a,b;
	char name[20];
	float per;
};
int main()
{
	struct stud a;
	printf("size is:%d",sizeof(a));
}*/

#include<stdio.h>
struct stud{
	int a,b;
	char name[20];
	float per;
};
int main()
{
	struct stud a;
	printf("size is:%d\n",sizeof(a));
	a.a=10;
	a.b=20;
	printf("Enter name: ");
	gets(a.name);
	a.per=75.6;
	printf("%d",a.a);
	printf("\n%d",a.b);
	printf("\n%s",a.name);
	printf("\n%.1f",a.per);
}
