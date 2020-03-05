#include <iostream>
#include <math.h>
using namespace std;
void FourCir(double r[100], double x[100], double y[100], double a[100])
{
	r[0] = 0.5;/*the radius*/
	a[0] = 1.0;/*the length of the square*/
	x[0] = -0.5;
	y[0] = 0.5;
	for (int i = 1; i <= 99; i = i + 4)
	{
		for (int j = 0; j <= 4; j++)/*calculate the four equal little circle*/
		{
			r[i + j] = 0.5 * a[i-1] - sqrt(2) / 2 * r[i - 1];
			a[i + j] = 2 * r[i + j];
		}
		x[i] = -r[i];
		y[i] = r[i];
		x[i + 1] = -r[i];
		y[i + 1] = 1 - r[i];
		x[i + 2] = r[i] - 1;
		y[i + 2] = r[i];
		x[i + 3] = r[i] - 1;
		y[i + 3] = 1 - r[i];
	}
}
int main()
{
	double r[100]; 
	double x[100]; 
	double y[100]; 
	double a[100];
	FourCir(r,x,y,a);
	int m;
	cout << "put in m:";
	cin >> m;
	for (int k = 0; k < m; k++)
	{
		cout << "the " << k + 1 << "th circle's radius is " << r[k] << ",X-axis is " << x[k] << ",Y-axis is " << y[k] << endl;
	}
	double sum = 0;
	for (int h = 0; h < m; h++)
	{
		sum += pow(r[h], 2);
	}
	cout << "the sum of r^2 is " << sum;
	return 0;
}