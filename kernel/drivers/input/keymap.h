#include "input.h"
static const unsigned int keymap[2][0x100] = {
    {
        [KEY_RESERVED]  = 0,
        [KEY_ESC]       = '\e',
        [KEY_1]         = '1',
        [KEY_2]         = '2',
        [KEY_3]         = '3',
        [KEY_4]         = '4',
        [KEY_5]         = '5',
        [KEY_6]         = '6',
        [KEY_7]         = '7',
        [KEY_8]         = '8',
        [KEY_9]         = '9',
        [KEY_0]         = '0',
        [KEY_MINUS]     = '-',
        [KEY_EQUAL]     = '=',
        [KEY_BACKSPACE] = '\b',
        [KEY_TAB]       = '\t',
        [KEY_Q]         = 'q',
        [KEY_W]         = 'w',
        [KEY_E]         = 'e',
        [KEY_R]         = 'r',
        [KEY_T]         = 't',
        [KEY_Y]         = 'y',
        [KEY_U]         = 'u',
        [KEY_I]         = 'i',
        [KEY_O]         = 'o',
        [KEY_P]         = 'p',
        [KEY_LEFTBRACE] = '[',
        [KEY_RIGHTBRACE]= ']',
        [KEY_ENTER]     = '\n',
        [KEY_LEFTCTRL]  = KEY_LCTRL,
        [KEY_A]         = 'a',
        [KEY_S]         = 's',
        [KEY_D]         = 'd',
        [KEY_F]         = 'f',
        [KEY_G]         = 'g',
        [KEY_H]         = 'h',
        [KEY_J]         = 'j',
        [KEY_K]         = 'k',
        [KEY_L]         = 'l',
        [KEY_SEMICOLON] = ';',
        [KEY_APOSTROPHE]= '\'',
        [KEY_GRAVE]     = '`',
        [KEY_LEFTSHIFT] = KEY_LSHIFT,
        [KEY_BACKSLASH] = '\\',
        [KEY_Z]         = 'z',
        [KEY_X]         = 'x',
        [KEY_C]         = 'c',
        [KEY_V]         = 'v',
        [KEY_B]         = 'b',
        [KEY_N]         = 'n',
        [KEY_M]         = 'm',
        [KEY_COMMA]     = ',',
        [KEY_DOT]       = '.',
        [KEY_SLASH]     = '/',
        [KEY_RIGHTSHIFT]= KEY_RSHIFT,
        [KEY_KPASTERISK]= KEY_PRTSC,
        [KEY_LEFTALT]   = KEY_LALT,
        [KEY_SPACE]     = ' ',
        [KEY_CAPSLOCK]  = KEY_CPSLOCK,
        [KEY_F1]        = KEY_Fn(1),
        [KEY_F2]        = KEY_Fn(2),
        [KEY_F3]        = KEY_Fn(3),
        [KEY_F4]        = KEY_Fn(4),
        [KEY_F5]        = KEY_Fn(5),
        [KEY_F6]        = KEY_Fn(6),
        [KEY_F7]        = KEY_Fn(7),
        [KEY_F8]        = KEY_Fn(8),
        [KEY_F9]        = KEY_Fn(10),
        [KEY_F10]       = KEY_Fn(11),
        [KEY_NUMLOCK]   = KEY_NMLOCK,
        [KEY_SCROLLLOCK]= KEY_SCRLOCK,
        [KEY_KP7]       = '7',
        [KEY_KP8]       = '8',
        [KEY_KP9]       = '9',
        [KEY_KPMINUS]   = '-',
        [KEY_KP4]       = '4',
        [KEY_KP5]       = '5',
        [KEY_KP6]       = '6',
        [KEY_KPPLUS]    = '+',
        [KEY_KP1]       = '1',
        [KEY_KP2]       = '2',
        [KEY_KP3]       = '3',
        [KEY_KP0]       = '0',
        [KEY_KPDOT]     = '.',
    },
    {
        [KEY_RESERVED]  = 0,
        [KEY_ESC]       = '\e',
        [KEY_1]         = '!',
        [KEY_2]         = '@',
        [KEY_3]         = '#',
        [KEY_4]         = '$',
        [KEY_5]         = '%',
        [KEY_6]         = '^',
        [KEY_7]         = '&',
        [KEY_8]         = '*',
        [KEY_9]         = '(',
        [KEY_0]         = ')',
        [KEY_MINUS]     = '_',
        [KEY_EQUAL]     = '+',
        [KEY_BACKSPACE] = '\b',
        [KEY_TAB]       = '\t',
        [KEY_Q]         = 'Q',
        [KEY_W]         = 'W',
        [KEY_E]         = 'E',
        [KEY_R]         = 'R',
        [KEY_T]         = 'T',
        [KEY_Y]         = 'Y',
        [KEY_U]         = 'U',
        [KEY_I]         = 'I',
        [KEY_O]         = 'O',
        [KEY_P]         = 'P',
        [KEY_LEFTBRACE] = '{',
        [KEY_RIGHTBRACE]= '}',
        [KEY_ENTER]     = '\n',
        [KEY_LEFTCTRL]  = KEY_LCTRL,
        [KEY_A]         = 'A',
        [KEY_S]         = 'S',
        [KEY_D]         = 'D',
        [KEY_F]         = 'F',
        [KEY_G]         = 'G',
        [KEY_H]         = 'H',
        [KEY_J]         = 'J',
        [KEY_K]         = 'K',
        [KEY_L]         = 'L',
        [KEY_SEMICOLON] = ':',
        [KEY_APOSTROPHE]= '"',
        [KEY_GRAVE]     = '~',
        [KEY_LEFTSHIFT] = KEY_LSHIFT,
        [KEY_BACKSLASH] = '|',
        [KEY_Z]         = 'Z',
        [KEY_X]         = 'X',
        [KEY_C]         = 'C',
        [KEY_V]         = 'V',
        [KEY_B]         = 'B',
        [KEY_N]         = 'N',
        [KEY_M]         = 'M',
        [KEY_COMMA]     = '<',
        [KEY_DOT]       = '>',
        [KEY_SLASH]     = '?',
        [KEY_RIGHTSHIFT]= KEY_RSHIFT,
        [KEY_KPASTERISK]= KEY_PRTSC,
        [KEY_LEFTALT]   = KEY_LALT,
        [KEY_SPACE]     = ' ',
        [KEY_CAPSLOCK]  = KEY_CPSLOCK,
        [KEY_F1]        = KEY_Fn(1),
        [KEY_F2]        = KEY_Fn(2),
        [KEY_F3]        = KEY_Fn(3),
        [KEY_F4]        = KEY_Fn(4),
        [KEY_F5]        = KEY_Fn(5),
        [KEY_F6]        = KEY_Fn(6),
        [KEY_F7]        = KEY_Fn(7),
        [KEY_F8]        = KEY_Fn(8),
        [KEY_F9]        = KEY_Fn(10),
        [KEY_F10]       = KEY_Fn(11),
        [KEY_NUMLOCK]   = KEY_NMLOCK,
        [KEY_SCROLLLOCK]= KEY_SCRLOCK,
        [KEY_KP7]       = '7',
        [KEY_KP8]       = '8',
        [KEY_KP9]       = '9',
        [KEY_KPMINUS]   = '-',
        [KEY_KP4]       = '4',
        [KEY_KP5]       = '5',
        [KEY_KP6]       = '6',
        [KEY_KPPLUS]    = '+',
        [KEY_KP1]       = '1',
        [KEY_KP2]       = '2',
        [KEY_KP3]       = '3',
        [KEY_KP0]       = '0',
        [KEY_KPDOT]     = '.',
    },
};
