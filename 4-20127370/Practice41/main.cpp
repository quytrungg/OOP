#include "Header.h"

int main(){
    std::string num;
    std::cin >> num;
    char* clone = new char[num.length()+1];
    strcpy(clone, num.c_str());
    std::cout << num << "\n";
    for(int i = 0; i < num.length() + 1; i++)
        std::cout << clone[i];
    return 0;
}