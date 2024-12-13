#include QMK_KEYBOARD_H
#include "keymap.h"

#ifdef POINTING_DEVICE_ENABLE
    #include <math.h> // Needed for the floor, fmin, and fmax functions in process_record_user
#endif

//#ifdef UNICODEMAP_ENABLE
#include "unicode_map_khmer.h"
const uint32_t PROGMEM unicode_map[] = {
    // U+1780–U+17FF: Khmer block
    // Consonants
    [KA]                   = 0x1780,  // 0 ក
    [KHA]                  = 0x1781,  // 1 ខ
    [KO]                   = 0x1782,  // 2 គ
    [KHO]                  = 0x1783,  // 3 ឃ
    [NGO]                  = 0x1784,  // 4 ង
    [CA]                   = 0x1785,  // 5 ច
    [CHA]                  = 0x1786,  // 6 ឆ
    [CO]                   = 0x1787,  // 7 ជ
    [CHO]                  = 0x1788,  // 8 ឈ
    [NYO]                  = 0x1789,  // 9 ញ
    [DA]                   = 0x178A,  // 10 ដ
    [TTHA]                 = 0x178B,  // 11 ឋ
    [DO]                   = 0x178C,  // 12 ឌ
    [TTHO]                 = 0x178D,  // 13 ឍ
    [NNA]                  = 0x178E,  // 14 ណ
    [TA]                   = 0x178F,  // 15 ត
    [THA]                  = 0x1790,  // 16 ថ
    [TO]                   = 0x1791,  // 17 ទ
    [THO]                  = 0x1792,  // 18 ធ
    [NO]                   = 0x1793,  // 19 ន
    [BA]                   = 0x1794,  // 20 ប
    [PHA]                  = 0x1795,  // 21 ផ
    [PO]                   = 0x1796,  // 22 ព
    [PHO]                  = 0x1797,  // 23 ភ
    [MO]                   = 0x1798,  // 24 ម
    [YO]                   = 0x1799,  // 25 យ
    [RO]                   = 0x179A,  // 26 រ
    [LO]                   = 0x179B,  // 27 ល
    [VO]                   = 0x179C,  // 28 វ
    [SHA]                  = 0x179D,  // 29 ឝ
    [SSO]                  = 0x179E,  // 30 ឞ
    [SA]                   = 0x179F,  // 31 ស
    [HA]                   = 0x17A0,  // 32 ហ
    [LA]                   = 0x17A1,  // 33 ល
    [QA]                   = 0x17A2,  // 34 អ

    // Independent Vowels
    [QAQ]                  = 0x17A3,  // 35 ឣ - use of this character is strongly discouraged. 17A2 should be used instead
    [QAA]                  = 0x17A4,  // 36 ឤ - use of this character is strongly discouraged. 17A2 then 17B6 should be used instead
    [QI]                   = 0x17A5,  // 37 ឥ
    [QII]                  = 0x17A6,  // 38 ឦ
    [QU]                   = 0x17A7,  // 39 ឧ
    [QUK]                  = 0x17A8,  // 40 ឨ
    [QUU]                  = 0x17A9,  // 41 ឩ
    [QUUV]                 = 0x17AA,  // 42 ឪ
    [RY]                   = 0x17AB,  // 43 ឫ
    [RYY]                  = 0x17AC,  // 44 ឬ
    [LY]                   = 0x17AD,  // 45 ឭ
    [LYY]                  = 0x17AE,  // 46 ឮ
    [QE]                   = 0x17AF,  // 47 ឯ
    [QAI]                  = 0x17B0,  // 48 ឰ
    [QOO_TYPE_ONE]         = 0x17B1,  // 49 ឱ
    [QOO_TYPE_TWO]         = 0x17B2,  // 50 ឲ - invisible combining marks for phonetic transcription - solely for compatibility - usage discouraged
    [QAU]                  = 0x17B3,  // 51 ឳ - invisible combining marks for phonetic transcription - solely for compatibility - usage discouraged

    // Dependent vowel signs
    [AA]                   = 0x17B6,  // 52 ា
    [I]                    = 0x17B7,  // 53 ិ
    [II]                   = 0x17B8,  // 54 ី
    [Y]                    = 0x17B9,  // 55 ឹ
    [YY]                   = 0x17BA,  // 56 ឺ
    [U]                    = 0x17BB,  // 57 ុ
    [UU]                   = 0x17BC,  // 58 ូ
    [UA]                   = 0x17BD,  // 59 ួ
    [OE]                   = 0x17BE,  // 60 ើ
    [YA]                   = 0x17BF,  // 61 ឿ
    [IE]                   = 0x17C0,  // 62 ុា
    [E]                    = 0x17C1,  // 63 ូា
    [AE]                   = 0x17C2,  // 64 ៲
    [AI]                   = 0x17C3,  // 65 ៳
    [OO]                   = 0x17C4,  // 66 ៴
    [AU]                   = 0x17C5,  // 67 ៵

    // Various signs
    [NIKAHIT]              = 0x17C6,  // 68 ៶
    [REAHMUK]              = 0x17C7,  // 69 ៷
    [YUUKALEAPINTU]        = 0x17C8,  // 70 ៸
    [MUUSIKATOAN]          = 0x17C9,  // 71 ៹
    [TRIISAP]              = 0x17CA,  // 72 ៺
    [BANTOC]               = 0x17CB,  // 73 ៻
    [ROBAT]                = 0x17CC,  // 74 ៼
    [TOANDAKHIAT]          = 0x17CD,  // 75 ៽
    [KAKABAT]              = 0x17CE,  // 76 ៾
    [AHSDA]                = 0x17CF,  // 77 ៿
    [SAMYOK_SANNYA]        = 0x17D0,  // 78 ᄀ
    [VIRIAM]               = 0x17D1,  // 79 ᄁ
    [COENG]                = 0x17D2,  // 80 ᄂ
    [BATHAMASAT]           = 0x17D3,  // 81 ᄃ
    [KHAN]                 = 0x17D4,  // 82 ᄄ
    [BARIYOOSAN]           = 0x17D5,  // 83 ᄅ
    [CAMNUC_PII_KUUH]      = 0x17D6,  // 84 ᄆ
    [LEK_TOO]              = 0x17D7,  // 85 ᄇ
    [BEYYAL]               = 0x17D8,  // 86 ᄈ
    [PHNAEK_MUAN]          = 0x17D9,  // 87 ᄉ
    [KOOMUUT]              = 0x17DA,  // 88 ᄊ
    [RIEL]                 = 0x17DB,  // 89 ᄋ
    [AVAKRAHASANYA]        = 0x17DC,  // 90 ᄌ
    [ATTHACAN]             = 0x17DD,  // 91 ᄍ

    // Digits
    [ZERO]                 = 0x17E0,  // 92 ០
    [ONE]                  = 0x17E1,  // 93 ១
    [TWO]                  = 0x17E2,  // 94 ២
    [THREE]                = 0x17E3,  // 95 ៣
    [FOUR]                 = 0x17E4,  // 96 ៤
    [FIVE]                 = 0x17E5,  // 97 ៥
    [SIX]                  = 0x17E6,  // 98 ៦
    [SEVEN]                = 0x17E7,  // 99 ៧
    [EIGHT]                = 0x17E8,  // 100 ៨
    [NINE]                 = 0x17E9,  // 101 ៩
    [LEK_ATTAK_SON]        = 0x17F0,  // 102 ៰
    [LEK_ATTAK_MUOY]       = 0x17F1,  // 103 ៱
    [LEK_ATTAK_PII]        = 0x17F2,  // 104 ៲
    [LEK_ATTAK_BEI]        = 0x17F3,  // 105 ៳
    [LEK_ATTAK_BUON]       = 0x17F4,  // 106 ៴
    [LEK_ATTAK_PRAM]       = 0x17F5,  // 107 ៵
    [LEK_ATTAK_PRAM_MUOY]  = 0x17F6,  // 108 ៶
    [LEK_ATTAK_PRAM_PII]   = 0x17F7,  // 109 ៷
    [LEK_ATTAK_PRAM_BEI]   = 0x17F8,  // 110 ៸
    [LEK_ATTAK_PRAM_BUON]  = 0x17F9,  // 111 ៹

    // U+19E0–U+19FF: Khmer Symbols block
    [PATHAMASAT]           = 0x19E0,  // 112 ᧿ (Fifteenth waning day)
    [MUOY_KOET]            = 0x19E1,  // 113 ᧾ (Fourteenth waning day)
    [PII_KOET]             = 0x19E2,  // 114 ᧽ (Thirteenth waning day)
    [BEI_KOET]             = 0x19E3,  // 115 ᧼ (Twelfth waning day)
    [BUON_KOET]            = 0x19E4,  // 116 ᧻ (Eleventh waning day)
    [PRAM_KOET]            = 0x19E5,  // 117 ᧺ (Tenth waning day)
    [PRAM_MUOY_KOET]       = 0x19E6,  // 118 ᧹ (Ninth waning day)
    [PRAM_PII_KOET]        = 0x19E7,  // 119 ᧸ (Eighth waning day)
    [PRAM_BEI_KOET]        = 0x19E8,  // 120 ᧷ (Seventh waning day)
    [PRAM_BUON_KOET]       = 0x19E9,  // 121 ᧶ (Sixth waning day)
    [DAP_KOET]             = 0x19EA,  // 122 ᧵ (Fifth waning day)
    [DAP_MUOY_KOET]        = 0x19EB,  // 123 ᧴ (Fourth waning day)
    [DAP_PII_KOET]         = 0x19EC,  // 124 ᧳ (Third waning day)
    [DAP_BEI_KOET]         = 0x19ED,  // 125 ᧲ (Second waning day)
    [DAP_BUON_KOET]        = 0x19EE,  // 126 ᧱ (First waning day)
    [DAP_PRAM_KOET]        = 0x19EF,  // 127 ᧰ (Second Ashadha in leap year)
    [TUTEYASAT]            = 0x19F0,  // 128 ᧯ (Fifteenth waxing day)
    [MUOY_ROC]             = 0x19F1,  // 129 ᧮ (Fourteenth waxing day)
    [PII_ROC]              = 0x19F2,  // 130 ᧭ (Thirteenth waxing day)
    [BEI_ROC]              = 0x19F3,  // 131 ᧬ (Twelfth waxing day)
    [BUON_ROC]             = 0x19F4,  // 132 ᧫ (Eleventh waxing day)
    [PRAM_ROC]             = 0x19F5,  // 133 ᧪ (Tenth waxing day)
    [PRAM_MUOY_ROC]        = 0x19F6,  // 134 ᧩ (Ninth waxing day)
    [PRAM_PII_ROC]         = 0x19F7,  // 135 ᧨ (Eighth waxing day)
    [PRAM_BEI_ROC]         = 0x19F8,  // 136 ᧧ (Seventh waxing day)
    [PRAM_BUON_ROC]        = 0x19F9,  // 137 ᧦ (Sixth waxing day)
    [DAP_ROC]              = 0x19FA,  // 138 ᧥ (Fifth waxing day)
    [DAP_MUOY_ROC]         = 0x19FB,  // 139 ᧤ (Fourth waxing day)
    [DAP_PII_ROC]          = 0x19FC,  // 140 ᧣ (Third waxing day)
    [DAP_BEI_ROC]          = 0x19FD,  // 141 ᧢ (Second waxing day)
    [DAP_BUON_ROC]         = 0x19FE,  // 142 ᧡ (First waxing day)
    [DAP_PRAM_ROC]         = 0x19FF,  // 143 ᧠ (Represents the first Ashadha)

    // Not necessarily Khmer, but widely used
    [ZWS]                  = 0x200B   // 144  (Zero Width Space)
};
//#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_5x7(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_LBRC, CW_TOGG, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LPRN, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LCTL, KC_LGUI, KC_LEFT, KC_RGHT, KC_LSFT, LT(3,KC_DEL), KC_LCTL, KC_LALT, KC_ENT, DM_PLY1, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_GRV, KC_RBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_RPRN, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_BTN1, KC_BTN2, KC_PSCR, LGUI(KC_L), LT(2,KC_ENT), KC_SPC, KC_INS, MO(2), DM_PLY2, KC_WREF),
    [1] = LAYOUT_5x7(KC_ESC, UP(TWO, LEK_ATTAK_PII), UP(TWO, LEK_ATTAK_PII), UP(THREE, LEK_ATTAK_BEI), UP(FOUR, LEK_ATTAK_BUON), UP(FIVE, LEK_ATTAK_PRAM), KC_NO, KC_TAB, UP(KO, KHO), UP(CA, CHA), UP(CO, CHO), UP(NGO, NYO), UP(DA, TTHA), KC_NO, CW_TOGG, UP(SA, HA), UP(KA, KHA), UP(NO, NNA), UP(RO, VO), UP(BA, PHA), KC_LPRN, KC_LSFT, UP(DO, TTHO), UP(TA, THA), UP(TO, THO), UP(PO, PHO), UP(YO, QA), KC_LCTL, KC_LGUI, KC_LEFT, KC_RGHT, KC_LSFT, LT(3,KC_DEL), KC_LCTL, KC_LALT, KC_ENT, DM_PLY1, KC_NO, UP(SIX, LEK_ATTAK_PRAM_MUOY), UP(SEVEN, LEK_ATTAK_PRAM_PII), UP(EIGHT, LEK_ATTAK_PRAM_BEI), UP(NINE, LEK_ATTAK_PRAM_BUON), UP(ZERO, LEK_ATTAK_SON), UP(KOOMUUT, PHNAEK_MUAN), KC_NO, UP(OE, YA), UP(I, IE), UM(II), UP(Y, LY), UP(YY, LYY), UP(NIKAHIT, KHAN), KC_TRNS, UP(E, OO), UP(AA, AU), UM(COENG), UM(MO), UP(LO, LA), UP(BANTOC, MUUSIKATOAN), UP(AE, AI), UM(U), UM(UU), UM(UA), UP(REAHMUK, YUUKALEAPINTU), KC_RSFT, KC_BTN1, KC_BTN2, KC_PSCR, LGUI(KC_L), LT(2,KC_ENT), KC_SPC, MO(5), MO(2), DM_PLY2, KC_WREF),
    [2] = LAYOUT_5x7(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, QK_UNICODE_MODE_NEXT, DW_INC, DECEL_INC, DPI_INC, SEN_INC, KC_BRIU, TO(4), QK_UNICODE_MODE_PREVIOUS, DW_DEC, DECEL_DEC, DPI_DEC, SEN_DEC, KC_BRID, TO(0), EE_SAVE, EE_LOAD, EE_INIT, EE_CLR, KC_NO, DB_TOGG, KC_MSTP, KC_MPLY, KC_MPRV, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DM_REC1, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, TO(3), LCTL(KC_BSPC), KC_BSPC, KC_UP, KC_DEL, LCTL(KC_DEL), KC_NO, TO(1), LCTL(KC_LEFT), KC_LEFT, KC_DOWN, KC_RGHT, LCTL(KC_RGHT), KC_NO, KC_PGUP, KC_HOME, KC_DOWN, KC_END, KC_PGDN, KC_TRNS, KC_BTN1, KC_BTN2, KC_MUTE, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DM_REC2, KC_TRNS),
    [3] = LAYOUT_5x7(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NUM, KC_CALC, LSFT(KC_5), KC_PSLS, KC_PMNS, KC_EQL, KC_TRNS, KC_TRNS, KC_LPRN, KC_7, KC_8, KC_9, KC_PAST, KC_TRNS, KC_TRNS, KC_RPRN, KC_4, KC_5, KC_6, KC_PPLS, KC_TRNS, KC_COLN, KC_1, KC_2, KC_3, KC_ENT, KC_TRNS, KC_BTN1, KC_PDOT, KC_COMM, TO(0), KC_TRNS, KC_0, LSFT(KC_4), LSFT(KC_5), KC_TRNS, KC_TRNS),
    [4] = LAYOUT_5x7(KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_TRNS, KC_CAPS, KC_Q, KC_NO, KC_E, KC_R, KC_T, KC_TRNS, KC_LSFT, KC_A, KC_W, KC_D, KC_F, KC_G, KC_TRNS, KC_LCTL, KC_Z, KC_S, KC_C, KC_V, KC_LCTL, KC_M, KC_I, KC_X, KC_SPC, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
    [5] = LAYOUT_5x7(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, UM(TRIISAP), UM(BANTOC), UM(ROBAT), UM(TOANDAKHIAT), KC_NO, KC_NO, KC_NO, UM(KAKABAT), UM(AHSDA), UM(SAMYOK_SANNYA), UM(VIRIAM), UM(ATTHACAN), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, UM(LEK_TOO), KC_NO, KC_NO, UM(QI), UM(QII), UM(RY), UM(RYY), UM(BARIYOOSAN), KC_NO, UM(QOO_TYPE_ONE), UM(QAU), UM(QE), KC_NO, KC_NO, UM(RIEL), UM(QAI), UM(QU), UM(QUU), UM(QUUV), UM(CAMNUC_PII_KUUH), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO)
};

