#include <iostream>

using namespace std;

class First
{
public:
    int *a = new int[10];
    First(int tmp = 0)
    {
        a[5] = tmp;
    }
    ~First()
    {
        delete[] a;
        cout << "destructor First called\n";
    }
};

class Second : public First
{
public:
    Second(int tmp = 0) : First(tmp)
    {

    }
    ~Second()
    {
        a[5] = 0;
        cout << "destructor Second called\n";
    }
};

int main(int argc, char* argv[])
{
    Second b(5);
    First a;
    cout << b.a[5]  << endl;

    return EXIT_SUCCESS;
}
