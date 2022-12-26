#include <iostream>

using namespace std;

// primary struct
template<class T>
struct RankOfArray
{
    static const int value = 0;
};

// partially specialized struct
template<class T, int N>
struct RankOfArray < T[N] >
{
    static const int value = 1+RankOfArray<T>::value;
};

int main()
{
    return 0;
}