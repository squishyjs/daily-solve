#include <iostream>
#define ll long long


int main() {
    
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        int D, d, p, Q;
        std::cin >> D >> d >> p >> Q;

        /*
        Cook your dish here
        D = period of days hijacking
        d = prod increase every d days (interval)
        P = initial currency
        Q = currency increase
        e.g: 2 1 1 1
        */
        /* int period = D;
        int totalPrinted = 0;
        int rateOfProd = P;
        for (int i = 0; i < period; ++i) {
            if (i % d == 0) {
                totalPrinted += P;
                P += Q; // increase production rate
                std::cout << "Total printed thus far: " << totalPrinted << "\n";
                std::cout << "Production rate thus far: " << P << "\n";
                continue;
            }
            std::cout << "Total printed thus far: " << totalPrinted << "\n";
            totalPrinted += P;
        }
        std::cout << totalPrinted << std::endl; */
        long x = D / d;
        long y = D % d;
        
        ll answer = (x * (2 * p + (x - 1) * Q)) / 2;
        answer *= d;

        answer = answer + (p + (x * Q)) * y;
        std::cout << answer << std:: endl;
    }
    return 0;
}
