#include "MyFunctions.h"

int main(){
    Array a;
    std::cout << "Input size and elements in the array: ";
    a.InputArray();

    int num;
    do{
        std::cout << "Enter position: ";
        std::cin >> num;
    } while(num < 0 || num > a.GetSize());
    std::cout << "Size: " << a.GetSize() << " Element at position: " << a.GetElement(num) << "\n";

    std::cout << "Enter the finding number: ";
    std::cin >> num;
    std::cout << "The number is at position (-1 if not found): " << a.FindElement(num) << "\n";

    int pos, e;
    a.SetElement(pos, e);

    a.SortAscending();
    std::cout << "Ascending order: ";
    a.OutputArray();
    std::cout << std::endl;
    a.SortDescending();
    std::cout << "Descending order: ";
    a.OutputArray();
    return 0;
}