#if defined(__sun)
#include "openindiana.h"

#include <string.h>

char *LOGO[23];
char *LOGO_SMALL[23];
const char *color;
const char *titlecolor;

void getOS() {
  color = BLUE;
  titlecolor = BLUE;

  LOGO[0] = WHITE "                         .sy/              " RESET;
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
  LOGO[17] = WHITE "                                           " RESET;
  LOGO[18] = WHITE "                                           " RESET;
  for (int i = 19; i < 23; i++) {
    LOGO[i]  = WHITE "                                           " RESET;
  }
}
#endif