#ifndef HEADER_H
#define HEADER_H

#include <iostream>

template <typename T>
class Matrix
{
private:
    T** element;
    int row, col;
public:
    Matrix();
    Matrix(int row, int col);
    Matrix(const Matrix &m);
    T* operator[](int row);
    Matrix& operator=(const Matrix &m);
    T findMax();
    template <typename V>
    friend std::ostream& operator<<(std::ostream& out, Matrix<V> m);
    template <typename V>
    friend std::istream& operator>>(std::istream& in, Matrix<V> &m);
    ~Matrix();
};

template <typename T>
Matrix<T>::Matrix(){
    this->element = nullptr;
    this->row = 0;
    this->col = 0;
}

template <typename T>
Matrix<T>::Matrix(int row, int col){
    this->row = row;
    this->col = col;
    this->element = new T*[this->row];
    for(int i = 0; i < this->row; i++){
        this->element[i] = new T[this->col];
    }
}

template <typename T>
Matrix<T>::Matrix(const Matrix &m){
    if(m.element == nullptr){
        std::runtime_error("Nullptr");
    }
    this->row = m.row;
    this->col = m.col;
    this->element = new T*[this->row];
    for(int i = 0; i < this->row; i++){
        this->element[i] = new T[this->col];
        for(int j = 0; j < this->col; j++){
            this->element[i][j] = m.element[i][j]; 
        }
    }
}

template <typename T>
T* Matrix<T>::operator[](int row){
    return this->element[row];
}

template <typename T>
Matrix<T>& Matrix<T>::operator=(const Matrix &m){
    if(m.element == nullptr){
        std::runtime_error("Nullptr");
    }
    for(int i = 0; i < this->col; i++){
        delete[] this->element[i];
    }
    delete[] this->element;
    this->row = m.row;
    this->col = m.col;
    this->element = new T*[this->row];
    for(int i = 0; i < this->row; i++){
        this->element[i] = new T[this->col];
        for(int j = 0; j < this->col; j++){
            this->element[i][j] = m.element[i][j];
        }
    }
}

template <typename T>
std::ostream& operator<<(std::ostream& out, Matrix<T> m){
    for(int i = 0; i < m.row; i++){
        for(int j = 0; j < m.col; j++){
            out << m.element[i][j] << " ";
        }
        out << "\n";
    }
    return out;
}

template <typename T>
std::istream& operator>>(std::istream& in, Matrix<T> &m){
    for(int i = 0; i < m.row; i++){
        for(int j = 0; j < m.col; j++){
            in >> m.element[i][j];
        }
    }
    return in;
}

template <typename T>
Matrix<T>::~Matrix(){
    delete[] this->element;
}

#endif


