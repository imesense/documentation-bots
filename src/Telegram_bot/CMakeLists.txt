find_package(TgBot REQUIRED)
find_package(Boost COMPONENTS system)
add_executable(telegram_bot_app src/bot.cc)
target_link_libraries(telegram_bot_app TgBot::TgBot)
