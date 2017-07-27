/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   conbo.h
 * Author: hoang
 *
 * Created on July 27, 2017, 1:27 PM
 */

#ifndef CONBO_H
#define CONBO_H
#include <iostream>

#include "animal.h"
using namespace std;
class conbo : private animal{
private:

public:
    friend ostream& operator<<(ostream& os, conbo& bo){
        cout<<"Ma so: "<<bo.ms<<endl;
        cout<<"So lit sua la: "<<bo.litSua<<endl;
    }
    friend istream& operator>>(istream& is, conbo& bo){
        cout<<"Nhap ma so bo: "<<endl;
        is>>bo.ms;
        cout<<"Nhap so lit sua cua bo: "<<endl;
        is>>bo.litSua;
        return is;
    }
    void gettiengKeu(){
        cout<<"Bo bo"<<endl;
    }
    int getLuongsua(){
        return this->litSua;
    }
};

#endif /* CONBO_H */
