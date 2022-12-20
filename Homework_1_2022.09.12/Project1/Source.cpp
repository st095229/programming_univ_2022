#include <iostream>

using namespace std;

struct MinMem
{
	/*32 Байта (32 байта + 0 байт)*/

	long long ll;	//8 байт
	double d;		//8 байт
	int i;			//4 байт
	long l;			//4 байт
	float f;		//4 байт
	short s;		//2 байт
	char c;			//1 байт
	bool b;			//1 байт
};

struct MaxMem
{
	/*48 байт (32 байта + 16 байт)*/
	char c;			//1 байт
	long long ll;	//8 байт
	bool b;			//1 байт
	double d;		//8 байт
	short s;		//2 байт
	int i;			//4 байт
	long l;			//4 байт
	float f;		//4 байт
};

int main()
{
	setlocale(LC_ALL, "ru");

	MinMem t1;
	cout << sizeof(t1) << endl;
	cout << &t1.ll << " " << sizeof(t1.ll) << endl;
	cout << &t1.d << " " << sizeof(t1.d) << endl;
	cout << &t1.i << " " << sizeof(t1.i) << endl;
	cout << &t1.l << " " << sizeof(t1.l) << endl;
	cout << &t1.f << " " << sizeof(t1.f) << endl;
	cout << &t1.s << " " << sizeof(t1.s) << endl;
	cout << (int*)&t1.c << " " << sizeof(t1.c) << endl;
	cout << &t1.b << " " << sizeof(t1.b) << endl;
	
	MaxMem t2;
	cout << sizeof(t2) << endl;
	cout << (int*)&t2.c << " " << sizeof(t2.c) << endl;
	cout << &t2.ll << " " << sizeof(t2.ll) << endl;
	cout << &t2.b << " " << sizeof(t2.b) << endl;
	cout << &t2.d << " " << sizeof(t2.d) << endl;
	cout << &t2.s << " " << sizeof(t2.s) << endl;
	cout << &t2.i << " " << sizeof(t2.i) << endl;
	cout << &t2.l << " " << sizeof(t2.l) << endl;
	cout << &t2.f << " " << sizeof(t2.f) << endl;
	
	return EXIT_SUCCESS;
}