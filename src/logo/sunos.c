#if defined(__sun)
#include "sunos.h"
#include "../resolution.h"

#include <string.h>
#include <string.h>
#include <stdlib.h>

char *LOGO[23];
char *LOGO_SMALL[23];
const char *color;
const char *titlecolor;
size_t logosize;
int minsize = MIN_SIZE;

void getDistro(const char *distroname) {
  const char *res = display_resolution();
  if (!res) minsize--;
  else free((void *)res);

  if (strncmp((char *)distroname, "omnios", strlen("omnios")) == 0) {
    color = YELLOW;
    titlecolor = YELLOW;
    logosize = 12;

    LOGO[0]  = GREY   "      ######             " RESET;
    LOGO[1]  = GREY   "   ###      ###          " RESET;
    LOGO[2]  = GREY   "  ##          ##         " RESET;
    LOGO[3]  = GREY   "##              ##       " RESET;
    LOGO[4]  = GREY   "##          " YELLOW "######       " RESET;
    LOGO[5]  = GREY   "  ##     " YELLOW "###  " GREY "##  " YELLOW "###    " RESET;
    LOGO[6]  = GREY   "   ###  " YELLOW "##  " GREY "###     " YELLOW "##   " RESET;
    LOGO[7]  = GREY   "      " YELLOW "##" GREY "####          " YELLOW "## " RESET;
    LOGO[8]  = YELLOW "      ##              ## " RESET;
    LOGO[9]  = YELLOW "        ##          ##   " RESET;
    LOGO[10] = YELLOW "         ###      ###    " RESET;
    LOGO[11] = YELLOW "            ######       " RESET;

    LOGO_SMALL[0] = GREY   "  __      " RESET;
    LOGO_SMALL[1] = GREY   " /  \\     " RESET;
    LOGO_SMALL[2] = GREY   "|    " YELLOW "__   " RESET;
    LOGO_SMALL[3] = GREY   " \\_" YELLOW "/" GREY "/  " YELLOW "\\  " RESET;
    LOGO_SMALL[4] = YELLOW "   |    | " RESET;
    LOGO_SMALL[5] = YELLOW "    \\__/  " RESET;
    for (int i = 6; i < minsize; i++) {
      LOGO_SMALL[i] = YELLOW "          " RESET;
    }
  } else {
    color = BLUE;
    titlecolor = BLUE;

    LOGO[0]  = WHITE "                         .sy/              " RESET;
    LOGO[1]  = WHITE "                         .yh+              " RESET;
    LOGO[2]  = WHITE "                                           " RESET;
    LOGO[3]  = BLUE  "           " BLUE "-+syyyo+-" WHITE "      /+.              " RESET;
    LOGO[4]  = BLUE  "         " BLUE "+ddo/---/sdh/" WHITE "    ym-              " RESET;
    LOGO[5]  = BLUE  "       " BLUE "`hm+        `sms" WHITE "   ym-```````.-.    " RESET;
    LOGO[6]  = BLUE  "       " BLUE "sm+           sm/" WHITE "  ym-         +s   " RESET;
    LOGO[7]  = BLUE  "       " BLUE "hm.           /mo" WHITE "  ym-         /h   " RESET;
    LOGO[8]  = BLUE  "       " BLUE "omo           ym:" WHITE "  ym-       `os`   " RESET;
    LOGO[9]  = BLUE  "        " BLUE "smo`       .ym+" WHITE "   ym-     .os-     " RESET;
    LOGO[10] = WHITE "     ``  " BLUE ":ymy+///oyms-" WHITE "    ym-  .+s+.       " RESET;
    LOGO[11] = WHITE "   ..`    " BLUE "`:+oo+/-`" WHITE "      -//oyo-           " RESET;
    LOGO[12] = WHITE " -:`                   .:oys/.             " RESET;
    LOGO[13] = WHITE "+-               `./oyys/.                 " RESET;
    LOGO[14] = WHITE "h+`      `.-:+oyyyo/-`                     " RESET;
    LOGO[15] = WHITE "`/ossssysso+/-.`                           " RESET;
    LOGO[16] = WHITE "                                           " RESET;
  }
}
#endif
