#include <iostream>
#include <string>

// cǥ���� �����
// c + ����� �̸�
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	// string ���� ��� 
	// c ��Ÿ���� ������ ��Ȱ���� �����
	// �ֳĸ� ��� �Լ��� �ϳ��ϳ� �����ͼ� ����Ѵ�.
	// c++�� ��ü����
	// ��ü������ ���� : ��Ȱ���� �Ǿ���
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

	// '\n'�� �Է¿� ������ �װ� ������ ���´�.
	getline(cin, str8);
	cout << str8 << endl;

	return 0;
}