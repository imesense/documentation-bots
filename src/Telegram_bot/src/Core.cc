#include "Core.h"

void Core::Start()
{
    try
    {
        TgBot::TgLongPoll longPoll(m_bot);
        while (true)
        {
            std::cout << "Long poll started" << std::endl;
            longPoll.start();
        }
    }
    catch (const TgBot::TgException& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    catch (...)
    {
        std::cout << "error 2" << "\n";
    }
}
