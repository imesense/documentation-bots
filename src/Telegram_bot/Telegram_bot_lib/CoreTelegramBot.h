#ifndef CORE_TELEGRAM_BOT_H
#define CORE_TELEGRAM_BOT_H

#include <tgbot/tgbot.h>

#include "BaseCommandTGBot.h"

extern BaseCommandTGBot baseCommandTGBot;

class CoreTelegramBot
{
public:
    Core();

    void start();

    ~Core();

private:
};

#endif  // CORE_TELEGRAM_BOT_H
