/*
C언어 수준
1. 입출력 할 줄 안다. ○ (printf, scanf)
2. 나는 자료형이 얼추 기억난다. ○ (char, int, double, float, long long, long, unsigned)
3. 수식, 연산자가 기억난다. ○ (+ - * / % >> << ~ == != & |)
4. 조건문 기억난다. ○ (if, switch, else, else if)
5. 반복문 기억난다. ○ (for, while, do while)
6. 배열 기억난다. ▲ (int arr[5], char str[15] = "Hello world!";
7. 함수 정의 선언 하는 방법 기억난다. ▲ def  -> 파이썬
int arr() 
{

}
참고로 main도 함수다.
8. 포인터 기억난다.? ※ ★
9. 문자열 다루는 법 어느정도 기억난다? ※ ★ char str[10] 
puts putc fputs 
strlen(str) -> str의 길이 반환.
strcat(dest, source) -> dest에 source의 문자열이 합쳐짐
10. 구조체 기억난다? ○
struct, union(은근히 자주 쓰더라)
union
{
	int n,
	double d;
}
12바이트 x 8바이트 
11. 파일 입출력 기억 난다.? ▲ 
FILE * fFile;
fFile = fopen("test.txt", "rt");
12. 동적 메모리 기억난다? ※ ★
// int arr[10]같은 게 힙공간에 저장된다.
int * arr = (int*)malloc(sizeof(int) * 10));
*/

/*
C++의 패러다임 총 4개가 있다.
1. C - 절차지향적 프로그래밍 언어다. C++도 절차지향적인 코딩이 가능하다. 또한 로우레벨에 쉽게 접근할 수 있는 
언어 중 하나이다.
2. C with Class - C++은 기본적으로 객체지향 프로그래밍 언어이다. 이 말은 무엇이냐?

절차지향
어떠한 데이터가 들어오면, 어떤 알고리즘이 있어서 그 알고리즘을 타고타고 내려오고 그 다음에 출력을 하는 그런 방식.
객체지향
C++ - 바야네 스트롭스트룹 설계한 사람인데 4가지의 요소들이 있다. ,
캡슐화 - 하나의 클래스가 있고, 그 안에 관련 데이터와 알고리즘이 들어있다.
은닉성 - 일부 데이터들은 밖에서 접근 못 하게 (허락없으면, 접근이 불가능하다.)
상속 - 부모 클래스가 있고, 자식 클래스가 있으며 자식 클래스는 부모 클래스의 일부를 물려받는다.
다형성 - override(나중에 설명을 할 게)

3. 템플릿 프로그래밍 (나중에 설명을 한다.)
일반화 프로그래밍 - 컴파일 시간에 자료형이 결정된다.

4. STL
템플릿 프로그래밍의 극대화 - 자료구조, 알고리즘이 템플릿화 되어 있는 것들

C -> C++로 가는 거
1. stdio.h -> iostream (C와 C++은 패러다임이 다르다.)
2. namespace라는 공간이 있다. - 
*/

// cstdio : c + (C언어의 표준 헤더 이름) - (뒤에 .h는 붙이지 않는다.)
#include <cstdio>
#include <iostream>

#include "namespace_test.h"

#pragma warning(disable:4996)

using namespace std;

// 매크로
#define X 100
const int X_CONST = 200;

// C언어의 경우
// 단점 : 정의 방식이 일반적인 함수보다 복잡하다.
#define SQUARE(x) ((x) * (x))

// C++의 경우
// 장점은 취하고, 단점은 보완되는 그런 함수
inline int SQUARE_INLINE(int x)
{
	return x * x;
}

template <typename T>
inline T SQUARE_TEM_IN(T x)
{
	return x * x;
}

// c언어 같은 경우
int Twosum(int a, int b)
{
	return a + b;
}

int ThreeSum(int a, int b, int c)
{
	return a + b + c;
}

/// <summary>
/// C++ 같은 경우에는 함수 오버로딩이라는 기능을 사용한다.
/// 함수의 이름이 같으면서, 동시에 매개변수 타입이나, 매개변수의 수가 다른 것을 의미한다.
/// 이것이 바로 오버로딩이다.
///
/// 또 매개변수 디폴트값이라는 것이 존재한다.
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

// 디폴트값은 선언 부분에만 넣어준다.
// 컴파일러는 일단 선언을 보고 나서 그 선언 안에 정의된 알고리즘 등을 보기 때문이다.
void test(int a = 10);

int main()
{
	// 1. printf, scanf 대체해보자.
	// \n과 비슷한 뜻을 가진 문법도 알아보자.
	printf("Hello world!\n");
	// printf -> cout로 대체를 한다.
	// \n는 endl으로 대체를 하는데.
	// 단 \n가 endl보다 빠르다.
	// endl은 stdout의 버퍼를 지우고 행을 마감을 하기 때문에 더 느린 것이다.
	cout << "Hello world!" << "Test" << endl;
	// 입력
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

	// 오버로딩을 사용한 것
	cout << sum(10, 20) << endl;
	cout << sum(10, 20, 30) << endl;

	// 디폴트값을 사용한 경우
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