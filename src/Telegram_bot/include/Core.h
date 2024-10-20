#ifndef CORE_H
#define CORE_H

#include <tgbot/tgbot.h>

#include "BaseCommand.h"

extern BaseCommand;

class Core {
public:
    Core();

    void Start();

    ~Core();

private:
};

#endif  // CORE_H
