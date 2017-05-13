#ifndef __ParticleSystem_H__
#define __ParticleSystem_H__

#include "kernel.h"
#include "particle.h"
#include "vector3d.h"

#include <vector>
#include <set>


class ParticleSystem
{
public:
	ParticleSystem();
    
public:
    void InitGrid();
    void UpdateGrid();
    
    void GenerateFaucet();
    void GenerateDam();
    
    void UpdateFluidDensity();
    void UpdateFluidAcceleration();
	void UpdateFluidPosition();
    
    
	void Render() const;
    
    std::vector<Particle>& GetParticles() { return particles_; };
 
private:
    void InitParticles();
    
    Vector3Di GetGridIndex(const Particle& p) const;
    
    void CollisionResolve();
    
    int GetNeighborParticles(int particle_index, /*out*/ std::vector<int>& neighbors);
    
private:
    std::vector<Particle> particles_;
    
    // index order: z, x, y
	std::set<int> grid_[ (int)(BOX_Z/H) ][ (int)(BOX_X/H) ][ (int)(BOX_Y/H) ];
    
};










#endif
