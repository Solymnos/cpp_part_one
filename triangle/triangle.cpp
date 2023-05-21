#include "triangle.h"
#include <stdexcept>

namespace triangle {
    template<typename L1, typename L2, typename L3>
    flavor kind(L1 long1, L2 long2, L3 long3)
    {
        if (long1 <= 0 || long2 <= 0 || long3 <=0)
        {
            throw std::domain_error("Longueurs non valides"); 
        }
        if (long1 + long2 < long3 || long2 + long3 < long1 || long1 + long3 < long2)
        {
            throw std::domain_error("Triangle non valide");
        }
        if (long1 == long2 && long2 == long3)
        {
            return flavor::equilateral;
        } else if (long1 == long2 || long2 == long3 || long3 == long1)
        {
            return flavor::isosceles;
        }
        return flavor::scalene;
    }

}  // namespace triangle
