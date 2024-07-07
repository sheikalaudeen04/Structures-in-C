#include<stdio.h>
 struct player{
 	char str[1000];
 	int runs;
 }a[11];
 int main(){
 	//struct player a[11];
 	int i,sum=0;
 	printf("Enter player name and the score corresponding to them.\n");
 	for(i=0;i<=10;i+=1){
 		printf("Name: ");
 		scanf("%s",a[i].str); 
 		printf("Score: ");
 		scanf("%d",&a[i].runs);
	 }
	for(i=0;i<=10;i+=1){
		sum+=a[i].runs;}
	printf("The sum of scores is %d",sum);
	 
 }
