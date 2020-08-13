// OOP Object Orient Programming 
// ��ü ���� ���α׷���
// ���α׷� ���� ��� �� �ϳ�
// C : ���� ���� ���α׷���
// C++ : C(���� ����), C with class(OOP)
// C with class
// OOP Ư�� ����ϰ� ����.

// Object Orient Programming 
// ���� : ���� ��ü���� ����� �κ��� ��� �ϳ��� �������� ���� ������
// �̸� ����ȭ ��Ű�� ����� ���α׷���. (GUI �ô� ���鼭 ���ܳ� ����)
// Ư�� : C++ ������(��߳� ��Ʈ�ӽ�Ʈ��)
// �� �߻�ȭ - �پ��� ��ü���� Ư���� ��Ƽ� �ϳ��� ������ Ŭ����ȭ ��Ű�� ����
// �� ����ȭ(ĸ��ȭ) - private, protected, public ������� �ʴ� �ܺο��� �������� ���ϵ��� �ϴ� ���(friend)
// ������ - �����ε�, �������̵�
// ��� - � Ŭ������ �Ʒ� �� �ٸ� Ŭ������ �ΰ� ���� Ŭ������ ���ǵ� �͵��� ����ϰ� �ϴ� ��

// OOP�� ���� �� �ϳ�! ��Ȱ�뼺

// ���� �ð��� �� ��
// Ŭ������ ��ü �迭
// 

#include <iostream>
#include <string>

#include "CMonster.h"
#include "CPlayer.h"

void MenuBar()
{
	std::cout << "======= �޴�â =======" << std::endl;
	std::cout << "01. ����" << std::endl;
	std::cout << "02. ���" << std::endl;
}

int main()
{
	// Ŭ������ �̿��ؼ� ��� ��ü�� ������ ���̳�?
	CPlayer player(100, 100, 50, 5);
	CMonster monster(300, 100, 10, 10);

	// �������� ���� ���?
	// new�� �̿��Ѵ�.
	// CPlayer* player = new CPlayer(100, 100, 50, 5);
	// CMonster * monster = new CMonster(300, 100, 10, 10);

	// ���� �ϳ� ���� ������ �ؾ߰���?
	while (true)
	{
		// privateȭ �ؼ� ��� ���Ϳ� �÷��̾��� HP MP�� �����ñ�?
		if (player.GetHP() < 0 || monster.GetHP() < 0)
		{
			std::cout << "Game Set" << std::endl;
			break;
		}

		MenuBar();

		// (��ü�̸�).(��� ���� �Ǵ� �޼ҵ�) �̷� ������ ������ϰ�
		// ���� ��ü�� ������ Ÿ���̴� �ϸ�
		// (��ü�̸�)->(��� ���� �Ǵ� �޼ҵ�)
		player.Attack(monster);
		monster.Attack(player);
	}

	// �Ҵ� ����
	// delete monster;
	// delete player;

	return 0;
}