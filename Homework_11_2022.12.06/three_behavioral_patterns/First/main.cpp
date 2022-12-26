#include <iostream>
#include <string>

using namespace std;

class Object
{
public:
    virtual Object* setNextObject(Object* object) = 0;
    virtual string interact(string command) = 0;
};

class AbstractObject : public Object
{
private:
    Object* nextObject;
public:
    AbstractObject() : nextObject(nullptr) {}
    Object* setNextObject(Object* object) override
    {
        nextObject = object;
        return object;
    }
    string interact(string command) override
    {
        if(nextObject)
        {
            return nextObject->interact(command);
        }
        return "";
    }
};

class Fan : public AbstractObject
{
public:
    string interact(string command) override
    {
        if (command == "dry hair")
        {
            return "the fan dryed your hair";
        }
        return AbstractObject::interact(command);
    }
};

class WashingMachine : public AbstractObject
{
public:
    string interact(string command) override
    {
        if (command == "wash clothes")
        {
            return "the waching machine washed your clothes";
        }
        return AbstractObject::interact(command);
    }
};

class VisualStudio : public AbstractObject
{
public:
    string interact(string command) override
    {
        if (command == "launch the code")
        {
            return "Visual Studio launched the code";
        }
        return AbstractObject::interact(command);
    }
};

void giveCommand(Object* object, string command)
{
    string str = object->interact(command);
    if (str.empty())
    {
        cout << command << " - we have nothing to do this:(\n";
    }
    else
    {
        cout << str << endl;
    }
}

int main(int argc, char* argv[])
{
    Fan* fan = new Fan();
    WashingMachine* washingMachine = new WashingMachine();
    VisualStudio* visualStudio = new VisualStudio();

    fan->setNextObject(washingMachine)->setNextObject(visualStudio);


    giveCommand(fan, "dry hair");
    giveCommand(fan, "wash clothes");
    giveCommand(visualStudio, "launch the code");

    giveCommand(fan, "send all homeworks");

    return EXIT_SUCCESS;
}