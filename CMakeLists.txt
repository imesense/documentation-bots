cmake_minimum_required(VERSION 3.22.1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(draft_bot CXX)

include(cmake/CompilerWarnings.cmake)
myproject_set_project_warnings(bot_options ON "" "" "" "")

include(cmake/StaticAnalyzers.cmake)
myproject_enable_clang_tidy(bot_options ON)

include(cmake/Sanitizers.cmake)
myproject_enable_sanitizers(bot_options ON ON ON OFF OFF)

add_executable()