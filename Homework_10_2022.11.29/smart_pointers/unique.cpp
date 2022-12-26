#include <iostream>
#include<memory>

using namespace std;

int main(int argc, char* argv[])
{
    // Create a unique_ptr to an array of 5 integers.
    auto p = make_unique<int[]>(5);

    for (int i = 0; i < 5; ++i)
    {
        p[i] = i;
        cout << p[i] << endl;
    }

    return EXIT_SUCCESS;
}