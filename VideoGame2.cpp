#include <iostream>
using namespace std;

class Enemy{
public:
    virtual void attack()=0;
};


class Ninja: public Enemy{
public:
    void attack(){
        cout << "I am a ninja, ninja chop! -" << endl;
    }
};

class Monster: public Enemy{
public:
    void attack(){
        cout << "monster must eat you! -" << endl;
    }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    enemy1->attack();
    enemy2->attack();
    return 0;
}
