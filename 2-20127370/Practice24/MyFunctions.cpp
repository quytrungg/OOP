#include "MyFunctions.h"

//Input array
void Array::InputArray(){
    std::cin >> this->size;
    this->arr = new int[this->size];
    for(int i = 0; i < this->size; i++){
        std::cin >> this->arr[i];
    }
}

//Output array
void Array::OutputArray(){
    for(int i = 0; i < this->size; i++){
        std::cout << this->arr[i] << " ";
    }
}

//Set size of array
void Array::SetSize(int s){
    this->size = s;
}

//Get size of array
int Array::GetSize(){
    return this->size;
}

//Set element in array
void Array::SetElement(int pos, int e){
    this->arr[pos] = e;
}

//Get element in array
int Array::GetElement(int pos){
    return this->arr[pos];
}

//Find element in the array
int Array::FindElement(int e){
    for(int i = 0; i < this->size; i++){
        if(this->arr[i] == e){
            return i;
        }
    }
    return -1;
}

//Sort the array descendingly
void Array::SortDescending(){
    for(int i = 0; i < this->size - 1; i++){
        for(int j = i + 1; j < this->size; j++){
            if(this->arr[i] < this->arr[j]){
                SwapElement(this->arr[i], this->arr[j]);
            }
        }
    }
}

//Sort the array ascendingly
void Array::SortAscending(){
    for(int i = 0; i < this->size - 1; i++){
        for(int j = i + 1; j < this->size; j++){
            if(this->arr[i] < this->arr[j]){
                SwapElement(this->arr[i], this->arr[j]);
            }
        }
    }
}
