#include "grains.h"

namespace grains {

long long unsigned square(int pos)
{
    return 1ULL << (pos - 1);
}

long long unsigned total()
{
    long long unsigned int place = 1;
    long long unsigned int nbGrains = 1;
    for (int i = 0; i < 64; i++)
    {
        place *= 2;
        nbGrains += place;
    }
    return nbGrains;
}
}  // namespace grains
