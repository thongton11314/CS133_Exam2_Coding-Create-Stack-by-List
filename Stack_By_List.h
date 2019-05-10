#ifndef _STACKBYLIST_
#define _STACKBYLIST_
#include <list>
#include <stdexcept>

template<typename T>
class Stack
{
private:
	std::list<T> tonnyStack; //Declaring container
	std::list<int>::iterator iter; //Declaring iterator
public:

	Stack() {}

	void push(T value)
	{
		tonnyStack.push_back(value); //Adding in the end of the container
	}

	T top()
	{
		return tonnyStack.back(); //Get the element from the last index (Feature of stack)
	}

	void pop()
	{
		iter = tonnyStack.begin(); //Assign iter with address of the first index of container
		std::advance(iter, tonnyStack.size() - 1); //Move the iter from index 0 -> last index
		tonnyStack.erase(iter); //Erase from element from last index(Feature of stack)
	}

	int size()
	{
		return tonnyStack.size(); //Return size
	}

	bool isEmpty()
	{
		return (tonnyStack.size() == 0); //Check empty
	}
};
#endif // !_STACKBYLIST_
