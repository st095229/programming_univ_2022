#include <iostream>
#include<cmath>

using namespace std;

struct foo
{
    int *data = nullptr; //better using nullptr
    int size = 0;

    foo(int n)
    {
        size = n;
        data = new int[2 * n];
    }

    foo(foo &A) //need to use & to avoid using the default copy constructor
    {
        size = A.size;
        data = new int[2 * size]; // data -> int, because we do similarly to foo(int)

        for (int i = 0; i < 2 * size; ++i) //we don't have "n" + i/2 here, it won't work correctly if size = 3
        {
            data[i] = A.data[i];
        }
    }
    ~foo()
    {
        delete[] data; //A -> data + [] for arrays
    }
    foo &operator=(foo &A) //needs to be updated
    {
        //swap needs to be defined
        delete []data;
        size = A.size;
        data = new int[2 * size];

        for (int i = 0; i < 2 * size; ++i)
        {
            data[i] = A.data[i];
        }

        return *this;
    }

};



int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");
    foo a(3);
    a.data[0] = 3;

    foo b = a;
    cout << b.data[0] << endl;

    foo c(b);
    cout << c.data[0];


    return EXIT_SUCCESS;
}