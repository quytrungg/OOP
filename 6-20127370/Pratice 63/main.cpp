#include "Transport.h"

int main(){
    MotorBike m;
    Truck t;
    m.addFuel(100);
    m.addWeight(50);
    m.runDistance(200);
    m.currentFuel();
    t.addFuel(100);
    t.addWeight(50);
    t.runDistance(200);
    t.currentFuel();
    std::cout << "Motorbike current fuel: " << m.getFuel() << " (l)\n";
    std::cout << "Truck current fuel: " << t.getFuel() << " (l)\n";
    return 0;
}
