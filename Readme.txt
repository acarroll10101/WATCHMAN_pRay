.cc file path is ratpac/src/gen/src/VertexGen_PhotonRay.cc 
.hh file path is ratpac/src/gen/include/RAT/VertexGen_PhotonRay.hh
.cc file must be added ratpac/src/gen/CMakeLists.txt list
.hh file must be added to the include files at the start of GLG4PrimaryGeneratorAction.cc, via:

#include <RAT/VertexGen_PhotonRay.hh>