// Layer names for each layer
enum layer_names {
	_QWERTY,
	_KHMER,
	_FN,
	_NUM,
	_GAME,
    _ALTGR
};

user_config_t user_config = {0}; // Init user config just for linker purposes. True initialization occurs in eeconfig_init_user_datablock much lower below.

// Custom Keycodes
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (record->event.pressed) {
        char message[22];
        switch (keycode) {

            // Trackball specific codes
            #ifdef POINTING_DEVICE_ENABLE
            // DPI / CPI - affects how the trackball sensor tracks/reports motion
            case DPI_INC:
                if (!reported) {
                    dprintf("First DPI: %u. After Initialization: %u\n", first_dpi, init_dpi);
                    reported = true;
                }
                detected_dpi = pointing_device_get_cpi();
                wait_ms(50);
                dprintf("DPI_INC was pressed. Original DPI configured: %u. Original DPI detected: %u\n", user_config.dpi, detected_dpi);
                user_config.dpi = fmin(PMW33XX_CPI_MAX, floor(((user_config.dpi * DPI_INCREMENT / 100) / PMW33XX_CPI_STEP) + 0.5) * PMW33XX_CPI_STEP);
                pointing_device_set_cpi(user_config.dpi);
                wait_ms(50);
                detected_dpi = pointing_device_get_cpi();
                wait_ms(50);
                dprintf("New DPI configured: %u. New DPI detected: %u\n", user_config.dpi, detected_dpi);
                snprintf(message, sizeof(message), "DPI_INC: %u", user_config.dpi);
                set_display_message(message);
                break;
            case DPI_DEC:
                dprintf("DPI_DEC was pressed. Original DPI: %u.\n", user_config.dpi);
                user_config.dpi = fmax(PMW33XX_CPI_MIN, floor(((user_config.dpi * DPI_DECREMENT / 100) / PMW33XX_CPI_STEP) + 0.5) * PMW33XX_CPI_STEP);
                dprintf("New DPI: %u.\n", user_config.dpi);
                pointing_device_set_cpi(user_config.dpi);
                snprintf(message, sizeof(message), "DPI_DEC: %u", user_config.dpi);
                set_display_message(message);
                break;

            // Sensitivity - mathematically adjust how sensitive we are to what the sensor reports
            case SEN_INC:
                dprintf("SEN_INC was pressed. Original SEN: %u.\n", user_config.sen);
                user_config.sen = fmin(65535, (uint16_t)user_config.sen * SEN_INCREMENT / 100);
                dprintf("New SEN: %u.\n", user_config.sen);
                snprintf(message, sizeof(message), "SEN_INC: %u", user_config.sen / 10);
                set_display_message(message);
                break;
            case SEN_DEC:
                dprintf("SEN_DEC was pressed. Original SEN: %u.\n", user_config.sen);
                user_config.sen = fmax(2, (uint16_t)user_config.sen * SEN_DECREMENT / 100);
                dprintf("New SEN: %u.\n", user_config.sen);
                snprintf(message, sizeof(message), "SEN_DEC: %u", user_config.sen / 10);
                set_display_message(message);
                break;

            // Width of the decel curve
            case DW_DEC:
                dprintf("DW_DEC was pressed. Original Decel Width: %u.\n", user_config.decel_width);
                user_config.decel_width -= 1;
                dprintf("New Decel Width: %u.\n", user_config.decel_width);
                snprintf(message, sizeof(message), "DW_DEC: %u", user_config.decel_width);
                set_display_message(message);
                break;
            case DW_INC:
                dprintf("DW_INC was pressed. Original Decel Width: %u.\n", user_config.decel_width);
                user_config.decel_width += 1;
                dprintf("New Decel Width: %u.\n", user_config.decel_width);
                snprintf(message, sizeof(message), "DW_INC: %u", user_config.decel_width);
                set_display_message(message);
                break;

            // Cursor movement desensitization
            case DECEL_DEC:
                dprintf("DECEL_DEC was pressed. Original Decel Strength: %u.\n", user_config.decel_strength);
                user_config.decel_strength -= 1;
                dprintf("New Decel Strength: %u.\n", user_config.decel_strength);
                snprintf(message, sizeof(message), "DECEL_DEC: %u", user_config.decel_strength);
                set_display_message(message);
                break;
            case DECEL_INC:
                dprintf("DECEL_INC was pressed. Original Decel Strength: %u.\n", user_config.decel_strength);
                user_config.decel_strength += 1;
                dprintf("New Decel Strength: %u.\n", user_config.decel_strength);
                snprintf(message, sizeof(message), "DECEL_INC: %u", user_config.decel_strength);
                set_display_message(message);
                break;
            #endif // POINTING_DEVICE_ENABLE

            // EEPROM functions
            #ifdef EEPROM_ENABLE
            case EE_SAVE:
                print_user_config("EE_SAVE was pressed. Writing to virtualized EEPROM user_config: ", &user_config, EECONFIG_USER_DATA_SIZE, ".\n");
                dprintf("  - dpi: %u\n", user_config.dpi);
                dprintf("  - sen: %u\n", user_config.sen);
                dprintf("  - decel_width: %u\n", user_config.decel_width);
                dprintf("  - decel_strength: %u\n", user_config.decel_strength);
                eeconfig_update_user_datablock(&user_config.raw);
                set_display_message("EE_SAVE");
                break;
            case EE_LOAD:
                eeconfig_read_user_datablock(&user_config.raw);
                print_user_config("EE_LOAD was pressed. Writing to virtualized EEPROM user_config: ", &user_config, EECONFIG_USER_DATA_SIZE, ".\n");
                dprintf("  - dpi: %u\n", user_config.dpi);
                dprintf("  - sen: %u\n", user_config.sen);
                dprintf("  - decel_width: %u\n", user_config.decel_width);
                dprintf("  - decel_strength: %u\n", user_config.decel_strength);
                set_display_message("EE_LOAD");
                break;
            case EE_INIT:
                eeconfig_init_user_datablock();
                dprintf("EE_INIT was pressed, manual EEPROM initialization triggered.\n");
                set_display_message("EE_INIT");
                break;
            #endif // EEPROM_ENABLE

            default:
                break;
        }
    }
    return true; // Normal handling for all other keycodes not returned above
}


