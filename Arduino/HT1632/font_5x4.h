/* 
 * 5-high FONT FOR RENDERING TO THE LED SCREEN.
 * Includes kerning support

 * 8 pixels-per-byte, variable width.
 * Gaurav Manek, 2011
 */

#define FONT_5X4_HEIGHT  5
// Number of bytes per glyph 

uint8_t FONT_5X4 [] = {
    0b00000000,  // SPACE
    0b00010111,  // !
    0b00000011, 0b00000000, 0b00000011,  // "
    0b00001010, 0b00011111, 0b00001010, 0b00011111, 0b00001010,  // #
    0b00000000, 0b00000000, 0b00000000, 0b00000000,  // $
    0b00010011, 0b00001011, 0b00000100, 0b00011010, 0b00011001,  // %
    0b00001010, 0b00010101, 0b00011001, 0b00011010,  // &
    0b00000011,  // '
    0b00001110, 0b00010001,  // (
    0b00010001, 0b00001110,  // )
    0b00000101, 0b00000010, 0b00000101,  // *
    0b00000100, 0b00000100, 0b00011111, 0b00000100, 0b00000100,  // +
    0b00010000, 0b00001000,  // ,
    0b00000100, 0b00000100, 0b00000100,  // -
    0b00010000,  // .
    0b00010000, 0b00001100, 0b00000110, 0b00000001,  // /
    0b00001110, 0b00010001, 0b00001110,  // 0
    0b00010010, 0b00011111, 0b00010000,  // 1
    0b00010010, 0b00011001, 0b00010101, 0b00010010,  // 2
    0b00010101, 0b00010101, 0b00001010,  // 3
    0b00001100, 0b00001010, 0b00011111, 0b00001000,  // 4
    0b00010111, 0b00010101, 0b00001101,  // 5
    0b00001110, 0b00010101, 0b00010101, 0b00001000,  // 6
    0b00000001, 0b00011101, 0b00000101, 0b00000011,  // 7
    0b00001010, 0b00010101, 0b00010101, 0b00001010,  // 8
    0b00000010, 0b00000101, 0b00010101, 0b00001110,  // 9
    0b00001010,  // :
    0b00010000, 0b00001010,  // ;
    0b00000100, 0b00001010, 0b00010001,  // <
    0b00001010, 0b00001010, 0b00001010,  // =
    0b00010001, 0b00001010, 0b00000100,  // >
    0b00000010, 0b00000001, 0b00011001, 0b00000110,  // ?
    0b00001110, 0b00000001, 0b00001101, 0b00010101, 0b00001111,  // @
    0b00011110, 0b00000101, 0b00000101, 0b00011110,  // A
    0b00011111, 0b00010101, 0b00001010,  // B
    0b00001110, 0b00010001, 0b00010001, 0b00001010,  // C
    0b00011111, 0b00010001, 0b00001110,  // D
    0b00011111, 0b00010101, 0b00010001,  // E
    0b00011111, 0b00000101, 0b00000101,  // F
    0b00001110, 0b00010001, 0b00011001, 0b00001010,  // G
    0b00011111, 0b00000100, 0b00000100, 0b00011111,  // H
    0b00010001, 0b00011111, 0b00010001,  // I
    0b00001001, 0b00010001, 0b00001111,  // J
    0b00011111, 0b00000100, 0b00001010, 0b00010001,  // K
    0b00011111, 0b00010000, 0b00010000,  // L
    0b00011111, 0b00000010, 0b00000100, 0b00000010, 0b00011111,  // M
    0b00011111, 0b00000010, 0b00000100, 0b00001000, 0b00011111,  // N
    0b00001110, 0b00010001, 0b00010001, 0b00001110,  // O
    0b00011111, 0b00000101, 0b00000010,  // P
    0b00001110, 0b00010001, 0b00010001, 0b00001001, 0b00010110,  // Q
    0b00011111, 0b00000101, 0b00011010,  // R
    0b00010010, 0b00010101, 0b00010101, 0b00001001,  // S
    0b00000001, 0b00011111, 0b00000001,  // T
    0b00001111, 0b00010000, 0b00010000, 0b00001111,  // U
    0b00000011, 0b00001100, 0b00010000, 0b00001100, 0b00000011,  // V
    0b00001111, 0b00010000, 0b00001100, 0b00010000, 0b00001111,  // W
    0b00011011, 0b00000100, 0b00011011,  // X
    0b00000011, 0b00011100, 0b00000011,  // Y
    0b00011001, 0b00010101, 0b00010101, 0b00010011,  // Z
    0b00011111, 0b00010001,  // [
    0b00000001, 0b00000110, 0b00001100, 0b00010000,  // BACKSLASH
    0b00010001, 0b00011111,  // ]
    0b00000010, 0b00000001, 0b00000010,  // ^
    0b00010000, 0b00010000, 0b00010000   // _
};

// If your number goes above 255, change this to int.
uint8_t FONT_5X4_END [] = {
    1,   2,   5,  10,  14,  19,  23,  24,
   26,  28,  31,  36,  38,  41,  42,  46,
   49,  52,  56,  59,  63,  66,  70,  74,
   78,  82,  83,  85,  88,  91,  94,  98,
  103, 107, 110, 114, 117, 120, 123, 127,
  131, 134, 137, 141, 144, 149, 154, 158,
  161, 166, 169, 173, 176, 180, 185, 190,
  193, 196, 200, 202, 206, 208, 211, 214
};

