#include <iostream>

using namespace std;

class First
{
	friend struct Second;
	
	int a;

	void print1()
	{
		cout << this->a << endl;
	}
};

struct Second
{
	void print(First t)
	{
		void (First:: * pointer)() = &First::print1;
		(t.*pointer)();
	}

	void swapper(First& t, int a)
	{
		t.a = a;
	}
};

int main(int argc, char* argv[])
{
	First x;
	Second y;

	y.swapper(x, 1355);
	y.print(x);

	return EXIT_SUCCESS;
}