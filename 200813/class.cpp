// OOP Object Orient Programming 
// 객체 지향 프로그래밍
// 프로그램 설계 방법 중 하나
// C : 절차 지향 프로그래밍
// C++ : C(절차 지향), C with class(OOP)
// C with class
// OOP 특성 얘기하고 가자.

// Object Orient Programming 
// 정의 : 많은 객체들의 공통된 부분을 묶어서 하나의 개념으로 만든 다음에
// 이를 구조화 시키는 방식의 프로그래밍. (GUI 시대 오면서 생겨난 개념)
// 특성 : C++ 설계자(비야네 스트롭스트룹)
// ★ 추상화 - 다양한 객체들의 특성을 모아서 하나의 개념을 클래스화 시키는 과정
// ★ 은닉화(캡슐화) - private, protected, public 허락받지 않는 외부에서 접근하지 못하도록 하는 기법(friend)
// 다형성 - 오버로딩, 오버라이딩
// 상속 - 어떤 클래스의 아래 또 다른 클래스를 두고 상위 클래스의 정의된 것들을 사용하게 하는 것

// OOP의 장점 중 하나! 재활용성

// 다음 시간에 할 것
// 클래스의 객체 배열
// 

#include <iostream>
#include <string>

#include "CMonster.h"
#include "CPlayer.h"

void MenuBar()
{
	std::cout << "======= 메뉴창 =======" << std::endl;
	std::cout << "01. 공격" << std::endl;
	std::cout << "02. 방어" << std::endl;
}

int main()
{
	// 클래스를 이용해서 어떻게 객체를 생성할 것이냐?
	CPlayer player(100, 100, 50, 5);
	CMonster monster(300, 100, 10, 10);

	// 동적으로 선언 어떻게?
	// new를 이용한다.
	// CPlayer* player = new CPlayer(100, 100, 50, 5);
	// CMonster * monster = new CMonster(300, 100, 10, 10);

	// 누가 하나 죽을 때까지 해야겠지?
	while (true)
	{
		// private화 해서 어떻게 몬스터와 플레이어의 HP MP를 가져올까?
		if (player.GetHP() < 0 || monster.GetHP() < 0)
		{
			std::cout << "Game Set" << std::endl;
			break;
		}

		MenuBar();

		// (객체이름).(멤버 변수 또는 메소드) 이런 식으로 사용을하고
		// 만약 객체가 포인터 타입이다 하면
		// (객체이름)->(멤버 변수 또는 메소드)
		player.Attack(monster);
		monster.Attack(player);
	}

	// 할당 해제
	// delete monster;
	// delete player;

	return 0;
}