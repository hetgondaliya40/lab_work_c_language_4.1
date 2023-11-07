#include<stdio.h>
#include<conio.h>

void main(){
	int a=1,b=2;
	clrscr();
	printf("enter value a: ");
	scanf("%d"&a);
	printf("enter value b: ");
	scanf("%d"&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	getch();
}
