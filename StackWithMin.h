#pragma once

//定义栈的数据结构，请在该类型中设计一个能够得到栈的最小元素的min函数。
//在该栈中调用push(), pop(), min()函数的时间复杂度均为O(1)
#include <stack>
#include <assert.h>
//using namespace std;

//template <class T>
//class Stack
//{
//public:
//	Stack()
//	{}
//
//	void Push(const T data)
//	{
//		_stackData.push(data);
//
//		if (_stackMin.empty())
//			_stackMin.push(data);
//		else
//		{
//			T top = _stackMin.top();
//			if (top > data)
//				_stackMin.push(data);
//			else
//				_stackMin.push(top);
//		}
//	}
//
//	void Pop()
//	{
//		if (!_stackData.empty())
//			_stackData.pop();
//		if (!_stackMin.empty())
//			_stackMin.pop();
//	}
//
//	T Min()
//	{
//		if (!_stackMin.empty())
//			return _stackMin.top();
//		return 0;
//	}
//private:
//	std::stack<T> _stackData;
//	std::stack<T> _stackMin;
//};

template<class T>
class Stack
{
public:
	void Push(const T& value)
	{
		_mData.push(value);

		//向辅助栈中压入当前数据栈的最小元素
		//使数据栈和辅助栈保持相同高度
		if (_mMin.size() == 0 || _mMin.top() > value)
			_mMin.push(value);
		else
			_mMin.push(_mMin.top());
	}

	void Pop()
	{
		assert(_mData.size() > 0 && _mMin.size() > 0);

		_mData.pop();
		_mMin.pop();
	}

	T& Min()
	{
		assert(_mData.size() > 0 && _mMin.size() > 0);

		return _mMin.top();
	}
protected:
	std::stack<T> _mData;
	std::stack<T> _mMin;
};
