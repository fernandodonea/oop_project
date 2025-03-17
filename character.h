#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
public:
    Character();
    ~Character();

    void attack();
    void defend();

private:
    int health;
    int strength;
};

#endif 