#include <iostream>
#include <cmath>
using namespace std;

double k = 0;
double e = 0.000005;
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

double f(double x) //主函数
{
	return x * x - 115;
}

double g(double x) //导数
{
	return 2 * x;
}

double abj(double t)
{
	if(t>0)
		return t;
	else
		return -t;
}

/*void solu(double x)
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
}*/

void solu(double x)
{
	double x2 = x - f(x) / g(x) ;
	cout<<cnt++<<". "<<x<<endl;
	cout<<cnt++<<". "<<x2<<endl;
	while(abj(x - x2) >e)
	{
		x = x2;
		x2 = x - f(x) / g(x);
		cout<<cnt++<<". "<<x2<<endl;
	}
}
int main()
{
	solu(10.0);
	//cout<<sqrt(115)<<endl;
	return 0;
}
