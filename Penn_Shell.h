#include "sys_cmd.h"
#include "tool.h"

extern int cat_func(FILE* fstr);
extern int pwd_func(char* file_path);
extern size_t spin_off_func(char** buffer, size_t *str_sz, char* str, size_t sz, char ch);