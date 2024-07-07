#include<stdio.h>
#include<stdlib.h>
struct Book{//actual total bytes are 64
	char Bname[25];
	char Nname[25];
	int Npages;
	float Bprice;
};
typedef struct Book Bk;//typedef is a keyword to create a user defined datatype,Bk is a user defined variable.
int main(){
	/*Bk a={"C program","Dennis Ritche",456,560.50};
	Bk *b=&a;
	printf("Size of ptr:%d",sizeof(b));*/
	Bk *b;//since we are using poiter, the struct gets allocated as 8 bytes.
	b=(Bk*)malloc(sizeof(Bk));//since we are yet to give the values to the variables we are using memory allocation.
	scanf("%d",&b->Npages);
	scanf("%f",&b->Bprice);
	scanf("%s",b->Bname);
	scanf("%s",b->Nname);
	printf("\n%s\n%s\n%d\n%f\n",b->Bname,b->Nname,/*a.Npages*/b->Npages,b->Bprice);
	printf("%d\n",sizeof(struct Book));
	printf("%d\n",sizeof(Bk));
}

