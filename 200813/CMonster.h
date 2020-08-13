#pragma once

// 이건 단순히 간이용이고
// CMonster.cpp 파일에서는 무조건 include 해줘야한다.
class CPlayer;

// 만약 클래스같은 경우에는 명시를 안 하면 기본적으로 다 private으로 선언된다.
class CMonster
{
// 이 클래스 내부에서만 접근이 가능한 멤버변수(데이터) 또는 메소드(함수)
private :
	int HP, MP;
	int attackDamage;
	int defencePoint;

// 바깥에서 초기화를 하기 위한 것이기 때문에
// public으로 선언해주고
public : 
	// 생성자라는 개념이 여기서 나온다!
	// 생성자란 무엇이냐!
	// 생성자란 클래스를 이용해서 객체가 생성될 때
	// 그 객체가 어떤 값을 이용해서 초기화를 할 것이냐!
	// 생성자는 클래스의 이름을 가진다.
	CMonster();		// 기본 생성자!
	CMonster(int _HP, int _MP, int _AP, int _DP);
	// CMonster(const CMonster& _monster);	// 복사 생성자

	// 소멸자라는 개념이 존재한다.
	// 소멸자란 무엇이냐?
	// 소멸자란 런타임이 끝나면 즉 프로그램이 종료가 되거나
	// delete가 될 때
	// 메모리가 할당 해제 전에 해야할 작업들을 이 소멸자라는 곳에
	// 정의를 한다.
	~CMonster();

public :
	void Attack(CPlayer& player);

public : 
	// 로직 상에서 이 데이터를 필요하면 가져다 쓸 수 있게 해야하지
	// getter, setter (get, set)
	
	// 단순히 이제 가져다 주는 것 뿐이니까! 이것이 getter
	int GetHP() const 
	{
		return HP;
	}

	// 새로운 값으로 설정을 해주는 메소드이다. 이것이 setter
	void SetHP(int _HP)
	{
		this->HP = _HP;
	}
	int GetDP() const { return defencePoint; }
};

