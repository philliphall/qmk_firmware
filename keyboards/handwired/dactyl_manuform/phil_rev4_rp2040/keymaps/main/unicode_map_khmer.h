#ifndef UNICODE_MAP_KHMER_H
#define UNICODE_MAP_KHMER_H

#include <stdint.h>

// Enum for Khmer Unicode names, based on Unicode charts
// References:
//  - https://www.unicode.org/charts/PDF/U1780.pdf
//  - https://www.unicode.org/charts/PDF/U19E0.pdf
enum unicode_names {
    // U+1780–U+17FF: Khmer block
    // Consonants
    KA,                   // 0x1780, 0 ក
    KHA,                  // 0x1781, 1 ខ
    KO,                   // 0x1782, 2 គ
    KHO,                  // 0x1783, 3 ឃ
    NGO,                  // 0x1784, 4 ង
    CA,                   // 0x1785, 5 ច
    CHA,                  // 0x1786, 6 ឆ
    CO,                   // 0x1787, 7 ជ
    CHO,                  // 0x1788, 8 ឈ
    NYO,                  // 0x1789, 9 ញ
    DA,                   // 0x178A, 10 ដ
    TTHA,                 // 0x178B, 11 ឋ
    DO,                   // 0x178C, 12 ឌ
    TTHO,                 // 0x178D, 13 ឍ
    NNA,                  // 0x178E, 14 ណ
    TA,                   // 0x178F, 15 ត
    THA,                  // 0x1790, 16 ថ
    TO,                   // 0x1791, 17 ទ
    THO,                  // 0x1792, 18 ធ
    NO,                   // 0x1793, 19 ន
    BA,                   // 0x1794, 20 ប
    PHA,                  // 0x1795, 21 ផ
    PO,                   // 0x1796, 22 ព
    PHO,                  // 0x1797, 23 ភ
    MO,                   // 0x1798, 24 ម
    YO,                   // 0x1799, 25 យ
    RO,                   // 0x179A, 26 រ
    LO,                   // 0x179B, 27 ល
    VO,                   // 0x179C, 28 វ
    SHA,                  // 0x179D, 29 ឝ
    SSO,                  // 0x179E, 30 ឞ
    SA,                   // 0x179F, 31 ស
    HA,                   // 0x17A0, 32 ហ
    LA,                   // 0x17A1, 33 ល
    QA,                   // 0x17A2, 34 អ

    // Independent Vowels
    QAQ,                  // 0x17A3, 35 ឣ - use of this character is strongly discouraged. 17A2 should be used instead
    QAA,                  // 0x17A4, 36 ឤ - use of this character is strongly discouraged. 17A2 then 17B6 should be used instead
    QI,                   // 0x17A5, 37 ឥ
    QII,                  // 0x17A6, 38 ឦ
    QU,                   // 0x17A7, 39 ឧ
    QUK,                  // 0x17A8, 40 ឨ
    QUU,                  // 0x17A9, 41 ឩ
    QUUV,                 // 0x17AA, 42 ឪ
    RY,                   // 0x17AB, 43 ឫ
    RYY,                  // 0x17AC, 44 ឬ
    LY,                   // 0x17AD, 45 ឭ
    LYY,                  // 0x17AE, 46 ឮ
    QE,                   // 0x17AF, 47 ឯ
    QAI,                  // 0x17B0, 48 ឰ
    QOO_TYPE_ONE,         // 0x17B1, 49 ឱ
    QOO_TYPE_TWO,         // 0x17B2, 50 ឲ - invisible combining marks for phonetic transcription - solely for compatibility - usage discouraged
    QAU,                  // 0x17B3, 51 ឳ - invisible combining marks for phonetic transcription - solely for compatibility - usage discouraged

    // Dependent vowel signs
    AA,                   // 0x17B6, 52 ា
    I,                    // 0x17B7, 53 ិ
    II,                   // 0x17B8, 54 ី
    Y,                    // 0x17B9, 55 ឹ
    YY,                   // 0x17BA, 56 ឺ
    U,                    // 0x17BB, 57 ុ
    UU,                   // 0x17BC, 58 ូ
    UA,                   // 0x17BD, 59 ួ
    OE,                   // 0x17BE, 60 ើ
    YA,                   // 0x17BF, 61 ឿ
    IE,                   // 0x17C0, 62 ុា
    E,                    // 0x17C1, 63 ូា
    AE,                   // 0x17C2, 64 ៲
    AI,                   // 0x17C3, 65 ៳
    OO,                   // 0x17C4, 66 ៴
    AU,                   // 0x17C5, 67 ៵

    // Various signs
    NIKAHIT,              // 0x17C6, 68 ៶
    REAHMUK,              // 0x17C7, 69 ៷
    YUUKALEAPINTU,        // 0x17C8, 70 ៸
    MUUSIKATOAN,          // 0x17C9, 71 ៹
    TRIISAP,              // 0x17CA, 72 ៺
    BANTOC,               // 0x17CB, 73 ៻
    ROBAT,                // 0x17CC, 74 ៼
    TOANDAKHIAT,          // 0x17CD, 75 ៽
    KAKABAT,              // 0x17CE, 76 ៾
    AHSDA,                // 0x17CF, 77 ៿
    SAMYOK_SANNYA,        // 0x17D0, 78 ᄀ
    VIRIAM,               // 0x17D1, 79 ᄁ
    COENG,                // 0x17D2, 80 ᄂ
    BATHAMASAT,           // 0x17D3, 81 ᄃ
    KHAN,                 // 0x17D4, 82 ᄄ
    BARIYOOSAN,           // 0x17D5, 83 ᄅ
    CAMNUC_PII_KUUH,      // 0x17D6, 84 ᄆ
    LEK_TOO,              // 0x17D7, 85 ᄇ
    BEYYAL,               // 0x17D8, 86 ᄈ
    PHNAEK_MUAN,          // 0x17D9, 87 ᄉ
    KOOMUUT,              // 0x17DA, 88 ᄊ
    RIEL,                 // 0x17DB, 89 ᄋ
    AVAKRAHASANYA,        // 0x17DC, 90 ᄌ
    ATTHACAN,             // 0x17DD, 91 ᄍ

