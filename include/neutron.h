#ifndef NEUTRON_H_INCLUDED
#define NEUTRON_H_INCLUDED

#include"particle.h"

namespace chemistry
{
    class neutron : public particle
    {
    private:
    public:
        neutron();
        ~neutron();
         virtual void property();
    };
}

#endif // NEUTRON_H_INCLUDED
