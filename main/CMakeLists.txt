add_executable (Hello src/main.cpp)

target_include_directories(Hello PUBLIC include)
target_include_directories(Hello PRIVATE src)

target_link_libraries(Hello PRIVATE adder)
target_link_libraries(Hello PRIVATE subs)