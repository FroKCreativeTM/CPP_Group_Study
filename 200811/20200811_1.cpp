#include <iostream>

using namespace std;

int main()
{
	// read only : ���� ���� �ִ�. �� �� ���ų� �ƴϸ� ������ �� ����.
	// �����.
	// const int age = 10;
	// age = 20;
	int age = 10;
	const int cn = age;

	// ������ ���!
	const int* pcn = &age;
	// �ּҰ��� ������ ũ�⸸ŭ �̵��Ѵ�.(������ ũ�� 32��Ʈ : 4����Ʈ, 64��Ʈ : 8����Ʈ)
	// pcn = pcn + sizeof(pcn); 
	// ��� ������
	int* const cpn = &age;
	*cpn = 20;
	// cpn = cpn + sizeof(cpn);
	const int* const cpcn = &age;



	return 0;
}