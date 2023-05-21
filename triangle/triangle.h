#if !defined(TRIANGLE_H)
#define TRIANGLE_H



namespace triangle {
    
    enum class flavor {
        equilateral,
        isosceles,
        scalene
    };

    template<typename L1, typename L2, typename L3>

    flavor kind(L1 long1, L2 long2, L3 long3);
}  // namespace triangle

#endif // TRIANGLE_H