// ***********************************
// Persistence using vitualized EEPROM
// ***********************************
#ifdef EEPROM_ENABLE

// For debug printing
void print_user_config(const char *prefix, void *config, size_t size, const char *suffix) {
    if (debug_enable == true) {
            dprintf("%s", prefix);  // Print the prefix
        for (size_t i = 0; i < size; i++) {
            dprintf("%02X", ((uint8_t *)config)[i]);
            if (i < size - 1) {
                dprintf(" ");
            }
        }
        dprintf("%s", suffix);  // Print the suffix
    }
}
// Usage: print_user_config("Configuration value now: ", &user_config, EECONFIG_USER_DATA_SIZE, ". Writing to EEPROM.\n");

// Default values
void eeconfig_init_user_datablock(void) {  // EEPROM is getting reset!
    dprintf("EEPROM is getting reset to default values now!\n");
    user_config.dpi = PMW33XX_CPI;
    user_config.sen = SEN_INITIAL;
    user_config.decel_width = DECEL_WIDTH;
    user_config.decel_strength = DECEL_STRENGTH;
    user_config.scroll_divisor_h = SCROLL_DIVISOR_H;
    user_config.scroll_divisor_v = SCROLL_DIVISOR_V;
    print_user_config("Configuration value now: ", &user_config, EECONFIG_USER_DATA_SIZE, ". Writing to EEPROM.\n");
    eeconfig_update_user_datablock(&user_config.raw); // Write default value to EEPROM now
}

