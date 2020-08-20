#pragma once

#include <iostream>

class A
{
private : 
	int id;
protected:
	A() { std::cout << "A constructor" << std::endl; }
	~A() { std::cout << "A destructor" << std::endl; }
};

// class (클래스 이름) : (공개 범위) (부모 클래스이름)
class B
{
public:
	B() :
		A() 
	{
		std::cout << "B constructor" << std::endl;
	}
	~B()
	{
		std::cout << "B destructor" << std::endl;
	}
};

class C : public B, A
{
public : 
	C() : B()
	{
		std::cout << "C constructor" << std::endl;
	}
	~C()
	{
		std::cout << "C destructor" << std::endl;
	}
};