# Adding sub directories to be included in the source.
add_subdirectory(blah)
add_subdirectory(hello)

# Add the executbale main.cpp as ouputted as bin_main.
add_executable(
  bin_main 
  main.cpp
)

# Linking (binary, to a library)
target_link_libraries(
    bin_main 
    hello
    blah
)

