#ifndef PARTICLE_H_INCLUDED
#define PARTICLE_H_INCLUDED

namespace chemistry
{
class particle
{
protected:
    float mass;
    float charge;
    char  sign;
public:
    particle();
    particle(float _mass,float _charge,char _sign);
    ~particle();
    virtual void property() = 0;
};
}
#endif // PARTICLE_H_INCLUDED
