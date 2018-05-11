project(libsrc)

set(SOURCES_GENE
    Dvector.cpp
    Distribution.cpp
    DistributionNormale.cpp
    GenerateurNombreAleatoire.cpp
    ParkMiller.cpp
    Xorshift.cpp)

# add_library(${PROJECT_NAME} ${SOURCES})
add_library (libsrc ${SOURCES_GENE})