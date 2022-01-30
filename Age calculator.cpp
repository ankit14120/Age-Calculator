// Age calculator
#include<stdio.h>
#include<conio.h>
void main()
{	int y1,y2,m1,m2,d1,d2,a,b,c,d;
	clrscr();
	printf("\n \tThis is a age calculator \n\t Find your approximate age here\n");
	printf("\n Enter today's date in yyyy:mm:dd\n");
	printf("\n Enter current day:");
	scanf("%d",&d1);
	printf("\n Enter current month:");
	scanf("%d",&m1);
	printf("\n Enter current year:");
	scanf("%d",&y1);
	printf("\n **************************\n");
	printf("\n Enter birth day:");
	scanf("%d",&d2);

	if(d2>d1)
	{	c=d1+30;
		printf("\n d1=%d and d2=%d",c,d2);
	}
	else
	{	c=d1;
		printf("\n d1=%d and d2=%d",c,d2);
	}
	printf("\n Enter birth month:");
	scanf("%d",&m2);
	if(m2>m1)
	{	b=m1+12;
		printf("\n m1=%d and m2=%d",b,m2);
	}
	else
	{	b=m1;
		printf("\n m1=%d and m2=%d",b,m2);
	}
	printf("\n Enter birth year:");
	scanf("%d",&y2);
	a=y1-y2;
	if(y1>y2)
	{	d=a-1;
		printf("\n y1=%d and y2=%d",d,y2);
	}
	else
	{	d=a;
		printf("\n y1=%d nad y2=%d",d,y2);
	}
	printf("\n **************************\n");
	printf("\n your are %d day old ",c-d2);
	printf("\n your are %d month old ",b-m2);
	printf("\n your are %d year old ",d);
	printf("\n\t\n you are %dyears %dmonths %ddays",d,b-m2,c-d2);
getch();
}