#pragma once

// �̰� �ܼ��� ���̿��̰�
// CMonster.cpp ���Ͽ����� ������ include ������Ѵ�.
class CPlayer;

// ���� Ŭ�������� ��쿡�� ��ø� �� �ϸ� �⺻������ �� private���� ����ȴ�.
class CMonster
{
// �� Ŭ���� ���ο����� ������ ������ �������(������) �Ǵ� �޼ҵ�(�Լ�)
private :
	int HP, MP;
	int attackDamage;
	int defencePoint;

// �ٱ����� �ʱ�ȭ�� �ϱ� ���� ���̱� ������
// public���� �������ְ�
public : 
	// �����ڶ�� ������ ���⼭ ���´�!
	// �����ڶ� �����̳�!
	// �����ڶ� Ŭ������ �̿��ؼ� ��ü�� ������ ��
	// �� ��ü�� � ���� �̿��ؼ� �ʱ�ȭ�� �� ���̳�!
	// �����ڴ� Ŭ������ �̸��� ������.
	CMonster();		// �⺻ ������!
	CMonster(int _HP, int _MP, int _AP, int _DP);
	// CMonster(const CMonster& _monster);	// ���� ������

	// �Ҹ��ڶ�� ������ �����Ѵ�.
	// �Ҹ��ڶ� �����̳�?
	// �Ҹ��ڶ� ��Ÿ���� ������ �� ���α׷��� ���ᰡ �ǰų�
	// delete�� �� ��
	// �޸𸮰� �Ҵ� ���� ���� �ؾ��� �۾����� �� �Ҹ��ڶ�� ����
	// ���Ǹ� �Ѵ�.
	~CMonster();

public :
	void Attack(CPlayer& player);

public : 
	// ���� �󿡼� �� �����͸� �ʿ��ϸ� ������ �� �� �ְ� �ؾ�����
	// getter, setter (get, set)
	
	// �ܼ��� ���� ������ �ִ� �� ���̴ϱ�! �̰��� getter
	int GetHP() const 
	{
		return HP;
	}

	// ���ο� ������ ������ ���ִ� �޼ҵ��̴�. �̰��� setter
	void SetHP(int _HP)
	{
		this->HP = _HP;
	}
	int GetDP() const { return defencePoint; }
};

