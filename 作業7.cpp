#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main()
{
	char user[100];
	char get;
	int win=0;
	int x=0;
	int counter=0;
	int a,b,d;
	printf("�п�J�r��G");
	for(a=0;a<=100;a++)
	{
		user[a]=getchar();
		if(user[a]=='\n')
		{break;}
	}
	for(b=0;b<128;b++)
	{
		counter=0;
		for(d=0;d<=a;d++)
		{
			if(char(b)==user[d])
			{		
				counter++;
			}			
		}
		if(counter>x)
		{
			x=counter;
			get=char(b);
		}
	}
	printf("�j�M��̦h�����r��:%c\n",get);
	printf("�X�{���Ƭ�:%d\n",x);
	system("pause");
}
