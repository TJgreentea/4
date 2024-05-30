#include"Spot.h"
#include<cmath>
#include<tuple>
#include <cstdlib>
class Assiats{
    public:
    static std::tuple<int,int> createRandomLoc(int martirxWeight,int martixHeight){
       int x= rand()%martirxWeight;
       int y=rand()%martixHeight;
       return std:: make_tuple(x,y);
    };
    static double evaluateDistance(std::tuple<int, int> Loc1, std::tuple<int, int> Loc2){
     int x1,y1,x2,y2;
     std::tuple Loc1(x1,y1);
     std::tuple Loc2(x2,y2);
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    }
};