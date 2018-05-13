cmake_minimum_required (VERSION 2.8.11)

project(TP2)

set(CMAKE_CXX_FLAGS "-g -Wall -std=c++11")

add_subdirectory(src)
add_subdirectory(doc)
add_subdirectory(test)
enable_testing ()
# Télécharge googletest au moment de la configureation
configure_file(cmake/CMakeLists.txt
               googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )

# Ajout googletest directement au moment de la compilation
add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src)

include_directories(${gtest_SOURCE_DIR}/test)

add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND})

add_test (NAME test_Accesseur COMMAND test_Accesseur )
add_test (NAME test_addition_2Dvector COMMAND test_addition_2Dvector )
add_test (NAME test_soustraction_2Dvector COMMAND test_soustraction_2Dvector )
add_test (NAME test_multiplication_scalaire COMMAND test_multiplication_scalaire)
add_test (NAME test_division_scalaire COMMAND test_division_scalaire)
add_test (NAME test_egalite COMMAND test_egalite)




