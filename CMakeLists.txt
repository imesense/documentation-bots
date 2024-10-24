cmake_minimum_required(VERSION 3.15)

project(DocumentationBots CXX)

# Project options
option(DOCBOTS_ENABLE_CPPSTDBOT "Enable CppStandardBot" OFF)
option(DOCBOTS_ENABLE_SERVER "Enable CppStandardBot" OFF)

# Common options
include("cmake/LanguageOptions.cmake")
include("cmake/OutputOptions.cmake")

# Projects
if(DOCBOTS_ENABLE_CPPSTDBOT)
    add_subdirectory("src/CppStandardBot")
endif()
if(DOCBOTS_ENABLE_SERVER)
    add_subdirectory("src/Server")
endif()
