#pragma once

// General
#define MSG_LOADING "Loading file"
#define MSG_SAVE_CONFIG "Saving config file"
#define MSG_CHIP_SETUP "Chip setup"
#define MSG_VGA_INIT "Initalizing VGA"
#define MSG_FREE_HEAP_BEFORE "Free heap before "
#define MSG_FREE_HEAP_AFTER "Free heap after "
#define MSG_Z80_RESET "Reseting Z80 CPU"
#define MSG_EXEC_ON_CORE "Executing on core #"
#define ULA_ON "ULA ON"
#define ULA_OFF "ULA OFF"

// Error
#define ERROR_TITLE "  !!!   ERROR - CLIVE MEDITATION   !!!  "
#define ERROR_BOTTOM "  Sir Clive is smoking in the Rolls...  "
#define ERR_READ_FILE "Cannot read file!"
#define ERR_BANK_FAIL "Failed to allocate RAM bank "
#define ERR_MOUNT_FAIL "Cannot mount internal memory!"
#define ERR_SNA_DIR_FAIL "I can't open /sna dir!"

// OSD
#define OSD_TITLE "* ZX-ESPectrum v1.0|Rampa & Queru 2019 *"
#define OSD_BOTTOM "           LIVE FREE OR DIE!!           "
#define OSD_ON "OSD ON"
#define OSD_OFF "OSD OFF"
#define OSD_DEMO_MODE_ON "Demo Mode ON"
#define OSD_DEMO_MODE_OFF "Demo Mode OFF"
#define MENU_SNA_TITLE "Select Snapshot"
#define MENU_MAIN "Main Menu\nChange ROM\nChange RAM\nReset\nDemo Mode\nHelp\nReturn\n"
#define MENU_RESET "Reset Menu\nSoft reset\nHard reset\nCancel\n"
#define MENU_DEMO "Demo mode\nOFF\n 1 minute\n 3 minutes\n 5 minutes\n15 minutes\n30 minutes\n 1 hour\n"
#define OSD_HELP                                                                                                       \
    " F1 Main menu:\n"                                                                                                 \
    "    Cursor to move.\n"                                                                                            \
    "    Enter to select.\n"                                                                                           \
    "    Esc/F1 to exit.\n"                                                                                            \
    "F12 Cycle to next snapshot.\n\n"                                                                                  \
    "Keyboard cursor is mapped to kempston\n"                                                                          \
    "joystick. AltGr to fire.\n"