#pragma once

#include <iostream>

class CItem
{
private : 
	int id;

public : 
	CItem(int id) : 
		id(id)
	{
		std::cout << "������ ����" << std::endl;
	}
	virtual ~CItem()
	{
		std::cout << "������ �ı�" << std::endl;
	}

public : 
	// ������ ����
	void Equip()
	{
		std::cout << "������ ����" << std::endl;
	}
};

class CSword : public CItem
{
public:
	CSword(int id) : 
		CItem(id)
	{
		std::cout << "��� ����" << std::endl;
	}
	~CSword()
	{
		std::cout << "��� �ı�" << std::endl;
	}

public : 
	void Equip()
	{
		std::cout << "��� ����" << std::endl;
	}
};

class CBastardSword : public CSword
{
public:
	CBastardSword(int id) :
		CSword(id)
	{
		std::cout << "�ٽ�Ÿ�� ��� ����" << std::endl;
	}
	~CBastardSword()
	{
		std::cout << "�ٽ�Ÿ�� ��� �ı�" << std::endl;
	}

public:
	void Equip()
	{
		std::cout << "�ٽ�Ÿ�� ��� ����" << std::endl;
	}
};

class CArmor : public CItem
{
public:
	CArmor(int id) :
		CItem(id)
	{
		std::cout << "�� ����" << std::endl;
	}
	~CArmor()
	{
		std::cout << "�� �ı�" << std::endl;
	}
public:
	void Equip()
	{
		std::cout << "�� ����" << std::endl;
	}
};
