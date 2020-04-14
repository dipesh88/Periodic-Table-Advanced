#ifndef PROTON_H_INCLUDED
#define PROTON_H_INCLUDED

#include"particle.h"

namespace chemistry
{
    class proton : public particle
    {
    private:
    public:
        proton();
        ~proton();
        virtual void property();
    };
}

#endif // PROTON_H_INCLUDED