// Read config on init
void kpiu_read_config_from_eeprom(void) {
    print_user_config("Reading config from EEPROM. Previous value of user_config: ", &user_config, EECONFIG_USER_DATA_SIZE, "\n");
    eeconfig_read_user_datablock(&user_config);
    print_user_config("                                             New value: ", &user_config, EECONFIG_USER_DATA_SIZE, "\n");
    pointing_device_set_cpi(user_config.dpi);

    // Compare the DPI set in user_config with the actual device setting
    if (debug_enable == true) {
        wait_ms(10);  // Allow time for the sensor to apply the new CPI setting
        uint16_t actual_dpi = pointing_device_get_cpi();
        if (user_config.dpi == actual_dpi) {
            dprintf("DPI set successfully: %u\n", actual_dpi);
        } else {
            dprintf("DPI discrepancy detected: Configured DPI = %u, Actual DPI = %u\n", user_config.dpi, actual_dpi);
        }
    }
}
#endif // EEPROM_ENABLE


// *******************
// Customize Caps Word
// *******************
// This is copied from the default documented here: https://github.com/qmk/qmk_firmware/blob/master/docs/feature_caps_word.md
// All I really want is to stop the - key from being shifted. Drives me nuts.
bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        //case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
        case KC_MINS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}


// *********************
// Dynamic macro control
// *********************
#ifdef DYNAMIC_MACRO_ENABLE
bool macro_1_recording = false;
bool macro_2_recording = false;
static bool macro_1_recorded = false;
static bool macro_2_recorded = false;
bool dynamic_macro_record_start_user(int8_t direction) {
    if (direction == 1) {
        macro_1_recording = true;
    }
    else if (direction == -1) {
        macro_2_recording = true;
    }
    return true;
}
bool dynamic_macro_record_end_user(int8_t direction) {
    if (direction == 1) {
        macro_1_recording = false;
        macro_1_recorded = true;
    }
    else if (direction == -1) {
        macro_2_recording = false;
        macro_2_recorded = true;
    }
    return true;
}
bool dynamic_macro_play_user(int8_t direction) {
    if (direction == 1 && macro_1_recorded == false) {
        SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(10) SS_TAP(X_DOWN) SS_DELAY(10) SS_TAP(X_DOWN) SS_DELAY(10) SS_TAP(X_RIGHT) SS_DELAY(10) SS_TAP(X_SPACE));
    }
    else if (direction == -1 && macro_2_recorded == false) {
        SEND_STRING(":-)");
    }
    return true;
}
#endif // DYNAMIC_MACRO_ENABLE


