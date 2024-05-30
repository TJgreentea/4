#include"Spot.h"
#include"Assiats.h"
#include <iostream>
#include<tuple>
int main(){
     srand(static_cast<unsigned>(time(0)));
    auto loc1=Assiats::createRandomLoc(100,100);
    auto loc2=Assiats::createRandomLoc(100,100);
    Spot spot1(std::get(0)(loc1),std::get(1)(loc1),"A");
    Spot spot2(std::get(0)(loc2),std::get(1)(loc2),"B");

std::cout << "spot 1: (" << std::get<0>(spot1.getLoc()) << ", " << std::get<1>(spot1.getLoc()) << "), Type: " << spot1.getCategory() << std::endl;
    std::cout << "spot2: (" << std::get<0>(spot2.getLoc()) << ", " << std::get<1>(spot2.getLoc()) << "), Type: " << spot2.getCategory() << std::endl;

    double distance = Influence::calculateDistance(spot1.getLoc(), spot2.getLoc());
    std::cout << "Distance between Entity 1 and Entity 2: " << distance << std::endl;

    return 0;
}
