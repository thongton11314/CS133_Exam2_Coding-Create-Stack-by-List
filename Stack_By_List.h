#ifndef _STACKBYLIST_
#define _STACKBYLIST_
#include <list>
#include <stdexcept>

template<typename T>
class Stack
{
private:
	std::list<T> tonnyStack;
	std::list<int>::iterator iter;
public:

	Stack()
	{
		
	}

	void push(T value)
	{
		tonnyStack.push_back(value);
		iter = tonnyStack.begin();
	}

	T top()
	{
		return tonnyStack.back();
	}

	void pop()
	{
		std::advance(iter, tonnyStack.size() - 1);
		tonnyStack.erase(iter);
		iter = tonnyStack.begin();
	}

	int size()
	{
		return tonnyStack.size();
	}

	bool isEmpty()
	{
		return (tonnyStack.size() == 0);
	}
};
#endif // !_STACKBYLIST_
