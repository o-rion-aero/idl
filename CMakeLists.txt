project("orion.idl")
cmake_minimum_required(VERSION 3.4)

include("cmake/ORION_Framework.cmake")

#ORION_USE_BOOST("1.63.0")

# idl target
file(GLOB idl_SRC "idl/*.h" "idl/*.cpp")
add_library(idl SHARED ${idl_SRC})

ORION_USE_OPENDDS(idl)