#pragma once
#include <string>

namespace MYStack
{
	using namespace std;

	class RuntimeException
	{
	private:
		string errorMsg;

	public:
		RuntimeException(const string& err);
		string getMessage() const;
	};

	class StackEmpty : public RuntimeException
	{
	public:
		StackEmpty(const string& err);
	};

	class StackOverflow : public RuntimeException
	{
	public:
		StackOverflow(const string& err);
	};

	template<typename T>
	class Stack
	{
	public:
		Stack(int size = 100) : m_item(new T[size]), m_size(size), m_current(0)
		{}

		~Stack()
		{
			delete[] m_item;
		}

		int size() const
		{
			return m_size;
		}

		bool empty() const
		{
			return m_size < 1;
		}

		T& operator[](int idx)
		{
			if (idx < 0 || idx >= m_current)
				throw StackOverflow("stack overflow exception");

			return m_item[idx];
		}

		const T& top() const// throw(StackEmpty)
		{
			if (empty())
				throw StackEmpty("empty stack");

			return m_item[m_current - 1];
		}

		void push(const T& item)
		{
			if (m_current >= m_size)
				throw StackOverflow("stack overflow exception");

			m_item[m_current++] = item;
		}

		void pop()// throw(StackEmpty)
		{
			if (empty())
				throw new StackEmpty("stack empty exception");

			--m_current;
		}

	private:
		T* m_item;
		int m_size;
		int m_current;
	};
}