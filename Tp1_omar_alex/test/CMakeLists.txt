
add_executable(test_Constructor test_constructors.cpp)
target_link_libraries(test_Constructor PUBLIC libsrc PUBLIC gtest)

add_executable(test_display test_display.cpp)
target_link_libraries(test_display PUBLIC libsrc PUBLIC gtest)

add_executable(test_fillRandomly test_fill_randomly.cpp)
target_link_libraries(test_fillRandomly PUBLIC libsrc PUBLIC gtest)

add_executable(test_size test_size.cpp)
target_link_libraries(test_size PUBLIC libsrc PUBLIC gtest)