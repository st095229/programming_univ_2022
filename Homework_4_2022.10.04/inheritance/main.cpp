#include <iostream>
#include <string>

using namespace std;

class Sticker
{
public:
    Sticker()
    {
        cout << "Вызван конструктор класса Sticker\n";
    }

    ~Sticker()
    {
        cout << "Вызван деструктор класса Sticker\n";
    }

    void out()
    {
        cout << "Выход из класса Sticker\n";
    }
};

class Stocker : public Sticker
{
public:
    Stocker(string a)
    {
        cout << a << "\t";
        cout << "Вызван конструктор класса Stocker\n";
    }

    ~Stocker()
    {
        cout << "Вызван деструктор класса Stocker\n";
    }

    void out()
    {
        cout << "Выход из класса Stocker\n";
    }

};

class Stacker : public Stocker
{
public:
    Stacker(string s):Stocker(s)
    {
        cout << "Вызван конструктор класса Stacker\n";
    }

    ~Stacker()
    {
        cout << "Вызван деструктор класса Stacker\n";
    }

    void out()
    {
        cout << "Выход из класса Stacker\n";
    }

};

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "ru");

    Stacker c("hi");
    c.out();

    return EXIT_SUCCESS;
}