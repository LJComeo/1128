#include <iostream>
#include <cstdio>
using namespace std;

class A
{
public:
	A()
	{}

	void FuncA()
	{
		cout << "FuncA called" << endl;
	}
	virtual void FuncB()
	{
		cout << "FuncB called" << endl;
	}
};
class B : public  A
{
public:
	B()
	{}
	void FuncA()
	{
		A::FuncA();
		cout << "FuncAB called" << endl;
	}
	virtual void FuncB()
	{
		cout << "FuncBB called" << endl;
	}
};


int main()
{
	/*
	B b;
	A *pa;//pa���ȿ���A ���󿪱�B ������Ƭ�ռ䶼�У����Ծͻ������غ���д
	pa = &b;
	A *pa2 = new A;//����pa2ֻ�ǿ��ٵ���A�Ŀռ䣬���Ե��ĺ����Ͷ���A��
	pa->FuncA();
	pa->FuncB();
	pa2->FuncA();
	pa2->FuncB();
	delete pa2;
	*/

	//const int a = 10;
	////int *p = const_cast<int *>(&a);
	//int *p = (int *)(&a);
	//*p = 20;
	//cout << "a=" << a << " " << "*p = " << *p << endl;


	char *p = "abc";
	char *q = "abc123";
	while (*p == *q)
	{
		printf("%c %c", *p, *q);
	}
	return 0;
}