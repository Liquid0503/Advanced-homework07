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
	printf("請輸入字串：");
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
	printf("搜尋到最多次的字為:%c\n",get);
	printf("出現次數為:%d\n",x);
	system("pause");
}
