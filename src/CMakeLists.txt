# Define the library
add_library(MyLibrary
    MainClass.cpp
    Dependency1.cpp
    Dependency2.cpp
)

# Include headers
target_include_directories(MyLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
