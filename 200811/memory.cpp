#include <iostream>
using namespace std;

void test(int t)
{
	t = 20;
}

void test_by_address(int* p)
{
	*p = 20;
}

int main()
{
	// ���� ������ ����
	int n = 10;
	float f = 20.0f;
	double d = 20.2;

	test(n);
	cout << n << endl;

	test_by_address(&n);
	cout << n << endl;

	// �� ����
	// �� ��ȯ(type casting)
	int* p = (int*)malloc(sizeof(int));
	int* np = new int;

	// �Ҵ�޾Ҵ� ���� �ٽ� �ü������ �����ش�.
	// �̰� ������ ������ ���÷� ���, ���ҽ��� �ִµ��� �Ҵ��ϰ�
	// �װ� �� Ǭ��. �޸� ������� ���� �����.
	// ������ �ʴµ� ��� �� ���α׷��� �� �޸𸮸� ������ �ִ� ���̴�.
	free(p);
	delete np;

	return 0;
}