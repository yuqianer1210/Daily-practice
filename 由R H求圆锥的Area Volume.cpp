#include<stdio.h>
#include<math.h>
#define N 3.1415926
double V(double r, double h)
{
	double V;
	V = 1.0 / 3 * N*r*r*h;
	return V;
}
double S(double r, double h)
{
	double S;
	S = 1.0*N * r*sqrt(r*r + h * h)+N*r*r;
	return S;
}

int main()
{
	double r, h;
	scanf_s("%lf%lf", &r, &h);
	printf("Radius=%.2f,Height=%.2f,Area=%.2f,Volume=%.2f", r, h, S(r, h), V(r, h));
	return 0;
}