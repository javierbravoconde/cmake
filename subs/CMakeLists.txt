add_library(subs SHARED src/Subs.cpp)
target_include_directories(subs PUBLIC include)
target_include_directories(subs PRIVATE src)