#include "include/element.h"
#include<iostream>

using namespace chemistry;

element::element() : e(),p(),n()
{
    atomic_no = 0;
    symbol = ' ';
    atomic_mass = 0.0;
    no_of_electron= 0;
    no_of_proton = 0;
    no_of_neutron = 0;
}

element::element(int _atomic_no,string _symbol,int no_of_proton) : e(),p(),n()
{
    atomic_no = _atomic_no;
    symbol = _symbol;
    no_of_electron= atomic_no;
    no_of_proton = atomic_no;
    no_of_neutron = atomic_no;
    atomic_mass = e.Mass();
}

element::~element()
{

}



void element::property()
{
    cout<<"Atomic Number :"<<atomic_no<<endl;
    cout<<"Atomic Symbol :"<<symbol<<endl;
    cout<<"Atomic Mass   :"<<atomic_mass<<endl;
}
