#include "Header.h"

template <typename T>
Array<T>::Array(){
    this->size = 0;
}

template <typename T>
Array<T>::Array(T s){
    this->size = s;
    arr = new T[s];
    for(int i = 0; i < this->size; i++){
        arr[i] = 0;
    }
}

template <typename T>
Array<T>::Array(T* &a, T s){
    this->size = s;
    this->arr = new T[this->size];
    for(int i = 0; i < this->size; i++){
        this->arr[i] = a[i];
    }
}

template <typename T>
Array<T>::Array(const Array &a){
    if(a.arr == nullptr){
        std::cout << "NULL pointer array cannot be copied!\n";
    }
    else{
        this->size = a.size;
        arr = new T[this->size];
        for(int i = 0; i < this->size; i++){
            arr[i] = a[i];
        }
    }
}

template <typename T>
Array<T>::~Array(){
    delete[] this->arr;
    std::cout << "Deallocated\n";
}

template <typename T>
void Array<T>::OutputArray(){
    for(int i = 0; i < this->size; i++){
        std::cout << this->arr[i] << " ";
    }
    std::cout << "\n";
}
