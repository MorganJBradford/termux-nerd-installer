#ifndef UTILS_H
#define UTILS_H

#define TERMUX_DIRECTORY "environment"
#define TERMUX_FONT_PATH "environment/font.ttf"
#define FONTS_DIRECTORY  "environment/fonts"

typedef struct {
    char* name;
    char* url;
} NerdFont;

NerdFont* new_nerd_font(char* name, char* url);

bool is_termux_enviroment(void);
bool check_fonts_directory(void);
bool font_is_installed(char* name);
char** list_installed_fonts(void);
NerdFont** list_available_fonts(void);
unsigned short get_terminal_width(void);
char* get_url(char* name);
char* font_path_as_name(char* font_path);
char* font_name_as_path(char* font_name);
char* path_by_font_name(char* font_name);
void copy(char* which, char* where);
int getch(void);

#endif /* UTILS_H */
