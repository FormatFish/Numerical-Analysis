#include <iostream>
using namespace std;

#define n 5

double sum(double (*a)[n+1] , int beg , int end)
{
	double result = 0;
	for(int i = beg ; i <= end ; ++i)
	{
		result += a[beg-1][i];
	}

	return result;
}

void Answer(double (*a)[n+1])
{
	double x = a[n][n+1] / a[n][n] ;
	cout<<x<<endl;

	for(int k = n-1 ; k >= 1 ; --k)
	{
		double Xk = a[k][n+1] - sum(a , k+1 , n);
		cout<<Xk<<endl;
	}
}

void Gaosi(double (*a)[n+1])
{
	for(int k = 1 ; k < n ; ++k)
		for(int i = k+1 ; i <= n ; ++i)
			for(int j = k+1 ; j <= n+1 ; ++j)
				a[i][j] =a[i][j] - a[i][k] / a[k][k] * a[k][j];

	//回代求值
	Answer(a);
}


int main()
{
	//const int n = 5
	double a[n][n+1];
	
	for(int i = 0 ; i < n ; ++i)
		for(int j = 0 ; j < n ; ++j)
			cin>>a[i][j];

	Gaosi(a);
	return 0;
}