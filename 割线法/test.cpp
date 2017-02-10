#include <iostream>
#include <cmath>
using namespace std;

//double k = 0;
double e = 0.00005;
int cnt = 0;

double f(double x)
{
	return pow(x , 3) - 3 *x -1;
}
double abj(double t)
{
	if(t>0)
		return t;
	else
		return -t;
}



void solu(double x0 , double x1)
{
	double x2 = x1 - (f(x1) / (f(x1) - f(x0))) * (x1 - x0);
	cout<<++cnt<<". "<<x0<<"\t"<<x1<<endl;
	while(abj(x2 - x1) >e)
	{
		x0 = x1;
		x1 = x2;
		x2 = x1 - (f(x1) / (f(x1) - f(x0))) * (x1 - x0);
		cout<<++cnt<<". "<<x0<<"\t" <<x1<<endl;
		
	}

	
}

int main()
{
	solu(2.0  , 1.8);
	return 0;
}
