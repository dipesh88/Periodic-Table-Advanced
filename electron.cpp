#include"include/electron.h"
#include<iostream>

using namespace chemistry;
using namespace std;

electron::electron(): particle(9.10938356e-31,-1.60217662e-19,'-')
{

}

electron::~electron()
{

}


void electron::property()
{
   cout<<"Mass of Electron   :"<<mass<<endl;
   cout<<"Charge of Electron :"<<charge<<endl;
}


