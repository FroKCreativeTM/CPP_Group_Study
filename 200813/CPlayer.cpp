#include <iostream>

#include "CPlayer.h"
#include "CMonster.h"

CPlayer::CPlayer():
	HP(100), MP(20), attackDamage(5), defencePoint(20)
{
}

// �ι�° �ʱ�ȭ ��� (�� ����� �� �� ����!)
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
	std::cout << "�÷��̾�� " << this->attackDamage - monster.GetDP()
		<< "��ŭ�� �������� �ش�!" << std::endl;
	tempHP -= this->attackDamage - monster.GetDP();
	std::cout << "���� ������ HP : " << tempHP << std::endl;

	monster.SetHP(tempHP);	
}
