#ifndef PARTICLES_HPP
#define PARTICLES_HPP

// Phase + ct + B data structure from XGC
struct Phase{
    double r;
    double z;
    double phi;
    double rho;
    double w1;
    double w2;
    double mu;
    double w0;
    double f0;
    double B;
};

//particle data strcuture 
struct Particles{
    Phase ph;
    long long int gid;
    long long int flag;
};

//#include "particles.tpp"
#endif