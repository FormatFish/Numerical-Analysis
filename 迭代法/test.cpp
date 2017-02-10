#include <iostream>
#include <cmath>
using namespace std;

double k = 0;
double e = 0.005;
int cnt = 0;
/*double f2(double x)
{
	return pow(1.0 / x + 1 , 1.0 / 2.0);
}

double f1(double x)
{
	return sqrt(1 + 1.0 / x);
}
*/

  //   x = x^3 - 1

/*double f(double x)
{
	return x*x*x - 1;
}

double g(double x)
{
	return 3*x*x;
}
*/

double f(double x)
{
	return log( 2* cos(x));
}
double abj(double t)
{
	if(t>0)
		return t;
	else
		return -t;
}

void solu(double x)
{
	double x2 = f(x);
	cout<<"0. "<<x<<endl;
	cout<<++cnt<<". "<<x2<<endl;
	//cout<<"t = "<<x - x2<<endl;
	while(abj(x - x2) >e)
	{
		
		x = x2 ; 
		x2 = f(x);
		//cout<<++cnt<<". "<<x<<endl;
		cout<<++cnt<<". "<<x2<<endl;
		//double t = x - x2;
		//cout<<"t = "<<t<<endl;
	}
}

/*void solu(double x)
{
	double w = 1.0 / (1 - g(x)) ;
	double x2 = (1 - w) * x + w* f(x);
	cout<<"0. "<<x<<endl;
	while(abj(x - x2) > e)
	{
		x = x2;
		w = 1.0 / (1 - g(x));
		x2 = (1 - w) * x + w* f(x) ;
		cout<<++cnt<<". "<<x2<<endl;
	}
}*/
int main()
{
	solu(0.5);
	return 0;
}