// ***********
// Encoder Use
// ***********
#ifdef ENCODER_ENABLE

// Super Encoder Timer
uint16_t encoder_timeout = 900;
uint16_t encoder_timer = 0;
bool is_alt_tab_active = false;
bool is_backspace_active = false;

// Reset mode when timer expired
void msu_encoder_super_timer(void) { // To be executed in matrix_scan_user.
    if (is_alt_tab_active) {
        if (timer_elapsed(encoder_timer) > encoder_timeout) {
            unregister_code(KC_LALT);
            is_alt_tab_active = false;
        }
    }
    if (is_backspace_active) {
        if (timer_elapsed(encoder_timer) > encoder_timeout) {
            is_backspace_active = false;
        }
    }
}

/* The encoder_update_user is a function.
 * It'll be called by QMK every time you turn the encoder.
 *
 * The index parameter tells you which encoder was turned. If you only have
 * one encoder, the index will always be zero.
 *
 * The clockwise parameter tells you the direction of the encoder. It'll be
 * true when you turned the encoder clockwise, and false otherwise.
 */
bool encoder_update_user(uint8_t index, bool clockwise) {
    // dprintf("Encoder turned! Index: %d, Clockwise: %s\n", index, clockwise ? "true" : "false");

    // First encoder - Super alt-tab and super-backspace
    if (index == 0) {

        // In _FN Layer, volume
        if (layer_state_is(_FN)) {
            (clockwise) ? tap_code16(KC_AUDIO_VOL_UP) : tap_code16(KC_AUDIO_VOL_DOWN);
        }

        // Fancy supers
        else if (clockwise) {

            // Super backspace mode
            if (is_backspace_active) {
                tap_code16(C(KC_Z)); // Undo
            }

            // Super alt-tab mode
            else if (is_alt_tab_active) {
                tap_code16(KC_TAB);
            }

            // Otherwise activate super alt-tab mode
            else {
                is_alt_tab_active = true;
                register_code(KC_LALT);
                tap_code16(KC_TAB);
            }
        }
        else { // Counterclockwise

            // Super alt-tab mode
            if (is_alt_tab_active) {
                tap_code16(S(KC_TAB)); // Alt is already registered
            }

            // Otherwise activate (or just continue) super backspace mode
            else {
                is_backspace_active = true;
                tap_code16(KC_BSPC);
            }
        }

        // Update the timer regardless of which direction the encoder was turned or what mode we are in
        encoder_timer = timer_read();
    }

    // Second encoder - ctrl-tab
    else if (index == 1) {
        if (clockwise) {
            tap_code16(C(KC_TAB));
        }
        else {
            tap_code16(S(C(KC_TAB)));
        }
    }
    return false;
}
#endif // ENCODER_ENABLE


