#ifndef PERSONA_H
#define PERSPONA_H
#include"Spot.h"
class Persona: public Spot{
     public:
     Persona(int x, int y):Spot(x,y,'P'){}
     void shift(int dx,int dy){
       location= std::make_tuple(std::get<0>(location) + dx, std::get<1>(location) + dy); 
     }
};
#endif