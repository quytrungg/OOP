#include "Cinema.h"

Cinema::Cinema(){
    this->empty = nullptr;
    this->row = 0;
    this->col = 0;
    this->maxPrice = 0;
    this->discount = false;
}

Cinema::Cinema(int row, int col, float price){
    this->row = row;
    this->col = col;
    this->empty = new bool*[this->row];
    for(int i = 0; i < this->row; i++){
        this->empty[i] = new bool[this->col];
        for(int j = 0; j < this->col; j++){
            this->empty[i][j] = 0;
        }
    }
    this->maxPrice = price;
    this->discount = false;
}

bool*& Cinema::operator[](int row){
    return this->empty[row]; 
}

bool Cinema::isEmpty(int row, int col){
    return this->empty[row][col] == 0;
}

bool Cinema::bookSeat(int row, int col){
    if(this->empty[row][col] == 0){
        this->empty[row][col] = 1;
        return true;
    }
    else return false;
}

Cinema::Cinema(const Cinema& c){
    if(this->empty == nullptr){
        throw std::runtime_error("Nullptr object");
    }
    this->row = c.row;
    this->col = c.col;
    this->empty = new bool*[this->row];
    for(int i = 0; i < this->row; i++){
        this->empty[i] = new bool[this->col];
        for(int j = 0; j < this->col; j++){
            this->empty[i][j] = c.empty[i][j];
        }
    }
}

Cinema& Cinema::operator=(const Cinema& c){
    if(this->empty == nullptr){
        throw std::runtime_error("Nullptr object");
    }
    for(int i = 0; i < this->row; i++){
        delete[] this->empty[i];
    }
    delete[] this->empty;
    this->row = c.row;
    this->col = c.col;
    this->empty = new bool*[this->row];
    for(int i = 0; i < this->row; i++){
        this->empty[i] = new bool[this->col];
        for(int j = 0; j < this->col; j++){
            this->empty[i][j] = c.empty[i][j];
        }
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, Cinema c){
    for(int i = 0; i < c.row; i++){
        for(int j = 0; j < c.col; j++){
            os << c.empty[i][j] << " ";
        }
        os << "\n";
    }
    return os;
}

Cinema::~Cinema(){
    if(this->row < 0 || this->col < 0 || this->empty != nullptr){
        for(int i = 0; i < this->row; i++){
            delete[] this->empty[i];
        }
        delete[] this->empty;
    }
}

float Cinema::getPrice(int row){
    if(row < 0 || row > this->row){
        throw std::runtime_error("Invalid seat!");
        return 0;
    }
    float mid = (float) this->row / 2 - 0.5;
    float result = this->maxPrice - 0.5 * (int(abs(row - mid)));
    if (result < 0) return 0;
    if(this->discount == false) return result;
    else return result * 0.8;
}

float Cinema::getTotalPrice(){
    float total = 0;
    for(int i = 0; i < this->row; i++){
        for(int j = 0; j < this->col; j++){
            if(this->empty[i][j] == 1){
                total += this->getPrice(i);
            }
        }
    }
    return total;
}

StandardCinema::StandardCinema(int row, int col): Cinema(row, col, 10){

}

VIPCinema::VIPCinema(int row, int col): Cinema(row, col, 15){

}

void VIPCinema::isThursday(){
    this->discount = true;
}
