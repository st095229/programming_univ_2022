#include <iostream>
#include <string>

using namespace std;

class EuPowerSocket
{
private:
    string connector = "eu";
public:
    virtual string valConnector() = 0;
};

class RuPowerSocket
{
private:
    string connector = "ru";
public:
    string valConnector()
    {
        return connector;
    }
};

class RusAdapter : public EuPowerSocket
{
    string valConnector() override
    {
        return "ru";
    }
};

int main(int argc, char* argv[])
{
    RuPowerSocket *rus = new RuPowerSocket;
    EuPowerSocket *eng = new RusAdapter;

    if (rus->valConnector() == eng->valConnector())
    {
        cout << "you can charge your device!\n";
    }

    return EXIT_SUCCESS;
}