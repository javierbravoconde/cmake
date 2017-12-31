add_library(adder SHARED src/Adder.cpp)

target_include_directories(adder PUBLIC include)
target_include_directories(adder PRIVATE src)