// *****************
// Trackball control
// *****************
#ifdef POINTING_DEVICE_ENABLE

// IInitialize custom trackball features
uint16_t first_dpi = 0;
uint16_t init_dpi = 1;
uint16_t detected_dpi = 1;
bool reported = false;
// Some of the variables above are initiated at pointing_device_init_user defined near the bottom of this file.

// Customize Auto Mouse to treat back and forward browser buttons as mouse keys
#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
bool is_mouse_record_user(uint16_t keycode, keyrecord_t* record) {
    switch(keycode) {
        case KC_WBAK:
            return true;
        case KC_WFWD:
            return true;
        default:
            return false;
    }
    return false;
}
#endif

// Decel Algorithm
float decel(int16_t d) {
    if (d > 0) {
        return d*(1/(1+exp(-((float)d/user_config.decel_width*10-user_config.decel_strength/10))));
    }
    else {
        return d*(1/(1+exp(-((float)-d/user_config.decel_width*10-user_config.decel_strength/10))));
    }
    return 0;
}

// Variables to store accumulated scroll and precise movement values
float precision_accumulated_x = 0;
float precision_accumulated_y = 0;
float scroll_accumulated_h = 0;
float scroll_accumulated_v = 0;
float sniping_accumulated_x = 0;
float sniping_accumulated_y = 0;
float movement_accumulated_x = 0;
float movement_accumulated_y = 0;

