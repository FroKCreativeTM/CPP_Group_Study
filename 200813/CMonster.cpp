#include <iostream>

#include "CMonster.h"
#include "CPlayer.h"

CMonster::CMonster() : 
	HP(100), MP(20), attackDamage(5), defencePoint(10)
{
}

CMonster::CMonster(int _HP, int _MP, int _AP, int _DP)
{
	// 첫번째 방법!
	// 함수 사용하듯이 사용한다.
	// this란 무엇이냐! 자기 자신을 가리키는 포인터같은 존재
	this->HP = _HP;
	this->MP = _MP;
	this->attackDamage = _AP;
	this->defencePoint = _DP;
}

CMonster::~CMonster()
{
}

// (반환타입) (클래스이름)::(메소드이름)(매개변수 리스트)
void CMonster::Attack(CPlayer& player)
{
	int tempHP = player.GetHP();		// 처음 플레이의 HP를 저장해둔다.
	std::cout << "플레이어에게 " << this->attackDamage - player.GetDP()
		<< "만큼의 데미지를 준다!" << std::endl;
	tempHP -= this->attackDamage - player.GetDP();	// 공격받은 만큼 깎고
	std::cout << "현재 플레이어의 HP : " << tempHP << std::endl;

	player.SetHP(tempHP);	// 깎인 데미지 값만큼 세팅한다.
}
