#include <stdio.h>
#include <stdbool.h>
bool nh(int x)//x la nam
{
	if (x%4==0)
		if (x%100==0)
			if (x%400!=0)
				return 0;
			else
				return 1;
		else
			return 1;
	else
		return 0;
}
int main()
{
	short na, th, ng, i, j;//na: nam, th: thang, ng: ngay, i va j la bien dem trong for
	long long d=0;//bien dem so ngay
	printf("Nhap ngay: ");
	scanf("%d", &ng);
	while(ng>31||ng<1)//nhap sai ngay
	{
		printf("Nhap lai: ");
		scanf("%d", &ng);	
	}
	printf("Nhap thang: ");
	scanf("%d", &th);
	while(th>12||th<1)//nhap sai thang
	{
		printf("Nhap lai: ");
		scanf("%d", &th);	
	}
	while ((th==2&&ng>29)||((th==4||th==6||th==9||th==11)&&ng>30))//nhap sai ngay doi voi thang co 30 va thang 2
	{
		printf("Nhap lai ngay: ");
		scanf("%d", &ng);
	}
	printf("Nhap nam: ");
	scanf("%d", &na);
	while(na<1)//nhap sai nam
	{
		printf("Nhap lai: ");
		scanf("%d", &na);	
	}
	while ((th==2)&&(nh(na)==0)&&(ng==29))//nhap sai ngay doi voi nam nhuan
	{
		printf("Nhap lai ngay: ");
		scanf("%d", &ng);
	}
	for(i=1; i<=na; i++)
	{
		if (i<na)
		{
			d=d+365;
			if (nh(i)==1)
				d=d+1;
		}
		else
			for (j=1; j<=th; j++)
				if (j<th)
					if(j==2)
						{
							if (nh(na)==0)
								d=d+28;
							else
								d=d+29;	
						}
					else
						if (j==4||j==6||j==9||j==11)
						{
							d=d+30;
						}
						else
						{
							d=d+31;
						}
				else
					d=d+ng;
	}
	printf("Day la ngay thu %lld ke tu ngay 1/1/1", d);
}
