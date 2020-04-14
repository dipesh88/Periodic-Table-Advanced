#include "include/neutron.h"
#include<iostream>

using namespace chemistry;
using namespace std;

neutron::neutron() :  particle(1.6749274980495e-27,0.0,' ')
{

}

neutron::~neutron()
{

}
 void neutron::property()
 {
  cout<<"Mass of Neutron   :"<<mass<<endl;
  cout<<"Charge of Neutron :"<<charge<<endl;
 }
