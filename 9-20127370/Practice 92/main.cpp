#include "Hotel.h"

int main(){
    HotelRoomList h;
    h.inputList();
    std::cout << "Total hotel rent price: " << h.calculateTotalRent() << "\n";
    return 0;
}