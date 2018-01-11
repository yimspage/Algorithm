#include "Stack.h"

namespace MYStack
{
	using namespace std;

	RuntimeException::RuntimeException(const string& err)
	{
		errorMsg = err;
	}

	string RuntimeException::getMessage() const
	{
		return errorMsg;
	}

	StackEmpty::StackEmpty(const string &err) : RuntimeException(err) {}

	StackOverflow::StackOverflow(const string &err) : RuntimeException(err) {}

	///-------------------------------------------------------------------------------------
	//template<typename T>
	//YStack<T>::YStack(int size) : m_item(new T[size]), m_size(size), m_current(0)
	//{}

	//template<typename T>
	//YStack<T>::~YStack()
	//{
	//	delete[] m_item;
	//}

	//template<typename T>
	//int YStack<T>::size() const
	//{
	//	return m_size;
	//}

	//template<typename T>
	//bool YStack<T>::empty() const
	//{
	//	return m_size < 1;
	//}

	//template<typename T>
	//const T& YStack<T>::top() const/* throw(StackEmpty)*/
	//{
	//	if (empty())
	//		throw StackEmpty("top of empty stack");

	//	return m_item[m_current - 1];
	//}

	//template<typename T>
	//void YStack<T>::push(const T& item)
	//{
	//	if (m_current >= m_size)
	//		throw StackEmpty("error");

	//	m_item[m_current++] = item;
	//}

	//template<typename T>
	//void YStack<T>::pop() /*throw(StackEmpty)*/
	//{
	//	if (empty())
	//		throw new StackEmpty("empty");

	//	--m_current;
	//}
}