#include "Array.h"

template <typename T>
Array<T>::Array(){
    this->size = 0;
    this->element = nullptr;
}

template <typename T>
Array<T>::Array(T* &a, int s){
    if(s <= 0 || a == nullptr){
        throw std::runtime_error("Cannot copy a nullptr array!\n");
    }
    this->size = s;
    this->element = new T[this->size];
    for(int i = 0; i < this->size; i++){
        this->element[i] = a[i];
    }
}

template <typename T>
Array<T>::Array(const Array& a){
    if(a.element == nullptr){
        std::cout << "Cannot copy a nullptr array!\n";
        exit(0);
    }
    this->size = a.size;
    this->element = new T[this->size];
    for(int i = 0; i < this->size; i++){
        this->element[i] = a.element[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& a){
    if(a.element == nullptr){
        std::cout << "Cannot copy a nullptr array!\n";
        exit(0);
    }
    delete[] this->element;
    this->size = a.size;
    this->element = new T[this->size];
    for(int i = 0; i < this->size; i++){
        this->element[i] = a.element[i];
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](int pos){
    return this->element[pos];
}

template <typename T>
std::ostream& operator<<(std::ostream& out, Array<T> a){
    if(a.element == nullptr){
        out << "This object is empty\n";
        return out;
    }
    for(int i = 0; i < a.size; i++){
        out << a.element[i] << " ";
    }
    out << "\n";
    return out;
}

template <typename T>
std::istream& operator>>(std::istream& in, Array<T> &a){
    in >> a.size;
    a.element = new T[a.size];
    for(int i = 0; i < a.size; i++){
        in >> a.element[i];
    }
    return in;
}

template <typename T>
template <typename T2>
Array<T>::operator T2*(){
    if(this->size == 0) return nullptr;
    T2* result = new T2[this->size];
    for(int i = 0; i < this->size; i++){
        result[i] = T2(this->element[i]);
    }
    return result;
}

template <typename T>
Array<T>::~Array(){
    delete[] this->element;
}

