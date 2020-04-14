#ifndef MOLECULE_H_INCLUDED
#define MOLECULE_H_INCLUDED

#include"atom.h"
#include"ion.h"

namespace chemistry
{
    class molecule
    {
    protected:
        atom *a;
        ion *i;
    public:
        molecule();
        ~molecule();
        virtual void property();
    };
}

#endif // MOLECULE_H_INCLUDED
