#include <iostream>
#include "AvgNumbers.h"

int main() {
    AvgNumbers avg;
    std::cout << "Average of 12, 15, 20: " << avg.avgofnumbers(12, 15, 20) << std::endl;
    std::cout << "Average of 9, 12: " << avg.avgofnumbers(9, 12) << std::endl; // Uses default argument for c
    return 0;
}
