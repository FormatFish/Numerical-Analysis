#include <iostream>
using namespace std;

double k = 0;
double e = 0.0005;
int cnt = 0;
double f(double x)
{
	return x*x - x - 1;
}
double solution(double a , double b)
{
	++cnt;
	cout<<cnt<<".  "<<a<<"\t"<<b<<"\t";
	double m = (a+b) / 2.0;
		cout<< m << "\t" <<f(m)<<endl;
	//double temp = b -a ;
	if(b -a >e)
	{
		
		if(!f(m))
		{
			k = m ;
			return k;
		}
		else if( f(a) * f(m) <0)
			return solution(a , m);
		else if( f(b) * f(m) <0)
			return solution(m , b);
	}
}
int main()
{
	double a , b;
	cin >>a >>b;
	if( f(a) * f(b) >= 0)
		return -1;
	solution(a , b);
	cout<< k <<" is a correct solution"<<endl;
	return 0;
}