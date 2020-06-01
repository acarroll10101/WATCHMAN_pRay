#ifndef __RAT_VertexGen_PhotonRay__
#define __RAT_VertexGen_PhotonRay__

#include <RAT/GLG4VertexGen.hh>
#include <CLHEP/Random/RandGeneral.h>

namespace RAT {

class VertexGen_PhotonRay : public GLG4VertexGen {
public:
  VertexGen_PhotonRay(const char *arg_dbname="pRay");
  virtual ~VertexGen_PhotonRay();
  virtual void GeneratePrimaryVertex( G4Event *argEvent,
                                      G4ThreeVector &dx,
                                      G4double dt);
  /** State format "num_photons wavelength_nm" */
  virtual void SetState( G4String newValues );
  virtual G4String GetState();

private:
  G4ParticleDefinition *fOpticalPhoton;
  int fNumPhotons;
  double fEnergy;
  CLHEP::RandGeneral* fRndmEnergy;
  double fMinEnergy;
  double fMaxEnergy;
  std::string fMaterial;
  double fExpTime;
};


} // namespace RAT

#endif
