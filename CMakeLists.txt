cmake_minimum_required(VERSION 3.15)

project(DocumentationBots CXX)

# Project options
option(DOCBOTS_ENABLE_CPPSTD_DISCORDBOT "Enable CppStdDiscordBot" OFF)
option(DOCBOTS_ENABLE_CPPSTD_TELEGRAMBOT "Enable CppStdTelegramBot" OFF)
option(DOCBOTS_ENABLE_BOTS_SERVER "Enable BotsServer" OFF)

# Common options
include("cmake/LanguageOptions.cmake")
include("cmake/OutputOptions.cmake")

# Projects
add_subdirectory("src")
