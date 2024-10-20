#ifndef BASE_COMMAND_BOT_H
#define BASE_COMMAND_BOT_H

#include <tgbot/tgbot.h>

#include <iostream>
#include <string>

class BaseCommand
{
public:
    BaseCommand();

    void base_command();

    ~BaseCommand();

private:
    TgBot::Bot m_bot;
};

#endif  // BASE_COMMAND_BOT_H
