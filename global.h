

#ifndef Global_h
#define Global_h

// interaction
#define DAM 0
#define FAUCET 1
#define DROP 2


// constant
#define H          0.04f     // grid side length
#define H2         0.0016f   // H^2
#define TIMESTEP   0.006f
#define NPARTICLES 300
#define PM         0.0118f
#define INV_PM     84.57627f
#define PRAD       0.04f
#define PREST_D    1000.f
#define GAS_CONST  20.f
#define PG         10.f      //viscosity
#define GRAVITY    9.81f
#define PT         0.6f      //tension
#define PMIN_SUF_GRAD 2.f

// world BOX size
#define  BOX_X   0.2f
#define  BOX_Y   0.4f
#define  BOX_Z   0.2f

#define NUM_GRID_Z ((int)(BOX_Z/H))
#define NUM_GRID_X ((int)(BOX_X/H))
#define NUM_GRID_Y ((int)(BOX_Y/H))


#endif /* Global_h */


