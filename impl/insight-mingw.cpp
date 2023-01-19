#include "../insight.h"
#include <windows.h>

std::string G::Insight::Insight::getType()
{
    return "MinGW";
}

uint32_t G::Insight::Insight::getPhysicalCpuCores()
{
    SYSTEM_INFO info;
    GetSystemInfo(&info);
    return info.dwNumberOfProcessors;
}
