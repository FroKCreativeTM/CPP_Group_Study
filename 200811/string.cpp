#include <iostream>
#include <string>

// c표준의 헤더는
// c + 헤더의 이름
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	// string 같은 경우 
	// c 스타일의 문법은 재활용이 힘들어
	// 왜냐면 모든 함수를 하나하나 가져와서 써야한다.
	// c++은 객체지향
	// 객체지향의 장점 : 재활용이 되야해
	string str1{ "Hello world!" };
	string str2(20, '&');
	string str3(str1);
	string str4 = { 'H','E','L','L','O' };
	char cstr[] = "The road to success and the road to failure are almost exactly the same.";
	string str5(cstr, 20);
	string str6(&cstr[5], &cstr[25]);
	string str7(cstr, 10, 30);
	string str8;
	str3 += " Goodbye";

	// '\n'가 입력에 들어오면 그걸 단위로 끊는다.
	getline(cin, str8);
	cout << str8 << endl;

	return 0;
}