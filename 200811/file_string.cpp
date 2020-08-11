#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	// ���α׷��� ���Ϸκ��� �Է��� �޴´�.
	// is�� ifstream�� ��ü�̴�.
	ifstream is;
	// is�� ���ؼ� ������ ������ �õ��Ѵ�.
	is.open("hyunmin.txt");

	// ���� ������ �ʾҴٸ�
	if (is.is_open() == false)
	{
		// cout : console + out 
		// cerr : console + error
		cerr << "������ �� �� �����ϴ�." << endl;
		exit(EXIT_FAILURE);
	}

	string item;
	int count = 0;
	// getline�� �Լ� �����ε��� �Ǿ��ִ�. (�� �Ű������� �ٸ� �� �ִ�.)
	// 1��° �Ű����� : string ��ü�� � �Ű�ü�� �̿��ؼ� �Է� ���� ���ΰ�?
	// �ι�° �Ű����� : �Է¹��� ���� ���ٰ� ������ ���ΰ�
	// ����° �Ű�����(��������) : � �Է�(char��)�� �������� ���� ���ΰ�?
	getline(is, item, ':');	

	// is ��ü�� nullptr �ƴ� ���
	// �� ��ü�� ������ ���ִ� ���
	while (is)
	{
		++count;
		cout << count << ": " << item << endl;
		getline(is, item, ':');
	}

	cout << "���α׷� �����մϴ�." << endl;
	is.close();	// �� ��ü�� ����ִ� ������ �����Ѵ�.

	return 0;
}