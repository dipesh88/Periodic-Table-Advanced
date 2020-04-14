#include"include/particle.h"

using namespace chemistry;

particle::particle()
{
    mass = 0.0;
    charge = 0.0;
    sign = ' ';
}

particle::particle(float mass,float charge,char sign)
{
    particle::mass = mass;
    particle::charge = charge;
    particle::sign = sign;
}
particle::~particle()
{

}

float particle::Mass()
{
  return mass;
}

float particle::Charge()
{
 return charge;
}

char particle::Sign()
{
return sign;
}
