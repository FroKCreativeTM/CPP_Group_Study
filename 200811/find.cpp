#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1("Hello world!");
	string str2(20, '&');
	string str3(str1);
	string str4 = { 'H','E','L','L','O' };
	char cstr[] = "The road to success and the road to failure are almost exactly the same.";
	string str5(cstr, 20);
	string str6(&cstr[5], &cstr[25]);
	string str7(cstr, 10, 30);
	string str8;
	str3 += " Goodbye";

	// cout << (str1 == str2) << endl;
	// cout << (str1 == "Hello world!") << endl;
	// cout << str1 << endl;
	// cout << str6 << endl;
	// cout << (str1 > str6) << endl;

	// ������ find �Լ��� -1�� ��ȯ�ϰ�
	// ������ �Լ��� �Ű������� ���ڿ��� ù �ε����� ��ȯ�Ѵ�.
	int idx = str1.find("world");

	if (idx != -1)
		cout << idx << endl;

	return 0;
}