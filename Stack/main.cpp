#include <iostream>
#include "Stack.h"

using namespace std;
using namespace MYStack;

int main()
{
	Stack<int> A(10);
	A.push(7);
	A.push(11);

	cout << A.top() << endl;

	A.pop();
	A.push(9);

	cout << A.top() << endl;
	cout << A[0] << endl;
	//cout << A[3] << endl;

	A.pop();

	Stack<string> B(10);
	B.push("Bob");
	B.push("Alice");

	cout << B.top() << endl;
	B.pop();

	B.push("Eve");

	return 0;
}