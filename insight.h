#include <string>
#include <cstdint>

#ifndef IInsight
#define IInsight

namespace G::Insight
{
    class Insight
    {
    public:
        static std::string getType();
        static uint32_t getPhysicalCpuCores();
        static uint32_t getLogicalCpuCores();
    };
}

#endif // IInsight
