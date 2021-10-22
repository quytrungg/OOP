#include "Header.h"

Array::Array(){
    this->arr = nullptr;
    this->size = 0;
}

Array::Array(int s){
    this->size = s;
    this->arr = new int[n];
    for(int i = 0; i < n; i++){
        this->arr[i] = 0;
    }
}

Array::Array(int* a, int s){
    this->size = s;
    this->arr = new int[this->size];
}

Array::Array(const Array &a){
    this->size = a.size;
    this->arr = new int[this->size];
    for(int i = 0; i < n; i++){
        this->arr[i] = a.arr[i];
    }
}

Array::~Array(){
    delete[] this->arr;
    std::cout << "Deallocated\n";
}

