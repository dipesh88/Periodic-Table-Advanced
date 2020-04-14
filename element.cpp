#include "include/element.h"

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

element::~element()
{

}

void element::property()
{

}
