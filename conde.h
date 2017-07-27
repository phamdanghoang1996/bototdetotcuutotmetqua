/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   conde.h
 * Author: hoang
 *
 * Created on July 27, 2017, 1:27 PM
 */

#ifndef CONDE_H
#define CONDE_H
#include "animal.h"
class conde : public animal {
private:

public:
    friend ostream& operator<<(ostream& os, conde& de){
        cout<<"Ma so: "<<de.ms<<endl;
        cout<<"So lit sua la: "<<de.litSua<<endl;
    }
    friend istream& operator>>(istream& is, conde& de){
        cout<<"Nhap ma so de: "<<endl;
        is>>de.ms;
        cout<<"Nhap so lit sua cua de: "<<endl;
        is>>de.litSua;
        return is;
    }
    void gettiengKeu(){
        cout<<"de de"<<endl;
    }
    int getLuongsua(){
        return this->litSua;
    }


};

#endif /* CONDE_H */
