/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: hoang
 *
 * Created on July 27, 2017, 1:27 PM
 */

#include <cstdlib>
#include <iostream>
#include "conbo.h"
#include "concuu.h"
#include "conde.h"
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    int soluong;
    cout<<"Nhap so luong cuu, bo, de muon nhap: "<<endl;
    cin>>soluong;
    conbo bo[50];
    concuu cuu[50];
    conde de[50];
    //Nhap thong tin con bo:
    cout<<"NHAP BO"<<endl;
    for(int i_bo=0;i_bo<soluong;i_bo++){
      cout<<"Nhap con thu "<<i_bo+1<<endl;
      cin>>bo[i_bo];
    }
    cout<<"--------------------------------------------"<<endl;
    //Nhap thong tin con cuu:
    cout<<"NHAP CUU"<<endl;
    for(int i_cuu=0;i_cuu<soluong;i_cuu++){
      cout<<"Nhap con thu "<<i_cuu+1<<endl;
      cin>>cuu[i_cuu];
    }
    cout<<"--------------------------------------------"<<endl;
    cout<<"NHAP DE"<<endl;
    for(int i_de=0;i_de<soluong;i_de++){
      cout<<"Nhap con thu "<<i_de+1<<endl;
      cin>>de[i_de];
    }
    //XUAT THONG TIN:
    cout<<"--------------------------------------------"<<endl;
    cout<<"THONG KE SO LUONG SUA: "<<endl;
    int suaBo;
    int suaCuu;
    int suaDe;
    for(int i_sua=0;i_sua<soluong;i_sua++){
      suaBo += bo[i_sua].getLuongsua();
      suaDe += de[i_sua].getLuongsua();
      suaCuu += cuu[i_sua].getLuongsua();
    }
    cout<<"Luong sua cua bo la: "<<suaBo<<endl;
    cout<<"Luong sua cua de la: "<<suaDe<<endl;
    cout<<"Luong sua cua cuu la: "<<suaCuu<<endl;
    int tongSua = suaBo + suaDe + suaCuu;
    cout<<"TONG SO LUONG SUA CUA 3 CON LA: "<<tongSua<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"BIEU DO THONG KE (lit)"<<endl;
    cout<<"Bo  = ";
    for(int tk_suaBo=0;tk_suaBo<suaBo;tk_suaBo++){
      cout<<"* ";
    }
    cout<<endl;
    cout<<"De  = ";
    for(int tk_suaDe=0;tk_suaDe<suaDe;tk_suaDe++){
      cout<<"* ";
    }
    cout<<endl;
    cout<<"Cuu = ";
    for(int tk_suaCuu=0;tk_suaCuu<suaDe;tk_suaCuu++){
      cout<<"* ";
    }
    cout<<endl;
    cout<<"Tong= "<<endl;
    for(int tk_tong=0;tk_tong<tongSua;tk_tong++){
      cout<<"* ";
    }
}
