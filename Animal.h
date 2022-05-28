#ifndef JUNGLE_ANIMAL_H
#define JUNGLE_ANIMAL_H


class Animal {
private:
    double x;
    double y;

public:
    Animal();
    virtual void fall();
    void setPosition(double x, double y);
};


#endif //JUNGLE_ANIMAL_H