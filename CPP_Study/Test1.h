#pragma once
#include <iostream>

using namespace std;

class Inventory
{
public:
    int Price = 1000;
};

class Player
{
public:
    int KK = 200;
    
    Player& operator=(const Player& InPlayer)
    {
        cout << "Player() copy" << endl;

        return *this;
    }

    Player()
    {
        cout << "Player()" << endl;
    }

    ~Player()
    {
        cout << "~Player()" << endl;
    }

    void FightFunction()
    {
        cout << "Player Fight Function()" << endl;
    }

    Player* P1;

private:
};

class Pet
{
public:
    int age = 10;
};

class Knight : public Player
{
public:
    Knight()
    {
        cout << "Knight()" << endl;
    }

    ~Knight()
    {
        cout << "~Knight()" << endl;
    }

    void FightFunction() 
    {
        cout << "Knight Fight Function()" << endl;
    };

    int TestKnightFunction(int InA, float InB)
    {
        return InA + static_cast<int>(InB);
    }

    int Hp;

private:
};

class Archer : public Player
{
public:

    void FightFunction() 
    {
        cout << "Archer Fight Function()" << endl;
    };

    Archer()
    {
        cout << "Archer()" << endl;
    }

    ~Archer()
    {
        cout << "~Archer()" << endl;
    }

    int Hp;

private:
};
