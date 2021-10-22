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
    if(s > 0){
        this->size = s;
        int* temp = this->arr;
        this->arr = new int[this->size];
        for(int i = 0; i < this->size; i++){
            this->arr[i] = temp[i];
        }
    }
    else{
        throw "Invalid size\n";
    }
}

//Get size of array
int Array::GetSize(){
    return this->size;
}

//Set element in array
void Array::SetElement(int pos, int e){
    do{
        std::cout << "Enter position and new value: ";
        std::cin >> pos >> e;
    } while(pos < 0 || pos > this->size);
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

bool Ascending(int a, int b){
    return a < b;
}

bool Descending(int a, int b){
    return a > b;
}

//Sort the array descendingly
void Array::Sort(bool (*sort)(int, int)){
    for(int i = 0; i < this->size - 1; i++){
        for(int j = i + 1; j < this->size; j++){
            if(!(*sort)(this->arr[i], this->arr[j])){
                SwapElement(this->arr[i], this->arr[j]);
            }
        }
    }
}
