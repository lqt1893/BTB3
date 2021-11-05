#include <stdio.h>
#include <stdbool.h>
bool nh(int x)
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
	int n, na, th, ng, i, j;
	long long d=0;
	printf("Nhap ngay: ");
	scanf("%d", &ng);
	while(ng>31||ng<0)
	{
		printf("Nhap lai: ");
		scanf("%d", &ng);	
	}
	printf("Nhap thang: ");
	scanf("%d", &th);
	while(th>12|th<0)
	{
		printf("Nhap lai: ");
		scanf("%d", &th);	
	}
	printf("Nhap nam: ");
	scanf("%d", &na);
	while ((th==2)&&(nh(na)==0)&&(ng==29))
	{
		printf("Nhap lai ngay: ");
		scanf("%d", &ng);
	}
	while(na<1)
	{
		printf("Nhap lai: ");
		scanf("%d", &na);	
	}
	for(i=1; i<=na; i++)
	{
		if (i<na)
		{
			d=d+365;
			if (nh(i)==1)
				d=d+366;
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
