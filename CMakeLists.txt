CMAKE_MINIMUM_REQUIRED(VERSION 3.24)
PROJECT(insight)

SET(CMAKE_CXX_STANDARD 23)

IF(MINGW)
    ADD_LIBRARY(insighting SHARED insight.h impl/insight-mingw.cpp)
ELSEIF(CYGWIN)
    ADD_LIBRARY(insighting SHARED insight.h impl/insight-cygwin.cpp)
ENDIF()

ADD_EXECUTABLE(insight insight.cpp)
TARGET_LINK_LIBRARIES(insight insighting)
