#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <stdlib.h>
#include "StackWithMin.h"
using namespace std;

void TestStack()
{
	Stack<int> s;

	s.Push(10);
	s.Push(7);
	s.Push(9);
	s.Push(5);
	s.Push(6);
	s.Push(3);

	cout << s.Min() << " ";
	s.Pop();
	cout << s.Min() << " ";
	s.Pop();
	cout << s.Min() << " ";
	s.Pop();
	cout << s.Min() << " ";
	s.Pop();
	cout << s.Min() << " ";
	s.Pop();
	cout << s.Min() << " ";
	s.Pop();
	//cout << s.Min() << " ";
	//s.Pop();

	cout << endl;
}

int main()
{
	TestStack();

	system("pause");
	return 0;
}
