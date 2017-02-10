#include <iostream>

using namespace std;


double e = 0.0005;

double abj(double x)
{
	if(x < 0)
		return (-x);
	else
		return x;
}
void solu()
{
	int cnt = 0;
	double a[3][3] = {2 , -1 , 0 , -1 , 2 , -1 , 0 , -1 , 2};
	double y[3] = {0, 0 , 0} , x[3] = {1 , 1 , 1};
	double temp, max = 0  ;
	do
	{
		
		//y = ax
		temp = max;
		cout<<++cnt<<" . ";
		for(int i = 0 ; i < 3 ; ++i)
		{
			for(int j = 0 ; j <3 ; ++j)
			{
				y[i] += a[i][j] * x[j];
				//y[i] = t;
			}
			//y[i] = t;
			cout<<y[i]<<"\t";
		}
		

		max = abj(y[0]);
		for( i = 1 ; i < 3 ; ++i)
			if(abj(max) < abj(y[i]))
				max = y[i];
		cout<<max<<"\t";

		//cout<<endl;
		//x = 1 / m  * y
		for( i = 0 ; i <3 ; ++i)
		{
			x[i] = 1.0 / max * y[i];
			cout<<x[i]<<"\t";
		}

		cout<<endl;
		for(int k = 0 ; k < 3 ; ++k)
			y[k] = 0;
	} while(abj(temp - max) > e) ;
	
	cout<<endl<<"最大特征值为： "<<max<<endl;
	cout<<"特征向量为  (";
	for(int i = 0 ; i < 3 ; ++i)
		cout<<x[i]<<",";
	cout<<"\b)"<<endl;
}
int main()
{
	solu();
	return 0;
}
