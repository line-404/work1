#ifndef CHECK_H
#define CHECK_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "Struct.h"


void clear_buffer();

void clean_fgets_string(char* str, int max_len);


// 1. 校验并获取字母字符串 (提示语，字母字符串，最大长度)
void get_alpha_string(const char* prompt,char* str, int max_len);

// 2. 校验并获取整数范围 (提示语，最小值，最大值)
int get_int_range(const char* prompt, int min, int max);

// 3. 校验并获取固定长度数字串 (提示语，数字字符串，固定长度)
void get_numeric_string_fixed(const char* prompt, char* str, int fixed_len);

// 4. 校验并获取100的倍数 (提示语)
int get_int_multiple_100(const char* prompt );

//5.检查诊疗记录每一位都合理,对比原记录对资金进行操作
void get_char_medicalrecord(char* new_record, const char* old_record);

//6.检验并获取两位小数浮点数范围
double get_double_range(const char* prompt, double min, double max);

// 7.获取用户输入的时间
Time input_time();

// 8.如果 t1 晚于 t2 返回 1，否则返回 0
int is_later(Time t1, Time t2);


#endif#
