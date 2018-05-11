project(libsrc)

set(SOURCES_GENE
    Dvector.cpp
    Distribution.cpp
    DistributionNormale.cpp
    GenerateurNombreAleatoire.cpp
    ParkMiller.cpp
    XorShift.cpp
    GenerateurParkMiller.cpp
    GenerateurXorShift.cpp)

# add_library(${PROJECT_NAME} ${SOURCES})
add_library (libsrc ${SOURCES_GENE})