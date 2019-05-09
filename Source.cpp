#include "Stack_By_List.h"
#include <iostream>
#include <list>

using namespace std;

int main()
{
	Stack<int> tonnyStack;
	for (int i = 0; i < 10; i++)
		tonnyStack.push(i);
	cout << "Top: " << tonnyStack.top() << endl;
	while (!tonnyStack.isEmpty())
	{
		cout << tonnyStack.top() << " ";
		tonnyStack.pop();
	}
	getchar();
	return 0;
}