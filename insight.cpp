#include <iostream>
#include "insight.h"

int main(int argc, char *argv[])
{
    std::cout << G::Insight::Insight::getType() << std::endl;
//    std::cout << G::Insight::Insight::getPhysicalCpuCores() << std::endl;
    std::cout << G::Insight::Insight::getLogicalCpuCores() << std::endl;
    return 0;
}
