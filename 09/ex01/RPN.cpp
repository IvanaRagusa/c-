#include "RPN.hpp"

int do_op(int val1, int val2, char op)
{
    switch (op)
    {
    case '+':
        return val1 + val2;
    case '-':
        return val1 - val2;
    case '/':
    {
        if (val2 == 0)
        {
            std::cout << "Error:\nimpossible to divide by 0" << std::endl;
            exit(1);
        }
        return val1 / val2;
    }
    case '*':
        return val1 * val2;
    }
    return (0);
}

int evaluate_rpn(char *argv)
{
    std::stack<int> s;
    std::stringstream ss(argv);
    std::string token;
    
    
    while (ss >> token)
    {
        if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/')
        {
            int val1 = s.top();
            s.pop();
            int val2 = s.top();
            s.pop();

            char op = token[0];
            int res = do_op(val2, val1, op);
            s.push(res);
        }
        else if (token.length() != 1 || !isdigit(token[0]))
        {
            std::cout << "Error:\ninvalid input, insert only digit < 10 in RPM format." << std::endl;
            exit(1);
        }
        else
            s.push(token[0] - 48);
    }
    return (s.top());
}
