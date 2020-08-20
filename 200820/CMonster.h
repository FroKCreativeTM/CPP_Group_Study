#pragma once

#include <iostream>

// C++�� �������̽�!
class Monster
{
protected:
	int hp, mp;

protected : 
	Monster(int _hp, int _mp) :
		hp(_hp), mp(_mp) {}
	virtual ~Monster() {}
	virtual void Attack() = 0;		// 0�� �ǹ� -> �ƹ��͵� ���⼭�� ���� �� �ϰڴ�!
	virtual void Defence() = 0;		// 0�� �ǹ� -> �ƹ��͵� ���⼭�� ���� �� �ϰڴ�!
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
		std::cout << "��ũ�� ����" << std::endl;
	}

	void Defence()
	{
		std::cout << "��ũ�� ���" << std::endl;
	}
};