# PortableC/CMakeLists.txt
# Created by Robin Rowe 2024-11-10
# License Open Source BSD

cmake_minimum_required(VERSION 3.8)
set(CMAKE_C_STANDARD 23)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(PortableC)
message("Configuring ${CMAKE_PROJECT_NAME}...")

if(NOT WIN32 AND NOT APPLE)
	link_libraries(rt pthread)
endif(NOT WIN32 AND NOT APPLE)

option(SUPPRESS "Enable suppression of code warnings" false)
if(SUPPRESS)
	if(WIN32)
		add_definitions(-D_CRT_SECURE_NO_WARNINGS /wd4244 /wd4305 /wd4018 /wd26451 /wd6031 /wd4267)
	endif(WIN32)
endif(SUPPRESS)

option(UNISTD "Enable libunistd" false)
if(UNISTD)
	if(WIN32)
#		message("CMAKE_GENERATOR_PLATFORM = ${CMAKE_GENERATOR_PLATFORM}")
		set(LIBUNISTD_PATH /code/github/libunistd)
		include_directories(${LIBUNISTD_PATH}/unistd)
		set (UNISTD_LINK_DIRECTORIES ${LIBUNISTD_PATH}/build/${CMAKE_GENERATOR_PLATFORM}/Release)
		message(libunistd = ${UNISTD_LINK_DIRECTORIES}/libunistd.lib)
		link_directories(${UNISTD_LINK_DIRECTORIES})
		link_libraries(libunistd Ws2_32 Imm32)
	endif(WIN32)
endif(UNISTD)

option(FLTK "Enable FLTK" false)
if(FLTK)
	set(FLTK_PATH /Code/fltk)
	include_directories(${FLTK_PATH} ${FLTK_PATH}/fltk-build ${FLTK_PATH}/fltk-src/)
	link_directories(${FLTK_PATH}/fltk-src/build/lib/Debug)
	set(FLTK_LIBS
		fltk_formsd
		fltk_gld
		fltk_imagesd
		fltk_jpegd
		fltk_pngd
		fltk_zd
		fltkd
	)
	link_libraries(${FLTK_LIBS} comctl32)
endif(FLTK)

option(GTK1 "Enable GTK1" false)
if(GTK1)
	set(GTK_INCLUDE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/gtk1/gtk1win)
	set(GTK_INCLUDE_DIRS 
		${GTK_INCLUDE_PATH}
		${GTK_INCLUDE_PATH}/glib 
		${GTK_INCLUDE_PATH}/gdk)
	include_directories(${GTK_INCLUDE_DIRS})
endif(GTK1)

include_directories(.)
add_subdirectory(./cc/cc)
add_subdirectory(./cc/ccom)
add_subdirectory(./cc/cpp)
add_subdirectory(./cc/cxxcom)
add_subdirectory(./cc/driver)
add_subdirectory(./common)
#add_subdirectory(./os/win32)

option(MORE "Enable more stuff" false)
if(MORE)
add_subdirectory(./arch/amd64)
add_subdirectory(./arch/arm)
add_subdirectory(./arch/hppa)
add_subdirectory(./arch/i386)
add_subdirectory(./arch/i86)
add_subdirectory(./arch/m16c)
add_subdirectory(./arch/m68k)
add_subdirectory(./arch/mips)
add_subdirectory(./arch/mips64)
add_subdirectory(./arch/nova)
add_subdirectory(./arch/pdp10)
add_subdirectory(./arch/pdp11)
add_subdirectory(./arch/pdp7)
add_subdirectory(./arch/powerpc)
add_subdirectory(./arch/sparc64)
add_subdirectory(./arch/vax)
add_subdirectory(./f77/f77)
add_subdirectory(./f77/fcom)
add_subdirectory(./mip)
add_subdirectory(./os/android)
add_subdirectory(./os/bsd)
add_subdirectory(./os/darwin)
add_subdirectory(./os/dragonfly)
add_subdirectory(./os/freebsd)
add_subdirectory(./os/inc)
add_subdirectory(./os/linux)
add_subdirectory(./os/litebsd)
add_subdirectory(./os/midnightbsd)
add_subdirectory(./os/minix)
add_subdirectory(./os/mirbsd)
add_subdirectory(./os/netbsd)
add_subdirectory(./os/nextstep)
add_subdirectory(./os/none)
add_subdirectory(./os/openbsd)
add_subdirectory(./os/sunos)
add_subdirectory(./os/sysv4)
endif(MORE)