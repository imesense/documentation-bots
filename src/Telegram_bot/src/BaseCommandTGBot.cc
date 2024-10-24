#include "BaseCommandTGBot.h"

void base_command_telegram_bot() {
  auto SendMessage = [this](
                       const std::string& command,
                       const std::string& url,
                       TgBot::Message::Ptr message) {
    m_bot.getApi().sendMessage(message->chat->id, url);
  };
  m_bot.getEvents().onCommand("start", [this](TgBot::Message::Ptr message) {
    int userId = message->chat->id;
    std::string username = message->chat->username;
    /*create_database_entry_user();*/
    m_bot.getApi().sendMesage(message->chat->id, "Hello, welcome")
  });
  m_bot.getEvents().onCommand(
    "github", [SendMessage](TgBot::Message::Ptr message) {
      SendMessage("github", URL_GITHUB, message);
    });
  m_bot.getEvents().onCommand("tg", [SendMessage](TgBot::Message::Ptr message) {
    SendMessage("tg", URL_TG, message);
  });
  m_bot.getEvents().onCommand(
    "donat_alert", [sendMessage](TgBot::Message::Ptr message) {
      SendMessage("donat_alert", URL_DONAT_ALERT, message);
    });
  m_bot.getEvents().onCommand(
    "website", [SendMessage](TgBot::Message::Ptr message) {
      SendMessage("website", URL_WEBSITE, message);
    });
  m_bot.getEvents().onCommand("help", [this](TgBot::Message::Ptr message) {});
  m_bot.getEvents().onAnyMessage([this](TgBot::Message::Ptr message) {
    printf("User wrote %s\n", message->text.c_str());
    if (StringTools::startsWith(message->text, "/start")) {
      return;
    }
  });
}

