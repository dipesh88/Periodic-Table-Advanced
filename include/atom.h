#ifndef ATOM_H_INCLUDED
#define ATOM_H_INCLUDED

#include"element.h"

namespace chemistry
{
    class atom : public element
    {
    protected:
    public:
        atom();
        ~atom();
    };
}

#endif // ATOM_H_INCLUDED
