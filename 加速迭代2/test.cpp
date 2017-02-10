#include <iostream>
#include "test.h"
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;

int Node::cnt = 0;
double calc(double &x ,double z , int y)
{
	double sum = x;
	if( y == 0)
	{
		return z;
	}
	for(int i = 1 ; i != y ; ++i)
	{
		sum *= sum;
	}
	return sum *z; //平方出错
}

void Node::Input()
{
	double temp_code;
	int temp_expr;
	cout<<"请输入系数及相应指数：(Ctrl+Z to end)"<<endl;
	while(cin>>temp_code>>temp_expr)
	{
		code = temp_code;
		expr = temp_expr;
		nvec.push_back(*this);
	}
	cin.clear(); 
}
double Node::func(double x)
{
	//static cnt = 0;
	Node p;
	if(!cnt)
	p.Input();
	double result = 0.0;
	for(vector<Node>::iterator iter = p.nvec.begin() ; iter != p.nvec.end() ;
												++iter)
												{
													result += calc(x , iter->code , iter->expr);
												}
	return result;
}

void display(double a , double b)
{
	static count = 0;
	cout<<"X"<<count++<<" = "<<a<<"\t";
	cout<<"X"<<count++<<" = "<<b<<endl;
}
int main()
{
	
	cout<<"请输入 x0"<<endl;
	double x0 , Xn = 0;
	cin>>x0;
	
	while(true)
	{
		Node S1 , S2;
		double k = 0,sa;
		sa = S1.func(x0);
		k = 1.0 /(1 - sa );
		Xn = (1 - k)*x0 + k* S2.func(x0);
		Node::cnt = 1;
		display(x0 , Xn);
		if( abs(Xn - x0) < 0.5E-4 )
			break;
		x0 = Xn;
	}
	return 0;
}
