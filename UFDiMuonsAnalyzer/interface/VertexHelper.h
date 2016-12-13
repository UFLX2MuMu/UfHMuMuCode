
#ifndef VERTEX_HELPER
#define VERTEX_HELPER

#include "UfHMuMuCode/UFDiMuonsAnalyzer/interface/CommonIncludes.h"
#include "UfHMuMuCode/UFDiMuonsAnalyzer/interface/VertexInfo.h"

void FillVertexInfos( VertexInfos& _vertexInfos, int& _nVertices,
                      const reco::VertexCollection verticesSelected,
                      const bool _onlyPV );

reco::VertexCollection SelectVertices( const edm::Handle<reco::VertexCollection>& vertices, const double _vertex_ndof_min,
				       const double _vertex_rho_max, const double _vertex_z_max );

#endif  // #ifndef VERTEX_HELPER
