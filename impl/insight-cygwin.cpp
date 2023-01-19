#include "../insight.h"
#include <windows.h>

namespace G::Insight
{
    std::string Insight::getType()
    {
        return "Cygwin";
    }

    uint32_t Insight::getLogicalCpuCores()
    {
        SYSTEM_INFO info;
        GetSystemInfo(&info);
        return info.dwNumberOfProcessors;
    }
}