// Manipulate mouse reports
report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    bool motionDebug = false;

    // Skip everything if there is no movement to manipulate
    if (mouse_report.x == 0 && mouse_report.y == 0) {
        return mouse_report;
    }

    if (motionDebug) {dprintf("Initial: %3d,%3d;  ", mouse_report.x, mouse_report.y);}

    // Precision Decelleration
    // Calculate and accumulate precise movement
    precision_accumulated_x += decel(mouse_report.x);
    precision_accumulated_y += decel(mouse_report.y);
    // Assign integer parts of accumulated movement values to the mouse report
    mouse_report.x = (int16_t)precision_accumulated_x;
    mouse_report.y = (int16_t)precision_accumulated_y;
    if (motionDebug) {dprintf("Decel: %3d,%3d;  ", mouse_report.x, mouse_report.y);}
    // Update accumulated movement values by subtracting the integer parts
    precision_accumulated_x -= (int16_t)precision_accumulated_x;
    precision_accumulated_y -= (int16_t)precision_accumulated_y;


    // Scrolling while in the _FN layer (which is just better than dedicating a separate key for that!)
    if (layer_state_is(_FN)) {

        // Calculate and accumulate scroll values based on mouse movement and divisors
        scroll_accumulated_v -= (float)mouse_report.y / SCROLL_DIVISOR_V;
        scroll_accumulated_h += (float)mouse_report.x / SCROLL_DIVISOR_H;

        // Assign integer parts of accumulated scroll values to the mouse report
        mouse_report.h = (int16_t)scroll_accumulated_h;
        mouse_report.v = (int16_t)scroll_accumulated_v;
        if (motionDebug) {dprintf("Scroll: %3d,%3d;  ", mouse_report.h, mouse_report.v);}

        // Update accumulated scroll values by subtracting the integer parts
        scroll_accumulated_h -= (int16_t)scroll_accumulated_h;
        scroll_accumulated_v -= (int16_t)scroll_accumulated_v;

        // Clear the X and Y values of the mouse report
        mouse_report.x = 0;
        mouse_report.y = 0;
    }

    // And we'll also do sniping mouse movements when in the _NUM layer.
    else if (layer_state_is(_NUM)) {
        // Calculate and accumulate precise movement
        sniping_accumulated_x += (float)mouse_report.x / SNIPING_DIVISOR;
        sniping_accumulated_y += (float)mouse_report.y / SNIPING_DIVISOR;
        // Assign integer parts of accumulated movement values to the mouse report
        mouse_report.x = (int16_t)sniping_accumulated_x;
        mouse_report.y = (int16_t)sniping_accumulated_y;
        if (motionDebug) {dprintf("Prec: %3d,%3d;  ", mouse_report.x, mouse_report.y);}
        // Update accumulated movement values by subtracting the integer parts
        sniping_accumulated_x -= (int16_t)sniping_accumulated_x;
        sniping_accumulated_y -= (int16_t)sniping_accumulated_y;
    }

    // Sensitivity Multiplier
    movement_accumulated_x += (float)mouse_report.x * user_config.sen / 1000;
    movement_accumulated_y += (float)mouse_report.y * user_config.sen / 1000;
    // Assign integer parts of accumulated movement values to the mouse report
    mouse_report.x = (int16_t)movement_accumulated_x;
    mouse_report.y = (int16_t)movement_accumulated_y;
    if (motionDebug) {dprintf("Sens: %3d,%3d;  ", mouse_report.x, mouse_report.y);}
    // Update accumulated movement values by subtracting the integer parts
    movement_accumulated_x -= (int16_t)movement_accumulated_x;
    movement_accumulated_y -= (int16_t)movement_accumulated_y;

    // DONE
    if (motionDebug) {dprintf("Final: %3d,%3d\n", mouse_report.x, mouse_report.y);}
    return mouse_report;
}
#endif // POINTING_DEVICE_ENABLE


// ************
// OLED Control
// ************
#ifdef OLED_ENABLE

// Set up the OLED
static bool oled_logo_on = true;
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;
}

// Other Variables and initiation
static uint32_t oled_logo_timer;
void kpiu_oled_timer(void) { oled_logo_timer = timer_read32(); }
static uint32_t display_timer = 0;
static bool display_override = false;
static char display_message[22] = "";

// Function to set the display override message
void set_display_message(const char* message) {
    strncpy(display_message, message, sizeof(display_message) - 1);
    display_message[sizeof(display_message) - 1] = '\0';
    display_override = true;
    display_timer = timer_read32();
}

#if defined(UNICODE_ENABLE) || defined(UNICODEMAP_ENABLE)
// Unicode input mode callback
void unicode_input_mode_set_user(uint8_t input_mode) {
    static const char *input_mode_names[] = {
        "UC Mode: macOS",
        "UC Mode: Linux",
        "UC Mode: Windows",
        "UC Mode: BSD",
        "UC Mode: WinCompose",
        "UC Mode: Emacs"
    };

    // Ensure input_mode is within range
    if (input_mode < sizeof(input_mode_names) / sizeof(input_mode_names[0])) {
        set_display_message(input_mode_names[input_mode]);
    } else {
        set_display_message("UC Mode: Unknown");
    }
}

// Override the unicode layer when crtl, win(gui), or left alt is held
void msu_mod_override(void) {
    static bool mod_override_active = false;
    uint8_t mods = get_mods();

    // Check if any relevant mods are active (ignoring RALT and weak mods)
    if (get_mods() & (MOD_MASK_CTRL | MOD_MASK_GUI | MOD_BIT(KC_LALT))) {
        if (!mod_override_active && IS_LAYER_ON(_KHMER)) {
            // Modifier held, temporarily move to QWERTY by disabling Khmer
            dprintf("Overriding Layers.\n");
            layer_off(_KHMER);
            layer_on(_QWERTY);
            mod_override_active = true;
        }
    } else if (mod_override_active) {
        // Modifier released, restore Khmer layer
        dprintf("Mod released, returning layers.\n");
        layer_off(_QWERTY);
        layer_on(_KHMER);
        mod_override_active = false;
    }
}
#endif // UNICODE_ENABLE or UNICODEMAP_ENABLE
#if !defined(UNICODE_ENABLE) && !defined(UNICODEMAP_ENABLE)
void msu_mod_override(void) { /* Empty function */ }
#endif // not Unicode defined

// Logo Definition
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

