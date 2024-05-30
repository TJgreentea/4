#ifndef SPOT_H
#define SPOT_H
#include<tuple>
class Spot{
    protected:
    std::tuple<int,int>location;
    char category;
    public:
    Spot(int x, int y, char category);
    std::tuple<int,int> getLoc() ;
    char getCategory();
  void setLoc(int x,int y) const;
  char setCategory(char category) const;
};
#endif