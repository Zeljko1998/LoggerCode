add_executable (bin_main main.cpp)

add_library(lib_base SinkClass.cpp)
add_library(lib_terminal TerminalSink.cpp)
add_library(lib_file FileSink.cpp)
add_library(lib_log LoggerClass.cpp)

target_link_libraries(lib_terminal lib_base)

target_link_libraries(lib_file lib_base)

target_link_libraries(lib_log 	lib_base
								lib_terminal
								lib_file)

target_link_libraries(bin_main		lib_base
									lib_terminal
									lib_file
									lib_log)
