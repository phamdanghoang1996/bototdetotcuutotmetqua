/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   animal.h
 * Author: hoang
 *
 * Created on July 27, 2017, 1:27 PM
 */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string.h>
#include <iostream>
using namespace std;
class animal {
protected:
    int litSua;
    string ms;
    string tiengKeu;
public:
    friend ostream& operator<<(ostream& os, animal& ani){
        os<<"Thong tin: "<<endl;
        os<<"Ma so la: "<<ani.ms<<endl;
        os<<"So lit sua: "<<ani.litSua<<endl;
        return os;
    }
    friend istream& operator>>(istream& is, animal& ani){
        cout<<"Nhap ma so: "<<endl;
        is>>ani.ms;
        cout<<"Nhap so luong sua: "<<endl;
        is>>ani.litSua;
        return is;
    }
    void gettiengKeu(){
        cout<<"Khong co gi"<<endl;
    }
    int getLuongsua(){
        return litSua;
    }
};
#endif /* ANIMAL_H */
