#pragma once

#include <iostream>

// C++식 인터페이스!
class Monster
{
protected:
	int hp, mp;

protected : 
	Monster(int _hp, int _mp) :
		hp(_hp), mp(_mp) {}
	virtual ~Monster() {}
	virtual void Attack() = 0;		// 0의 의미 -> 아무것도 여기서는 구현 안 하겠다!
	virtual void Defence() = 0;		// 0의 의미 -> 아무것도 여기서는 구현 안 하겠다!
};


class Orc : public Monster
{
public : 
	Orc(int _hp, int _mp) : 
		Monster(_hp, _mp) {}

	~Orc()
	{

	}

public : 
	void Attack()
	{
		std::cout << "오크의 공격" << std::endl;
	}

	void Defence()
	{
		std::cout << "오크의 방어" << std::endl;
	}
};