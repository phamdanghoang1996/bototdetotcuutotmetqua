/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   concuu.h
 * Author: hoang
 *
 * Created on July 27, 2017, 1:27 PM
 */

#ifndef CONCUU_H
#define CONCUU_H
#include "animal.h"
class concuu : private animal {
private:

public:
    friend ostream& operator<<(ostream& os, concuu& cuu){
        cout<<"Ma so: "<<cuu.ms<<endl;
        cout<<"So lit sua la: "<<cuu.litSua<<endl;
    }
    friend istream& operator>>(istream& is, concuu& cuu){
        cout<<"Nhap ma so cuu: "<<endl;
        is>>cuu.ms;
        cout<<"Nhap so lit sua cua cuu: "<<endl;
        is>>cuu.litSua;
        return is;
    }
    void gettiengKeu(){
        cout<<"cuu cuu"<<endl;
    }
    int getLuongsua(){
        return this->litSua;
    }
};

#endif /* CONCUU_H */
