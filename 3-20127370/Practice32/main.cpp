#include "Header.h"

int main(){
    Student a("Mai Quy Trung");
    Student b("Nguyen Quoc Huy", 9, 10);
    Student c = b;
    
    a.OutputStudent();
    b.OutputStudent();
    c.OutputStudent();
    return 0;
}