// Runtime
bool oled_task_user(void) {

    // Logo on boot
    if (timer_elapsed32(oled_logo_timer) < 2000 && oled_logo_on == true) {
        oled_set_brightness(255);
        render_logo();
    }

    else if (timer_elapsed32(oled_logo_timer) < 10000 && oled_logo_on == true) {
        oled_set_brightness(32);
        render_logo();
    }

    // Host Keyboard Layer Status
    else {
        if (oled_logo_on) {
            void oled_clear(void);
            oled_write_P(PSTR("\n\n\n\n"), false);
            oled_set_brightness(128);
            oled_logo_on = false;
        }

        oled_write_P(PSTR("Layer: "), false);

        switch (get_highest_layer(layer_state | default_layer_state)) {
            case _QWERTY:
                oled_write_P(PSTR("QWERTY\n"), false);
                break;
            case _KHMER:
                oled_write_P(PSTR("Khmer\n"), false);
                break;
            case _FN:
                oled_write_P(PSTR("Function\n"), false);
                break;
            case _NUM:
                oled_write_P(PSTR("10-Key\n"), false);
                break;
            case _GAME:
                oled_write_P(PSTR("Gaming\n"), false);
                break;
            case _ALTGR:
                oled_write_P(PSTR("Alt Graphic\n"), false);
                break;
            default:
                oled_write_P(PSTR("Undefined\n"), false);
                break;
        }

        // Macro Recording
        #ifdef DYNAMIC_MACRO_ENABLE
        if (macro_1_recording && macro_2_recording) {
            oled_write_P(PSTR("MACROS BOTH RECORDING\n"), false);
            // oled_write_P(PSTR("       WOW!\n"), false);
        }
        else if (macro_1_recording) {
            oled_write_P(PSTR("MACRO 1 RECORDING\n"), false);
        }
        else if (macro_2_recording) {
            oled_write_P(PSTR("MACRO 2 RECORDING\n"), false);
        }
        #endif // DYNAMIC_MACRO_ENABLE

        if (display_override && timer_elapsed32(display_timer) < 7000) {
            oled_write_ln(display_message, false);
        }
        else {
            display_override = false;

            // Trackball DPI Reporting
            #ifdef POINTING_DEVICE_ENABLE
            oled_write_P(PSTR("DPI:"), false);
            oled_write_P(PSTR(get_u16_str(user_config.dpi, ' ')), false);
            oled_write_P(PSTR(" SEN:"), false);
            oled_write_P(PSTR(get_u16_str((uint16_t)user_config.sen / 10, ' ')), false);
            oled_write_P(PSTR("\n"), false);
            #endif
        }

        // Host Keyboard LED Status (mostly)
        led_t led_state = host_keyboard_led_state();
        if (!led_state.num_lock) {
            oled_write_P(PSTR("Num lock OFF\n"), false);
        }
        if (is_caps_word_on()) {
            oled_write_P(PSTR("CAPS WORD ON\n"), false);
        }
        if (led_state.caps_lock || led_state.scroll_lock) { // two on one row
            oled_write_P(led_state.caps_lock ? PSTR("CAPS LOCK  ") : PSTR(""), false);
            oled_write_P(led_state.scroll_lock ? PSTR("SCR\n") : PSTR("\n"), false);
        }

        // Clear the rest of the page
        oled_advance_page(true);
    }
    return false;
}
#endif // OLED_ENABLE
#ifndef OLED_ENABLE
void set_display_message(const char* message) {
    // Do nothing
}
#endif

// custom function for temporary sensor troubleshooting
uint8_t motion_found = 0x00;
uint8_t motion_stored = 0x00;
uint8_t squal_found = 0x00;
uint16_t squal_frequency = 10000;
uint16_t squal_timer = 0;
void kpiu_squal_timer(void) { squal_timer = timer_read(); } // To be executed in keyboard_post_init_user.
uint8_t observation_found = 0x00;

void msu_debug_sensor_custom(void) {

    // Motion
/*     motion_found = pmw33xx_read(0, REG_Motion);
    if (motion_found != motion_stored) {
        dprintf("Motion bit has been set to %x.\n", motion_found);
        motion_stored = motion_found;
    } */

    // Squal - (measures quality of image capture)
    if (timer_elapsed(squal_timer) > squal_frequency) {
        squal_timer = timer_read();
        dprintf("Squal features: %4d; Thresh: %02x; SROM Observation: %02x; SROM_ID: %02x; CPI Read: %5d\n", pmw33xx_read(0, REG_SQUAL) * 8, pmw33xx_read(0, REG_Min_SQ_Run), pmw33xx_read(0, REG_Observation), pmw33xx_read(0, REG_SROM_ID), pointing_device_get_cpi());
        //dprintf("Observation value: %s\n", pmw33xx_read(0, REG_Observation) && 0x20 ? "SROM Running" : "Not running");
        pmw33xx_write(0, REG_Observation, 0x00);
        //dprintf("SROM_ID: %u\n", pmw33xx_read(0, REG_SROM_ID));
    }
}


// Execute all my custom functions neatly organized above inside the proper API calls
void matrix_scan_user(void) {
    msu_encoder_super_timer();
    msu_debug_sensor_custom();
    msu_mod_override();
}

void keyboard_post_init_user(void) {

    // Read persistent config items
    kpiu_read_config_from_eeprom();
    pointing_device_set_cpi(user_config.dpi);
    init_dpi = pointing_device_get_cpi();

    // Debug levels
    debug_enable = true;
    debug_matrix = false;
    debug_keyboard = false;
    debug_mouse = false;

    // Start up some timers
    kpiu_oled_timer();
    kpiu_squal_timer();
}

void pointing_device_init_user(void) {
    first_dpi = pointing_device_get_cpi();
    //pointing_device_set_cpi(user_config.dpi); # moved to kpiu
    //init_dpi = pointing_device_get_cpi();

    #ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
    //set_auto_mouse_layer(<mouse_layer>); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
    set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
    #endif

}

