#include"include/particle.h"

using namespace chemistry;

particle::particle()
{
    mass = 0.0;
    charge = 0.0;
    sign = ' ';
}

particle::particle(float _mass,float _charge,char _sign)
{
    mass = _mass;
    charge = _charge;
    sign = _sign;
}
particle::~particle()
{

}
