#pragma once

#include <cstdio>

namespace mystd 
{
	class ostream
	{
	public:
		ostream& operator<<(char* str)
		{
			printf("%s", str);
			return *this;
		}
		ostream& operator<<(const char* str)
		{
			printf("%s", str);
			return *this;
		}
		ostream& operator<<(int num)
		{
			printf("%d", num);
			return *this;
		}
		ostream& operator<<(char c)
		{
			printf("%c", c);
			return *this;
		}
		ostream& operator<<(double d)
		{
			printf("%lf", d);
			return *this;
		}
		ostream& operator<<(float f)
		{
			printf("%f", f);
			return *this;
		}
		ostream& operator<<(ostream& (*fp)(ostream& ostm))
		{
			return fp(*this);
		}
	};

	ostream& endl(ostream& ostm)
	{
		ostm << '\n';			// mystd::cout << '\n';
		fflush(stdout);			// stdout ���۸� �����ش�.
		return ostm;			// cout�� �����Ѵ�.
	}

	ostream cout;
}