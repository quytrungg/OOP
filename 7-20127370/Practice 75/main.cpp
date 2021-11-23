#include "Cinema.h"

int main() {
    StandardCinema a(9, 4);
    std::cout << "Standard Cinema\nprice each row: ";
    for (int i = 0; i < 9; i++) {
        std::cout << a.getPrice(i) << "\t";
    }
    std::cout << "\n";
    std::cout << "seat(3,2) isAvaiable?: " << a.isEmpty(3, 2) << "\n";
    std::cout << "book seat(3,2): " << a.bookSeat(3, 2) << "\n";
    std::cout << "seat(3,2) isAvaiable?: " << a.isEmpty(3, 2) << "\n";
    std::cout << "book seat(3,2): " << a.bookSeat(3, 2) << "\n";
    std::cout << "book seat(4,2): " << a.bookSeat(4, 2) << "\n";
    std::cout << "seat(3,2) Price: " << a.getPrice(3) << "\n";
    std::cout << "seat(4,2) Price: " << a.getPrice(4) << "\n";
    std::cout << "total sell: " << a.getTotalPrice() << "\n";
    std::cout << "-----------------------------------------------------------";
    VIPCinema b(8, 4);
    std::cout << "\nVIPCinema\nprice each row: ";
    for (int i = 0; i < 8; i++) {
        std::cout << b.getPrice(i) << "\t";
    }
    std::cout << "\n";
    std::cout << "seat(3,2) isAvaiable?: " << b.isEmpty(3, 2) << "\n";
    std::cout << "book seat(3,2): " << b.bookSeat(3, 2) << "\n";
    std::cout << "seat(3,2) isAvaiable?: " << b.isEmpty(3, 2) << "\n";
    std::cout << "book seat(3,2): " << b.bookSeat(3, 2) << "\n";
    std::cout << "book seat(4,2): " << b.bookSeat(4, 2) << "\n";
    std::cout << "seat(3,2) Price: " << b.getPrice(3) << "\n";
    std::cout << "seat(4,2) Price: " << b.getPrice(4) << "\n";
    std::cout << "total sell: " << b.getTotalPrice() << "\n";
}