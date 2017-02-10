#include <iostream>

using namespace std;

double e = 0.005;

double abj(double x)
{
	if(x < 0)
		return (-x);
	else
		return x;
}
/*void solu1(double x1 , double x2 , double x3)
{
	int cnt = 0;
	double a , b , c;
	a = 1.0 / 27.0 * (x3 - 6 * x2 + 85) ;
	b = 1.0 / 15.0 * (72 - 6 * x1 - 2 * x3);
	c = 1.0 / 54.0 * (110 - x1 - x2);
	cout<<cnt++<<". "<<a<<"\t"<<b<<"\t"<<c<<endl;
	while((abj(x1 - a) > e) && (abj(x2 - b) > e ) && (abj(x3 - c) >e) )
	{
		x1 = a;
		x2 = b;
		x3 = c;
		a = 1.0 / 27.0 * (x3 - 6 * x2 + 85) ;
		b = 1.0 / 15.0 * (72 - 6 * x1 - 2 * x3);
		c = 1.0 / 54.0 * (110 - x1 - x2);
		cout<<cnt++<<". "<<a<<"\t"<<b<<"\t"<<c<<endl;
	}
}
*/
void solu(double x1 , double x2 , double x3)
{
	int cnt = 0;
	cout<<cnt++<<". "<<x1<<"\t"<<x2<<"\t"<<x3<<endl;
	double a , b ,c;
	a = x1 ; 
	b = x2 ;
	c = x3 ;
	x1 = 0.1 * (7.2 + x2 + 2 * x3);
	x2 = 0.1 * (8.3 + x1 + 2 * x3);
	x3 = 0.2 * (4.2 + x1 + x2);

	cout<<cnt++<<". "<<x1<<"\t"<<x2<<"\t"<<x3<<endl;
	while((abj(x1 - a) > e) && (abj(x2 - b) > e ) && (abj(x3 - c) >e) )
	{
		a = x1 ; 
		b = x2 ;
		c = x3 ;
		x1 = 0.1 * (7.2 + x2 + 2 * x3);
		x2 = 0.1 * (8.3 + x1 + 2 * x3);
		x3 = 0.2 * (4.2 + x1 + x2);
		cout<<cnt++<<". "<<x1<<"\t"<<x2<<"\t"<<x3<<endl;
	}
}
int main()
{
	solu(0.0 , 0.0 , 0.0);
	return 0;
}