    // Digits
    ZERO,                 // 0x17E0, 92 ០
    ONE,                  // 0x17E1, 93 ១
    TWO,                  // 0x17E2, 94 ២
    THREE,                // 0x17E3, 95 ៣
    FOUR,                 // 0x17E4, 96 ៤
    FIVE,                 // 0x17E5, 97 ៥
    SIX,                  // 0x17E6, 98 ៦
    SEVEN,                // 0x17E7, 99 ៧
    EIGHT,                // 0x17E8, 100 ៨
    NINE,                 // 0x17E9, 101 ៩
    LEK_ATTAK_SON,        // 0x17F0, 102 ៰
    LEK_ATTAK_MUOY,       // 0x17F1, 103 ៱
    LEK_ATTAK_PII,        // 0x17F2, 104 ៲
    LEK_ATTAK_BEI,        // 0x17F3, 105 ៳
    LEK_ATTAK_BUON,       // 0x17F4, 106 ៴
    LEK_ATTAK_PRAM,       // 0x17F5, 107 ៵
    LEK_ATTAK_PRAM_MUOY,  // 0x17F6, 108 ៶
    LEK_ATTAK_PRAM_PII,   // 0x17F7, 109 ៷
    LEK_ATTAK_PRAM_BEI,   // 0x17F8, 110 ៸
    LEK_ATTAK_PRAM_BUON,  // 0x17F9, 111 ៹

    // U+19E0–U+19FF: Khmer Symbols block
    PATHAMASAT,           // 0x19E0, 112 ᧿ (Fifteenth waning day)
    MUOY_KOET,            // 0x19E1, 113 ᧾ (Fourteenth waning day)
    PII_KOET,             // 0x19E2, 114 ᧽ (Thirteenth waning day)
    BEI_KOET,             // 0x19E3, 115 ᧼ (Twelfth waning day)
    BUON_KOET,            // 0x19E4, 116 ᧻ (Eleventh waning day)
    PRAM_KOET,            // 0x19E5, 117 ᧺ (Tenth waning day)
    PRAM_MUOY_KOET,       // 0x19E6, 118 ᧹ (Ninth waning day)
    PRAM_PII_KOET,        // 0x19E7, 119 ᧸ (Eighth waning day)
    PRAM_BEI_KOET,        // 0x19E8, 120 ᧷ (Seventh waning day)
    PRAM_BUON_KOET,       // 0x19E9, 121 ᧶ (Sixth waning day)
    DAP_KOET,             // 0x19EA, 122 ᧵ (Fifth waning day)
    DAP_MUOY_KOET,        // 0x19EB, 123 ᧴ (Fourth waning day)
    DAP_PII_KOET,         // 0x19EC, 124 ᧳ (Third waning day)
    DAP_BEI_KOET,         // 0x19ED, 125 ᧲ (Second waning day)
    DAP_BUON_KOET,        // 0x19EE, 126 ᧱ (First waning day)
    DAP_PRAM_KOET,        // 0x19EF, 127 ᧰ (Second Ashadha in leap year)
    TUTEYASAT,            // 0x19F0, 128 ᧯ (Fifteenth waxing day)
    MUOY_ROC,             // 0x19F1, 129 ᧮ (Fourteenth waxing day)
    PII_ROC,              // 0x19F2, 130 ᧭ (Thirteenth waxing day)
    BEI_ROC,              // 0x19F3, 131 ᧬ (Twelfth waxing day)
    BUON_ROC,             // 0x19F4, 132 ᧫ (Eleventh waxing day)
    PRAM_ROC,             // 0x19F5, 133 ᧪ (Tenth waxing day)
    PRAM_MUOY_ROC,        // 0x19F6, 134 ᧩ (Ninth waxing day)
    PRAM_PII_ROC,         // 0x19F7, 135 ᧨ (Eighth waxing day)
    PRAM_BEI_ROC,         // 0x19F8, 136 ᧧ (Seventh waxing day)
    PRAM_BUON_ROC,        // 0x19F9, 137 ᧦ (Sixth waxing day)
    DAP_ROC,              // 0x19FA, 138 ᧥ (Fifth waxing day)
    DAP_MUOY_ROC,         // 0x19FB, 139 ᧤ (Fourth waxing day)
    DAP_PII_ROC,          // 0x19FC, 140 ᧣ (Third waxing day)
    DAP_BEI_ROC,          // 0x19FD, 141 ᧢ (Second waxing day)
    DAP_BUON_ROC,         // 0x19FE, 142 ᧡ (First waxing day)
    DAP_PRAM_ROC,         // 0x19FF, 143 ᧠ (Represents the first Ashadha)

    // Not necessarily Khmer, but widely used
    ZWS                   // 0x200B, 144  (Zero Width Space)
};

extern const uint32_t PROGMEM unicode_map[];

#endif // UNICODE_MAP_KHMER_H
