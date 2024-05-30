#ifndef SNARE_H
#define SNARE_H
#include "Spot.h"
#include "Influence.h"
class Snare :public Spot , public Influence{
public:
Snare(int x, int y):Spot(x,y,'S'){}

bool operative();
bool isOperative(Spot&spot){
  spot=Spot(-1,-1,'X');
    return false;
}

};
#endif