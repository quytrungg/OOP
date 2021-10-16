#include "MyFunctions.h"

int main(){
    int n, option;
    std::cout << "Enter size of the array: ";
    std::cin >> n;
    std::cout << "Choose your variable type:\n1. Fraction\n2. int\n3. double\n";
    std::cin >> option;
    switch(option){
        case 1:{
            Fraction* a = new Fraction[n];
            std::cout << "Input array (if fraction is invalid, it won't be counted): ";
            //Input array
            InputFraction(a, n);
            //Sort Ascending
            SortAscending(a, n);
            std::cout << "Array has been sorted ascendingly\n";
            //Output array
            OutputFraction(a, n);
            //Sort Descending
            SortDescending(a, n);
            std::cout << "\nArray has been sorted descendingly\n";
            OutputFraction(a, n);
            delete[] a;
            break;
        }
        case 2:{
            int* a = new int[n];
            std::cout << "Input array: ";
            //Input array
            InputFraction(a, n);
            //Sort Ascending
            SortAscending(a, n);
            std::cout << "Array has been sorted ascendingly\n";
            //Output array
            OutputFraction(a, n);
            //Sort Descending
            SortDescending(a, n);
            std::cout << "\nArray has been sorted descendingly\n";
            OutputFraction(a, n);
            delete[] a;
            break;
        }
        case 3:{
            float* a = new float[n];
            std::cout << "Input array: ";
            //Input array
            InputFraction(a, n);
            //Sort Ascending
            SortAscending(a, n);
            std::cout << "Array has been sorted ascendingly\n";
            //Output array
            OutputFraction(a, n);
            //Sort Descending
            SortDescending(a, n);
            std::cout << "\nArray has been sorted descendingly\n";
            OutputFraction(a, n);
            delete[] a;
            break;
        }
        default:{
            std::cout << "Invalid variable type";
            return 0;
        }
    }
    return 0;
}