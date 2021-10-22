#include "Header.h"

int main(){
    Student a("Quy Trung");
    Student b("Quoc Huy", 9, 10);
    Student c = b;
    
    a.OutputStudent();
    b.OutputStudent();
    c.OutputStudent();
    return 0;
}