project(libdvect)

#set(SOURCE_DIR src)
set(SOURCES Dvector.cpp ParkMiller.cpp Xorshift.cpp)

add_library(libdvect ${SOURCES})