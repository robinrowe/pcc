# cc_cxxcom/CMakeLists.txt
# Created by Robin Rowe 2024-11-10
# License Open Source BSD

set (MODULE_NAME cc_cxxcom)
message("Configuring ${MODULE_NAME} 14 source file(s)")
file(STRINGS sources.cmake SOURCES)
add_executable(${MODULE_NAME} ${SOURCES})
