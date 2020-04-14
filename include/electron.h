#ifndef ELECTRON_H_INCLUDED
#define ELECTRON_H_INCLUDED

#include"particle.h"

namespace chemistry
{
    class electron : public particle
    {
        private:
        public:
            electron();
            ~electron();
            virtual void property();
    };
}

#endif // ELECTRON_H_INCLUDED
