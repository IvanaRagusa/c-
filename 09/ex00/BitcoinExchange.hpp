#pragma once

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <map>

bool is_valid_date(int y, int m, int d);
bool is_valid_value(int value);
int mystoi(std::string &date);
int ft_parse_csv(std::string &tmp, float &value);
std::map<int, float> ft_cvs_map(void);
int ft_parse_input(std::string &tmp, float &value);
float ft_closest_key(std::map<int, float> const &m, int data);
void find_btc(std::map<int, float> const &csv_map, std::string tmp);