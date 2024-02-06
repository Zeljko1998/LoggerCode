add_executable (bin_main main.cpp)

add_library(lib_base LoggerBaseClass.cpp)
add_library(lib_terminal TerminalLogger.cpp)
add_library(lib_file FileLogger.cpp)

target_link_libraries(lib_terminal lib_base)

target_link_libraries(lib_file lib_base)

target_link_libraries(bin_main		lib_base
									lib_terminal
									lib_file)