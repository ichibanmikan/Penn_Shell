#include <stdlib.h>

size_t spin_off_func(char** buffer, size_t *str_sz, char* str, size_t sz, char ch);
/*
对大小为sz的字符串str根据ch字符分割成不同的字符串(就是根据空格分割shell命令)
将每个分割好的字符串放到buffer中，numStr放置每个每个不同部分的字符串大小
返回一共分割了多少个块
比如 cat aaa.txt
执行完之后
buffer应该为{cat, aaa.txt}
str_sz应该为{3, 7}
返回值为2
*/