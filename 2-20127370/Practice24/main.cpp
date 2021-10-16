#include "MyFunctions.h"

int main(){
    Array a;
    std::cout << "Input size and elements in the array: ";
    a.InputArray();

    int num;
    std::cout << "Enter position: ";
    std::cin >> num;
    std::cout << "Size of array and the value at postion is: ";
    std::cout << a.GetSize() << " " << a.GetElement(1) << "\n";

    std::cout << "Enter the finding number: ";
    std::cin >> num;
    std::cout << "The number is at position (-1 if not found): " << a.FindElement(num) << "\n";

    a.SortAscending();
    std::cout << "Ascending order: ";
    a.OutputArray();
    std::cout << std::endl;
    a.SortDescending();
    std::cout << "Descending order: ";
    a.OutputArray();
    return 0;
}