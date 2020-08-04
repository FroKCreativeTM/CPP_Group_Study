/*
C��� ����
1. ����� �� �� �ȴ�. �� (printf, scanf)
2. ���� �ڷ����� ���� ��ﳭ��. �� (char, int, double, float, long long, long, unsigned)
3. ����, �����ڰ� ��ﳭ��. �� (+ - * / % >> << ~ == != & |)
4. ���ǹ� ��ﳭ��. �� (if, switch, else, else if)
5. �ݺ��� ��ﳭ��. �� (for, while, do while)
6. �迭 ��ﳭ��. �� (int arr[5], char str[15] = "Hello world!";
7. �Լ� ���� ���� �ϴ� ��� ��ﳭ��. �� def  -> ���̽�
int arr() 
{

}
����� main�� �Լ���.
8. ������ ��ﳭ��.? �� ��
9. ���ڿ� �ٷ�� �� ������� ��ﳭ��? �� �� char str[10] 
puts putc fputs 
strlen(str) -> str�� ���� ��ȯ.
strcat(dest, source) -> dest�� source�� ���ڿ��� ������
10. ����ü ��ﳭ��? ��
struct, union(������ ���� ������)
union
{
	int n,
	double d;
}
12����Ʈ x 8����Ʈ 
11. ���� ����� ��� ����.? �� 
FILE * fFile;
fFile = fopen("test.txt", "rt");
12. ���� �޸� ��ﳭ��? �� ��
// int arr[10]���� �� �������� ����ȴ�.
int * arr = (int*)malloc(sizeof(int) * 10));
*/

/*
C++�� �з����� �� 4���� �ִ�.
1. C - ���������� ���α׷��� ����. C++�� ������������ �ڵ��� �����ϴ�. ���� �ο췹���� ���� ������ �� �ִ� 
��� �� �ϳ��̴�.
2. C with Class - C++�� �⺻������ ��ü���� ���α׷��� ����̴�. �� ���� �����̳�?

��������
��� �����Ͱ� ������, � �˰����� �־ �� �˰����� Ÿ��Ÿ�� �������� �� ������ ����� �ϴ� �׷� ���.
��ü����
C++ - �پ߳� ��Ʈ�ӽ�Ʈ�� ������ ����ε� 4������ ��ҵ��� �ִ�. ,
ĸ��ȭ - �ϳ��� Ŭ������ �ְ�, �� �ȿ� ���� �����Ϳ� �˰����� ����ִ�.
���м� - �Ϻ� �����͵��� �ۿ��� ���� �� �ϰ� (���������, ������ �Ұ����ϴ�.)
��� - �θ� Ŭ������ �ְ�, �ڽ� Ŭ������ ������ �ڽ� Ŭ������ �θ� Ŭ������ �Ϻθ� �����޴´�.
������ - override(���߿� ������ �� ��)

3. ���ø� ���α׷��� (���߿� ������ �Ѵ�.)
�Ϲ�ȭ ���α׷��� - ������ �ð��� �ڷ����� �����ȴ�.

4. STL
���ø� ���α׷����� �ش�ȭ - �ڷᱸ��, �˰����� ���ø�ȭ �Ǿ� �ִ� �͵�

C -> C++�� ���� ��
1. stdio.h -> iostream (C�� C++�� �з������� �ٸ���.)
2. namespace��� ������ �ִ�. - 
*/

// cstdio : c + (C����� ǥ�� ��� �̸�) - (�ڿ� .h�� ������ �ʴ´�.)
#include <cstdio>
#include <iostream>

#include "namespace_test.h"

#pragma warning(disable:4996)

using namespace std;

// ��ũ��
#define X 100
const int X_CONST = 200;

// C����� ���
// ���� : ���� ����� �Ϲ����� �Լ����� �����ϴ�.
#define SQUARE(x) ((x) * (x))

// C++�� ���
// ������ ���ϰ�, ������ ���ϵǴ� �׷� �Լ�
inline int SQUARE_INLINE(int x)
{
	return x * x;
}

template <typename T>
inline T SQUARE_TEM_IN(T x)
{
	return x * x;
}

// c��� ���� ���
int Twosum(int a, int b)
{
	return a + b;
}

int ThreeSum(int a, int b, int c)
{
	return a + b + c;
}

/// <summary>
/// C++ ���� ��쿡�� �Լ� �����ε��̶�� ����� ����Ѵ�.
/// �Լ��� �̸��� �����鼭, ���ÿ� �Ű����� Ÿ���̳�, �Ű������� ���� �ٸ� ���� �ǹ��Ѵ�.
/// �̰��� �ٷ� �����ε��̴�.
///
/// �� �Ű����� ����Ʈ���̶�� ���� �����Ѵ�.
/// </summary>
/// <returns></returns>
int sum(int a = 20, int b = 10)
{
	return a + b;
}

int sum(int a, int b, int c)
{
	return a + b + c;
}

// ����Ʈ���� ���� �κп��� �־��ش�.
// �����Ϸ��� �ϴ� ������ ���� ���� �� ���� �ȿ� ���ǵ� �˰��� ���� ���� �����̴�.
void test(int a = 10);

int main()
{
	// 1. printf, scanf ��ü�غ���.
	// \n�� ����� ���� ���� ������ �˾ƺ���.
	printf("Hello world!\n");
	// printf -> cout�� ��ü�� �Ѵ�.
	// \n�� endl���� ��ü�� �ϴµ�.
	// �� \n�� endl���� ������.
	// endl�� stdout�� ���۸� ����� ���� ������ �ϱ� ������ �� ���� ���̴�.
	cout << "Hello world!" << "Test" << endl;
	// �Է�
	int a = 0;
	int b = 10;
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a, b);
	// c++ cin 
	cin >> a >> b;
	cout << a << " " << b << endl;

	char name[100];

	//scanf("%s", name);
	cin >> name;
	cout << name << endl;

	// �����ε��� ����� ��
	cout << sum(10, 20) << endl;
	cout << sum(10, 20, 30) << endl;

	// ����Ʈ���� ����� ���
	cout << sum() << endl;
	cout << sum(30) << endl;
	cout << sum(100) << endl;

	// cout << ((5) * (5));
	cout << SQUARE(5);

	Cha::Test();
	Moon::Test();
	Lee::Test();

	return 0;
}

void test(int a)
{

}