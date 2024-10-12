cmake_minimum_required(VERSION 3.22.1)

project(draft_bot CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(cmake/CompilerWarnings.cmake)
myproject_set_project_warnings(bot_options ON "" "" "" "")

include(cmake/StaticAnalyzers.cmake)
myproject_enable_clang_tidy(bot_options ON)

include(cmake/Sanitizers.cmake)
myproject_enable_sanitizers(bot_options ON ON ON OFF OFF)

find_package(userver COMPONENTS core QUIET)
if(NOT userver_FOUND)  
    # Fallback to subdirectory usage
    # Compatibility mode: some systems don't support these features
    set(USERVER_FEATURE_CRYPTOPP_BLAKE2 OFF CACHE BOOL "" FORCE)
    set(USERVER_FEATURE_GRPC_CHANNELZ OFF CACHE BOOL "" FORCE)
    set(USERVER_FEATURE_REDIS_HI_MALLOC ON CACHE BOOL "" FORCE)

    if (EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/third_party/userver)
        message(STATUS "Using userver framework from third_party/userver")
        add_subdirectory(third_party/userver)
    else()
        message(FATAL_ERROR "Either install the userver or provide a path to it")
    endif()
endif()

add_executable(${PROJECT_NAME} "tcp_full_duplex_service.cpp")
target_link_libraries(${PROJECT_NAME} userver::core)

add_executable(${PROJECT_NAME} "bot.cc")
target_link_libraries(${PROJECT_NAME})

userver_setup_environment()