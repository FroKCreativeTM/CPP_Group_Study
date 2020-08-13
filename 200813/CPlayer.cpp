#include <iostream>

#include "CPlayer.h"
#include "CMonster.h"

CPlayer::CPlayer():
	HP(100), MP(20), attackDamage(5), defencePoint(20)
{
}

// 두번째 초기화 방법 (이 방법이 좀 더 빨라!)
CPlayer::CPlayer(int _HP, int _MP, int _AP, int _DP) :
	HP(_HP), MP(_MP), attackDamage(_AP), defencePoint(_DP)
{
	// this->HP = _HP;
	// this->MP = _MP;
	// this->attackDamage = _AP;
}

CPlayer::~CPlayer()
{
}

void CPlayer::Attack(CMonster& monster)
{
	int tempHP = monster.GetHP();
	std::cout << "플레이어에게 " << this->attackDamage - monster.GetDP()
		<< "만큼의 데미지를 준다!" << std::endl;
	tempHP -= this->attackDamage - monster.GetDP();
	std::cout << "현재 몬스터의 HP : " << tempHP << std::endl;

	monster.SetHP(tempHP);	
}
