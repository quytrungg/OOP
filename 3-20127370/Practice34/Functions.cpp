#include "Header.h"

//Constructor for array with default size 0
template <typename T>
Array<T>::Array(){
    this->size = 0;
}

//Constructor for array with given size and default elements' value 0
template <typename T>
Array<T>::Array(T s){
    this->size = s;
    arr = new T[this->size];
    for(int i = 0; i < this->size; i++){
        this->arr[i] = 0;
    }
}

//Constructor for array copied from a given array with its size
template <typename T>
Array<T>::Array(T* &a, T s){
    this->size = s;
    this->arr = new T[this->size];
    for(int i = 0; i < this->size; i++){
        this->arr[i] = a[i];
    }
}

//Constructor copy from another array
template <typename T>
Array<T>::Array(const Array &a){
    if(a.arr == nullptr){
        std::cout << "Cannot copy an empty array!\n";
        exit(0);
    }
    else{
        this->size = a.size;
        this->arr = new T[this->size];
        for(int i = 0; i < this->size; i++){
            this->arr[i] = a.arr[i];
        }
    }
}

//Destructor for array, deallocate the array pointer
template <typename T>
Array<T>::~Array(){
    delete[] this->arr;
    this->arr = nullptr;
    std::cout << "Deallocated\n";
}

//Print the array on screen
template <typename T>
void Array<T>::OutputArray(){
    for(int i = 0; i < this->size; i++){
        std::cout << this->arr[i] << " ";
    }
    std::cout << "\n";
}
