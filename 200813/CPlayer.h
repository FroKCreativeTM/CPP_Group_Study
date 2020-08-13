#pragma once

class CMonster;

class CPlayer
{
// �� Ŭ���� ���ο����� ������ ������ �������(������) �Ǵ� �޼ҵ�(�Լ�)
private:
	int HP, MP;
	int attackDamage;
	int defencePoint;

public :
	CPlayer();
	CPlayer(int _HP, int _MP, int _AP, int _DP);

	~CPlayer();

public:
	// 
	void Attack(CMonster& monster);

public:
	// ���� �󿡼� �� �����͸� �ʿ��ϸ� ������ �� �� �ְ� �ؾ�����
	// getter, setter (get, set)

	// �ܼ��� ���� ������ �ִ� �� ���̴ϱ�! �̰��� getter
	int GetHP() const {	return HP; }
	// ���ο� ������ ������ ���ִ� �޼ҵ��̴�. �̰��� setter
	void SetHP(int _HP) { this->HP = _HP; }
	int GetDP() const { return defencePoint; }
};

