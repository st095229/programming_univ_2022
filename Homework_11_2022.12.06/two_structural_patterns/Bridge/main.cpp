

#include <iostream>

using namespace std;

class Engine
{
public:
    virtual void engineInfo() = 0;
};

class Diesel : public Engine
{
    void engineInfo() override
    {
        cout << "Diesel ";
    }
};

class Petrol : public Engine
{
    void engineInfo() override
    {
        cout << "Petrol ";
    }
};

class Car
{
protected:
    Engine* engine;
public:
    Car(Engine* eng1) : engine(eng1) {}

    void setEngine(Engine* eng1)
    {
        engine = eng1;
    }

    virtual void ride() = 0;
};

class Mark2 : public Car
{
public:
    Mark2(Engine *eng1) : Car(eng1){}

    void ride() override
    {
        engine->engineInfo();
        cout << "Mark2 is riding now\n";
    }
};

class Hilux : public Car
{
public:
    Hilux(Engine *eng1) : Car(eng1){}

    void ride() override
    {
        engine->engineInfo();
        cout << "Hilux is riding now\n";
    }
};

int main(int argc, char* argv[])
{
    Car* car = new Mark2(new Petrol);
    car->ride();

    car->setEngine(new Diesel);
    car->ride();

    car = new Hilux(new Diesel);
    car->ride();

    car->setEngine(new Petrol);
    car->ride();

    return EXIT_SUCCESS;
}