#ifndef __Kernel_H__
#define __Kernel_H__




extern float KDensityConst;
extern float KPressureConst;
extern float KViscosityConst;
extern float KSurfaceTensionConst;
extern float CSelf;

// kernel functions
float KernelDensity(float distSq);
float KernelPressureGrad(float dist);
float KernelViscosityLaplacian(float dist);
void  KernelSurfaceTension(float distSq, /*out*/ float& grad, /*out*/ float &lap);
  
#endif
