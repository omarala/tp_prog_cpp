
add_executable(ParkMillerConstructor test_pm_parametre.cpp)
target_link_libraries(ParkMillerConstructor PUBLIC libsrc PUBLIC gtest)

add_executable(ParkMillerSetSeed test_pm_et_seed.cpp)
target_link_libraries(ParkMillerSetSeed PUBLIC libsrc PUBLIC gtest)

add_executable(ParkMillerNoParam test_pm_constr.cpp)
target_link_libraries(ParkMillerNoParam PUBLIC libsrc PUBLIC gtest)

add_executable(ParkMillerReset test_pm_reset.cpp)
target_link_libraries(ParkMillerReset PUBLIC libsrc PUBLIC gtest)

add_executable(ParkMillerGene test_pm_gene.cpp)
target_link_libraries(ParkMillerGene PUBLIC libsrc PUBLIC gtest)

add_executable(ParkMillerCopy test_pm_copy.cpp)
target_link_libraries(ParkMillerCopy PUBLIC libsrc PUBLIC gtest)


add_executable(XorshiftConstructor test_pm_parametre.cpp)
target_link_libraries(XorshiftConstructor PUBLIC libsrc PUBLIC gtest)

add_executable(XorshiftSetSeed test_xors_et_seed.cpp)
target_link_libraries(XorshiftSetSeed PUBLIC libsrc PUBLIC gtest)

add_executable(XorshiftNoParam test_xors_constr.cpp)
target_link_libraries(XorshiftNoParam PUBLIC libsrc PUBLIC gtest)

add_executable(XorshiftReset test_xors_reset.cpp)
target_link_libraries(XorshiftReset PUBLIC libsrc PUBLIC gtest)

add_executable(XorshiftGene test_xors_gene.cpp)
target_link_libraries(XorshiftGene PUBLIC libsrc PUBLIC gtest)

add_executable(XorshiftCopy test_xors_copy.cpp)
target_link_libraries(XorshiftCopy PUBLIC libsrc PUBLIC gtest)

add_executable(DistributionNormaleParkMiller test_dn.cpp)
target_link_libraries(DistributionNormaleParkMiller PUBLIC libsrc PUBLIC gtest)

add_executable(GenerateurParkMiller test_gen_pm.cpp)
target_link_libraries(GenerateurParkMiller PUBLIC libsrc PUBLIC gtest)

add_executable(GenerateurXorShift test_gen_xs.cpp)
target_link_libraries(GenerateurXorShift PUBLIC libsrc PUBLIC gtest)


add_executable(DistributionNormaleXorShift test_dn_xors.cpp)
target_link_libraries(DistributionNormaleXorShift PUBLIC libsrc PUBLIC gtest)
