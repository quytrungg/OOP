#include <iostream>
#include <string>

class Phu_nu{
public:

    Phu_nu(){

    }

    Phu_nu(const std::string &ht, int t, bool z = true)
    :ho_ten(ht), tuoi(t), virgin(z){}
    
    ~Phu_nu(){
        std::cout << "Chia tay " << ho_ten << "\n";
    }

    void trang_diem(){

    }
    virtual std::string choi_nhac_cu(std::string nhac_cu){
        return "AAAAA";
    }

    void unvirgin(){
        if(tuoi < 25) virgin = true;
    }

    void show_hang(){
        std::cout << ho_ten << " " << (virgin?"con zin":"mat zin") << "\n";
    }

protected:
    std::string ho_ten;
    bool virgin;
    int tuoi;

};

class gai_ngoan: public Phu_nu{
public:
    gai_ngoan(const std::string &ht, int t, bool z = true)
    :Phu_nu(ht, t, z){}

    void noi_tro(){
        std::cout << ho_ten << " dang lam noi tro\n";
    }

    std::string choi_nhac_cu(std::string nhac_cu){
        return "OOOOOO";
    }
};

class gai_hu: public Phu_nu{
public:
    gai_hu(const std::string &ht, int t, bool z = true)
    :Phu_nu(ht, t, z){}

    void di_bar(){
        
    }

    std::string choi_nhac_cu(std::string nhac_cu){
        return "UUUUUUU";
    }

};

 

class Dan_ong{

};

int main(){
    
    //Phu_nu thao;
    Phu_nu* maria = new gai_ngoan("Maria Ozawa", 22, false);
    //maria->ho_ten = "maria ozawa";
    std::cout << maria->choi_nhac_cu("ken") << "\n";




    Dan_ong* trung = new Dan_ong;

    maria->unvirgin();
    maria->show_hang();
    //maria->noi_tro();


    delete maria;

    return 0;
}