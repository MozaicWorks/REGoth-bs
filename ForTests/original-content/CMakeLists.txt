cmake_minimum_required(VERSION 3.16)
project(original_content)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(original_content
        OriginalGameFiles.cpp
        OriginalGameFiles.hpp
        OriginalGameResources.cpp
        OriginalGameResources.hpp
        VirtualFileSystem.cpp
        VirtualFileSystem.hpp
        doctest.h
        Tests.cpp
        )

target_link_directories(original_content PUBLIC ../../src/build/bin ../../src/lib/ ../../cmake-build-debug/lib/)
target_include_directories(original_content PUBLIC
        ../../src/
        ../../lib/bsf/Source/Foundation/bsfEngine/
        ../../lib/bsf/Source/Foundation/bsfCore/
        ../../lib/bsf/Source/Foundation/bsfUtility/
        ../../cmake-build-debug/lib/bsf/Generated/bsfUtility
        ../../lib/BsZenLib/include/
        ../../lib/BsZenLib/lib/ZenLib/zenload/
        ../../lib/BsZenLib/lib/ZenLib/
        )
target_link_libraries(original_content PUBLIC bsf BsZenLib REGothEngine vdfs zenload physfs utils squish)
