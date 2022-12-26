#include <iostream>
#include <string>

using namespace std;


class RPGCharacters
{
protected:
    string name;
    int hp = 0;
    int damage = 0;

public:
    virtual void setName() = 0;
    void showInfo()
    {
        cout << "parameters of you character:\n";
        cout << "-----------------------------------\n";
        cout << "name of your character: " << name << endl << "character's hp: " << hp << endl << "character's damage: " << damage << endl;
    }
};


class Invoker : public RPGCharacters
{
public:
    void setName() override
    {
        name = "Invoker";
        hp = 560;
        damage = 55;
    }
};

class Pudge : public  RPGCharacters
{
public:
    void setName() override
    {
        name = "Pudge";
        hp = 700;
        damage = 51;
    }
};

class Techies : public  RPGCharacters
{
public:
    void setName() override
    {
        name = "Techies";
        hp = 520;
        damage = 38;
    }
};

class Zeus : public  RPGCharacters
{
public:
    void setName() override
    {
        name = "Zeus";
        hp = 600;
        damage = 49;
    }
};

namespace Characters
{

    RPGCharacters* createCharacter(int type)
    {
        RPGCharacters *character = nullptr;

        switch(type)
        {
            case 1:
            {
                character = new Invoker;
                break;
            }
            case 2:
            {
                character = new Pudge;
                break;
            }
            case 3:
            {
                character = new Techies;
                break;
            }
            case 4:
            {
                character = new Zeus;
                break;
            }
            default:
            {
                throw out_of_range("you've entered the wrong number\n");
            }
        }
        character->setName();
        return character;
    }
};


int main()
{
    int type = 0;
    cout << "Hello, you are in the RPGCharacters game.\n"
         << "Which character do you want to play for?\n"
         << "Enter the number of the character you want to play for:\n"
         << "1: Invoker\n2: Pudge\n3: Techies\n4: Zeus\n";

    cin >> type;

    RPGCharacters *character = Characters::createCharacter(type);
    character->showInfo();

    return EXIT_SUCCESS;
}