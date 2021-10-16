#include "MyFunctions.h"

//Set coefficient for monomial
void Monomial::SetCoe(double heso){
    this->coe = heso;
}

//Get coefficient for monomial
double Monomial::GetCoe(){
    return this->coe;
}

//Set exponent for monomial
void Monomial::SetExp(int somu){
    this->exp = somu;
}

//Get exponent for monomial
int Monomial::GetExp(){
    return this->exp;
}

//Input monomial
void Monomial::InputMonomial(){
    std::cin >> this->coe >> this->exp;
}

//Output monomial
void Monomial::OutputMonomial(){
    std::cout << this->coe << "x^" << this->exp << " "; 
}

//Evaluate for monomial
double Monomial::EvaluateMonomial(float x){
    float temp = 1;
    for(int i = 0; i < abs(this->exp); i++){
        temp *= x;
    }
    if(this->exp < 0){
        temp = 1/temp;
    }
    else if(this->exp == 0){
        temp = 1;
    }
    return temp*this->coe;
}

//Derive for monomial
Monomial Monomial::DeriveMonomial(){
    Monomial derive;
    this->coe *= this->exp;
    this->exp -= 1;
    derive.SetCoe(this->coe);
    derive.SetExp(this->exp);
    return derive;
}

//Multiply 2 monomials
Monomial Monomial::MultiplyMonomial(Monomial &m){
    Monomial mul;
    float heso = this->coe * m.GetCoe();
    int somu = this->exp + m.GetExp();
    mul.SetCoe(heso);
    mul.SetExp(somu);
    return mul;
}
