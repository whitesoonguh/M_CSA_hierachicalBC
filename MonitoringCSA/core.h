#ifndef CORE_H
#define CORE_H

#include <mcl/bls12_381.hpp>
#include <cmath>
#include <vector>
#include "polyonfr.hpp"

using namespace mcl;
using namespace mcl::bn;
using namespace std;

// Useful Structs
typedef struct _HACCParams {
    G1 g1; G2 g2; G2 h2; G1 gfrak; G1 hfrak; 
    std::vector<G1> g1base;
    std::vector<G2> g2base;
} HACCParams;

typedef struct _ZKMPProof {
    G1 P1; G1 P2; G1 R1; G1 R2; GT R3;
    Fr s_rI; Fr s_rA; Fr s_t1; Fr s_t2; Fr s_d1; Fr s_d2;
} ZKMPProof;

typedef struct _ZKNMPProof {

} ZKNMPProof;

typedef struct _ZKSProof {

} ZKSProof;

// Functions

#endif