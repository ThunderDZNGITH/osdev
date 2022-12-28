#ifndef __DRIVER_VGA_TEXT
#define __DRIVER_VGA_TEXT

#include <types.h>

#define VGA_START 0xB8000
#define VGA_WIDTH 80
#define VGA_HEIGHT 25
#define VGA_EXTENT 80 * 25

#define COLOR_BLK 0 //BLACK
#define COLOR_BLU 1 //BLUE
#define COLOR_GRN 2 //GREEN
#define COLOR_CYN 3 //CYAN
#define COLOR_RED 4 //RED
#define COLOR_PRP 5 //PURPLE
#define COLOR_BRN 6 //BROWN
#define COLOR_GRY 7 //GRAY
#define COLOR_DGY 8 //DARK GRAY
#define COLOR_LBU 9 //LIGHT BLUE
#define COLOR_LGR 10 //LIGHT GREEN
#define COLOR_LCY 11 //LIGHT CYAN
#define COLOR_LRD 12 //LIGHT RED
#define COLOR_LPP 13 //LIGHT PURPLE
#define COLOR_YEL 14 //YELLOW
#define COLOR_WHT 15 //WHITE

#define CURSOR_PORT_COMMAND (u16_t) 0x3D4
#define CURSOR_PORT_DATA (u16_t) 0x3D5

typedef struct __attribute__((packed)) {
	char character;
	char style;
} vga_char;

u8_t vga_color(const u8_t fg_color, const u8_t bg_color);

void clearwin(const u8_t fg_color, const u8_t bg_color);

void putchar(const char character, const u8_t fg_color, const u8_t bg_color);

void putstr(const char *string, const u8_t fg_color, const u8_t bg_color);

u16_t get_cursor_pos();

void show_cursor();
void hide_cursor();

void advance_cursor();
void reverse_cursor();
void set_cursor_pos(u8_t x, u8_t y);

void scroll_line();

#endif