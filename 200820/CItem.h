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
		std::cout << "아이템 생성" << std::endl;
	}
	virtual ~CItem()
	{
		std::cout << "아이템 파괴" << std::endl;
	}

public : 
	// 아이템 장착
	void Equip()
	{
		std::cout << "아이템 장착" << std::endl;
	}
};

class CSword : public CItem
{
public:
	CSword(int id) : 
		CItem(id)
	{
		std::cout << "장검 생성" << std::endl;
	}
	~CSword()
	{
		std::cout << "장검 파괴" << std::endl;
	}

public : 
	void Equip()
	{
		std::cout << "장검 장착" << std::endl;
	}
};

class CBastardSword : public CSword
{
public:
	CBastardSword(int id) :
		CSword(id)
	{
		std::cout << "바스타드 장검 생성" << std::endl;
	}
	~CBastardSword()
	{
		std::cout << "바스타드 장검 파괴" << std::endl;
	}

public:
	void Equip()
	{
		std::cout << "바스타드 장검 장착" << std::endl;
	}
};

class CArmor : public CItem
{
public:
	CArmor(int id) :
		CItem(id)
	{
		std::cout << "방어구 생성" << std::endl;
	}
	~CArmor()
	{
		std::cout << "방어구 파괴" << std::endl;
	}
public:
	void Equip()
	{
		std::cout << "방어구 장착" << std::endl;
	}
};
