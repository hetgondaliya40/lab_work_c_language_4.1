#include<stdio.h>
#include<conio.h>

void main(){
	int x,y,sum=0;
	clrscr();
	printf("enter value X :");
	scanf("%d",&x);
	printf("enter value Y :");
	scanf("%d",&y);
	sum=(x+y)*2;
	printf("ans = %d",sum);
	getch();
}
