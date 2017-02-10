#include <vector>
struct Node
{
	Node():expr(0) , code(0.0){}
	int expr;
	double code;
	std::vector<Node> nvec;
	double func(double x);
	void Input();
	static int cnt;
};
