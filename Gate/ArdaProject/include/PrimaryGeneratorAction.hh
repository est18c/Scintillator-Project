



#include "G4VUserPrimaryGeneratorAction.hh"
#include "DetectorConstruction.hh"

class G4ParticleGun;
class G4GeneralParticleSource;
class G4Event;

class PrimaryGeneratorAction : public G4VUserPrimaryGeneratorAction
{
	
	public:
		
	PrimaryGeneratorAction(DetectorConstruction* dc);
	~PrimaryGeneratorAction();
	
	public:
		void GeneratePrimaries(G4Event* anEvent);
		
		
	private:
		G4GeneralParticleSource* particleSource;
		G4ParticleGun* particleGun;
};