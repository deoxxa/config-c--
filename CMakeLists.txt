set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)
project (config-cpp)
cmake_minimum_required (VERSION 2.6)

set (sources
    config.cpp
    config/lexer.cpp
    config/node.cpp
    config/parser.cpp
    config/scanner.cpp
)

add_library (config SHARED ${sources})
SET_TARGET_PROPERTIES (config
    PROPERTIES
    VERSION 0.1.0
)
# SET_TARGET_PROPERTIES(config
#     PROPERTIES
#     INSTALL_NAME_DIR "@executable_path/../lib"
# )

add_executable (config-demo-app app.cpp)
target_link_libraries(config-demo-app config) # will link using full path

INSTALL(TARGETS config DESTINATION lib)
INSTALL(TARGETS config-demo-app DESTINATION bin)
