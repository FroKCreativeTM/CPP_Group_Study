#pragma once

class CMonster;

class CPlayer
{
// 이 클래스 내부에서만 접근이 가능한 멤버변수(데이터) 또는 메소드(함수)
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
	// 로직 상에서 이 데이터를 필요하면 가져다 쓸 수 있게 해야하지
	// getter, setter (get, set)

	// 단순히 이제 가져다 주는 것 뿐이니까! 이것이 getter
	int GetHP() const {	return HP; }
	// 새로운 값으로 설정을 해주는 메소드이다. 이것이 setter
	void SetHP(int _HP) { this->HP = _HP; }
	int GetDP() const { return defencePoint; }
};

