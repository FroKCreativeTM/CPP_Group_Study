#include <iostream>

using namespace std;

// test��� ���� �ٸ��� ����
// void test(int* ptr)
// {
// 	// ptr�� �ּҰ��� ������ �ִ� �ڷ�
// 	*ptr = 20;
// }

// main�̶� ����
int main()
{
	// int* ptr;			// ������ Ÿ��
	// int a = 10;
	// cout << a << endl;
	// // ptr = a;	// 10�� �Ѱ��� ��
	// ptr = &a;	// ��Ȯ�ϰ� a�� �ּҰ��� �˷��� ��(����Ų��.)
	// // test(&a);
	// test(ptr);
	// cout << a << endl;

	int a = 10;
	int b = 20;
	int* p1;
	int* p2;

	p1 = &a;
	p2 = &b;
	 
	(*p1)--;
	p1 = &b;
	p2 = &a;

	cout << *p1 << " " << *p2 << endl;
}