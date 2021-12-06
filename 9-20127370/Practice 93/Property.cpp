#include "Property.h"

//Calculate area of rectangle property
float Rectangle::calculateArea(){
    return (float) this->width * this->height;
}

//Calculate area of trapezoid property
float Trapezoid::calculateArea(){
    return (float) (this->p1 + this->p2) * this->h / 2;
}

//Default constructor for property
Property::Property(){
    this->code = "";
    this->price = 0;
    this->discount = false;
}

//Constructor for property
Property::Property(bool d){
    this->discount = d;
}

//Input property
void Property::input(){
    std::cout << "Enter property code: ";
    std::string temp;
    std::cin.ignore();
    std::getline(std::cin, temp, '\n');
    this->code = temp;
    std::cout << "Enter price (per m^2): ";
    std::cin >> this->price;
}

//Calculate the price of property
float Property::calculatePrice(){
    if(this->discount == true)
        return (double) this->price * 0.95 * this->calculateArea();
    else return (double) this->price * this->calculateArea();
}

//Default construct for rectangle property
Rectangle::Rectangle(): Property(false){
    this->width = 0;
    this->height = 0;
}

//Input rectangle property
void Rectangle::input(){
    Property::input();
    std::cout << "Enter width: ";
    std::cin >> this->width;
    std::cout << "Enter height: ";
    std::cin >> this->height;
}

//Calculate rectangle property price
float Rectangle::calculatePrice(){
    return Property::calculatePrice();
}

//Default construct for rectangle property
Trapezoid::Trapezoid(): Property(true){
    this->p1 = 0;
    this->p2 = 0;
    this->h = 0;
}

//Input trapezoid property
void Trapezoid::input(){
    Property::input();
    std::cout << "Enter p1 and p2: ";
    std::cin >> this->p1 >> this->p2;
    std::cout << "Enter height: ";
    std::cin >> this->h;
}

//Calculate trapezoid property price
float Trapezoid::calculatePrice(){
    return Property::calculatePrice();
}

//Input list of properties
void PropertyCompany::inputList(){
    int n, option;
    Property* p;
    std::cout << "Property\n1. Rectangle\n2. Trapezoid\nEnter number of properties: ";
    std::cin >> n;
    std::cout << "\n";
    for(int i = 0; i < n; i++){
        std::cout << "Enter property type: ";
        std::cin >> option;
        if(option == 1) p = new Rectangle;
        else p = new Trapezoid;
        p->input();
        this->list.push_back(p);
        std::cout << "\n";
    }
}

//Calculate the total property price
float PropertyCompany::calculateTotalPrice(){
    float total = 0;
    for(int i = 0; i < this->list.size(); i++){
        total += this->list[i]->calculatePrice();
    }
    return total;
}

//Deallocate the property list of pointers
PropertyCompany::~PropertyCompany(){
    for(int i = 0; i < this->list.size(); i++){
        delete this->list[i];
    }
}
