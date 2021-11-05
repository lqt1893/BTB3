#include <stdio.h>
#include <math.h>
int gt(int a)
{
	int y, j=1;
	for (y=1; y<=a; y++)
		j=j*y;
	return j;
}
float mu(float a, float b)
{
	int j=1, y;
	for (y=1; y<=b; y++)
		j=j*a;
		return j;
}
int main()
{
	float k, x, n, g;
	int i;
	printf("Nhap n: ");
	scanf("%f", &n);
	printf("Nhap x: ");
	scanf("%f", &x);
	for(i=0; i<=n; i++)
	{
		k=k+mu(-1,i)*(mu(x,2*i)/gt(2*i));
	}
	printf("S=%.2f\n", k);
}
