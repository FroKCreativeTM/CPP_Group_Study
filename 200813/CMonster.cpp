#include <iostream>

#include "CMonster.h"
#include "CPlayer.h"

CMonster::CMonster() : 
	HP(100), MP(20), attackDamage(5), defencePoint(10)
{
}

CMonster::CMonster(int _HP, int _MP, int _AP, int _DP)
{
	// ù��° ���!
	// �Լ� ����ϵ��� ����Ѵ�.
	// this�� �����̳�! �ڱ� �ڽ��� ����Ű�� �����Ͱ��� ����
	this->HP = _HP;
	this->MP = _MP;
	this->attackDamage = _AP;
	this->defencePoint = _DP;
}

CMonster::~CMonster()
{
}

// (��ȯŸ��) (Ŭ�����̸�)::(�޼ҵ��̸�)(�Ű����� ����Ʈ)
void CMonster::Attack(CPlayer& player)
{
	int tempHP = player.GetHP();		// ó�� �÷����� HP�� �����صд�.
	std::cout << "�÷��̾�� " << this->attackDamage - player.GetDP()
		<< "��ŭ�� �������� �ش�!" << std::endl;
	tempHP -= this->attackDamage - player.GetDP();	// ���ݹ��� ��ŭ ���
	std::cout << "���� �÷��̾��� HP : " << tempHP << std::endl;

	player.SetHP(tempHP);	// ���� ������ ����ŭ �����Ѵ�.
}
