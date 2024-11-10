# f77_fcom/CMakeLists.txt
# Created by Robin Rowe 2024-11-10
# License Open Source BSD

set (MODULE_NAME f77_fcom)
message("Configuring ${MODULE_NAME} 18 source file(s)")
file(STRINGS sources.cmake SOURCES)
add_executable(${MODULE_NAME} ${SOURCES})
