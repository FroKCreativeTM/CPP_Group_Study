#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	// 프로그램이 파일로부터 입력을 받는다.
	// is는 ifstream의 객체이다.
	ifstream is;
	// is를 통해서 파일을 열려고 시도한다.
	is.open("hyunmin.txt");

	// 만약 열리지 않았다면
	if (is.is_open() == false)
	{
		// cout : console + out 
		// cerr : console + error
		cerr << "파일을 열 수 없습니다." << endl;
		exit(EXIT_FAILURE);
	}

	string item;
	int count = 0;
	// getline은 함수 오버로딩이 되어있다. (즉 매개변수가 다를 수 있다.)
	// 1번째 매개변수 : string 객체를 어떤 매개체를 이용해서 입력 받을 것인가?
	// 두번째 매개변수 : 입력받은 것을 어디다가 저장할 것인가
	// 세번째 매개변수(생략가능) : 어떤 입력(char형)을 기준으로 끊을 것인가?
	getline(is, item, ':');	

	// is 객체가 nullptr 아닌 경우
	// 즉 객체가 생성이 되있는 경우
	while (is)
	{
		++count;
		cout << count << ": " << item << endl;
		getline(is, item, ':');
	}

	cout << "프로그램 종료합니다." << endl;
	is.close();	// 이 객체가 잡고있는 파일을 해제한다.

	return 0;
}