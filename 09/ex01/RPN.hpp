#pragma once

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <cstdlib>
#include <cstring>

int evaluate_rpn(char *argv);
int do_op(int val1, int val2, char op);