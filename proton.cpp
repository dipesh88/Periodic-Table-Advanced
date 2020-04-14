#include "include/proton.h"
#include<iostream>

using namespace chemistry;
using namespace std;

proton::proton() :  particle(1.6726219e-27,1.60217662e-19,'+')
{

}

proton::~proton()
{

}

void proton::property()
 {
    cout<<"Mass of Proton   :"<<mass<<endl;
    cout<<"Charge of Proton :"<<charge<<endl;
 }
