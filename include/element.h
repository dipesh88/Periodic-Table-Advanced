#ifndef ELEMENT_H_INCLUDED
#define ELEMENT_H_INCLUDED

#include<string>
#include"electron.h"
#include"proton.h"
#include"neutron.h"

using namespace std;

namespace chemistry
{
    class atom;

class element
{
protected:
    int atomic_no;
    string symbol;
    float atomic_mass;
    electron e;
    int no_of_electron;
    proton p;
    int no_of_proton;
    neutron n;
    int no_of_neutron;

public:

    element();
    element(int _atomic_no,string symbol,int no_of_proton);
    ~element();
    virtual void property();
};

}
#endif // ELEMENT_H_INCLUDED
