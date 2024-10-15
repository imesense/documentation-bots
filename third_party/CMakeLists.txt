include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        b514bdc898e2951020cbdca1304b75f5950d1f59 # release-1.15.2
)

FetchContent_Declare(
  userver
  GIT_REPOSITORY https://github.com/userver-framework/userver.git
  GIT_TAG        a23d316f9793be631eccec22752eb4ce7a9c90bf # release-2.4
)

FetchContent_Declare(
  discord_api
  GIT_REPOSITORY https://github.com/brainboxdotcc/DPP.git
  GIT_TAG        a1a32d227a49d92e637d3311468cc53508e6e446 # release-10.0.32
)

FetchContent_Declare(
  tgbot-cpp
  GIT_REPOSITORY https://github.com/reo7sp/tgbot-cpp.git
  GIT_TAG        a38e1b2752030254f400c0fb1e95f7340f2060c4 # release-1.8
)

FetchContent_Declare(
  libre_translate
  GIT_REPOSITORY https://github.com/LibreTranslate/LibreTranslate.git
  GIT_TAG        71d7e4aca51a337a536141fbe32d2a0497a4c4df # release-1.6.1
)
FetchContent_MakeAvailable(googletest userver tgbot-cpp discord_api libre_translate)
