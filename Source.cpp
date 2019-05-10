#include "Stack_By_List.h"
#include <iostream>
#include <list>

using namespace std;

int main()
{
	//Test stack
	Stack<int> tonnyStack;
	for (int i = 0; i < 10; i++)
		tonnyStack.push(i);
	//Test top function
	cout << "Top: " << tonnyStack.top() << endl;
	//Test pop (Feature of stack)
	while (!tonnyStack.isEmpty())
	{
		cout << tonnyStack.top() << " ";
		tonnyStack.pop();
	}
	getchar();
	return 0;
}