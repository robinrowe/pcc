# arch_m68k/CMakeLists.txt
# Created by Robin Rowe 2024-11-10
# License Open Source BSD

set (MODULE_NAME arch_m68k)
message("Configuring ${MODULE_NAME} 6 source file(s)")
file(STRINGS sources.cmake SOURCES)
add_executable(${MODULE_NAME} ${SOURCES})
