#include <iostream>

using namespace std;
#define N 3

void display(double *b, double (*a)[N])
{
	for(int i = 0 ; i < N ; ++i)
		cout<<b[i]<<" ";
	cout<<endl;
	cout<<"--------------------------"<<endl;
	
	int cnt = 0;
	for(i = 0 ; i < N ; ++i)
		for(int j = 0 ; j <N ; ++j)
		{
			//++cnt;
			if(!(cnt++ % 3))
				cout<<endl;
			cout<<a[i][j]<<" ";
			
		}
		cout<<endl<<"-----------------------------"<<endl;
}

void solu(double (*a)[N] , double *b)
{
	double temp = a[0][0];
	for(int j = 0 ; j < N ; ++j)
	{
		a[0][j] = a[0][j] / temp ;
		
		//cout<<
	}
	b[0] = b[0] / temp;
	display(b , a);
	
	temp = a[1][0];
	for(j = 0 ; j < N ; j++)
	{
		a[1][j] = a[1][j] - a[0][j]*a[1][0];
	}
	b[1] = b[1] - b[0] * temp;
	display(b , a);

	temp = a[2][0];
	for(j = 0 ; j < N ; ++j)
	{
		a[2][j] = a[2][j] - a[0][j] * temp;
	}
	b[2] = b[2] - b[0]* temp;
	display(b , a);
//---------------------------------------------	
	temp = a[1][1];
	for(j = 0 ; j < N ; j++)
	{
		a[1][j] = a[1][j] / temp;
	}
	b[1] = b[1] / temp;
	display(b , a);

	temp = a[0][1];
	for(j = 0 ; j < N ; j++)
	{
		a[0][j] = a[0][j] - a[1][j] * temp;
	}
	b[0] = b[0] - b[1] * temp;
	display(b , a);

	temp= a[2][1];
	for(j = 0 ; j < N ; ++j)
	{
		a[2][j] = a[2][j] - a[1][j] * temp;
	}
	b[2] = b[2]- b[1] * temp;
	display(b , a);
	/*double temp = 0;
	for(int k = 0 ; k < N ; ++k)
	{
		b[k] = b[k] / a[k][k];
		
		for(int i = 0 ; i < N ; ++i)
		{
			temp = a[i][k];

			if(i != k)
			{
				for(int j = 0 ; j < N ; ++j)
				{
					a[i][j] = a[i][j] - a[k][j] * temp;
				}
				b[i] = b[i] - b[k] *temp;
			}
			else
			{
				for(int j = 0 ; j < N ; ++j)
				{
					a[k][j] = a[k][j] /temp;
				}
			}
		}
		display(b , a);
	}*/
}
int main()
{
	double a[N][N] = {2 , 8 , 2 , 1 , 6 , -1 , 2 , -1 , 2} ;
	double b[N] = {14 , 13 , 5};
	solu(a , b);
	return 0;
}
