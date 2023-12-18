#include "BitcoinExchange.hpp"

bool is_valid_date(int y, int m, int d)
{
    if (((y < 2009 || y > 2022) || (m < 1 || m > 12)) || (m == 2 && d > 28) ||
        ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30))
    {
        std::cout << "Error: bad input => " << y << "-" << m << "-" << d << std::endl;
        return false;
    }
    return true;
}

bool is_valid_value(int value)
{
    if (value == -2147483648 || value > 1000)
    {
        std::cout << "Error: too large number." << std::endl;
        return (false);
    }
    if (value < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (false);
    }
    return (true);
}

int mystoi(std::string &date)
{
    int num;
    std::stringstream ss(date);
    if (!(ss >> num))
        throw std::runtime_error("bad formatted data");
    return (num);
}

int ft_parse_csv(std::string &tmp, float &value)
{
    int y, m, d;
    std::stringstream ss(tmp);
    std::string date;

    std::getline(ss, date, '-');
    y = mystoi(date);
    std::getline(ss, date, '-');
    m = mystoi(date);
    std::getline(ss, date, ',');
    d = mystoi(date);
    std::getline(ss, date);
    std::stringstream v(date);
    if (!(v >> value))
        throw std::runtime_error("bad formatted ");
    return (y * 10000 + (m * 100) + d);
}

std::map<int, float> ft_cvs_map(void)
{
    std::ifstream csv("data.csv");
    if (!csv.is_open())
        throw std::runtime_error("unable to open file.txt");
    std::string tmp;
    std::map<int, float> btc;
    if (std::getline(csv, tmp))
    {
        while (std::getline(csv, tmp))
        {
            float value;
            int data = ft_parse_csv(tmp, value);
            std::pair<int, float> new_el(data, value);
            btc.insert(new_el);
        }
        csv.close();
    }
    return (btc);
}

int ft_parse_input(std::string &tmp, float &value)
{
    int y, m, d;
    std::stringstream ss(tmp);
    std::string date;

    std::getline(ss, date, '-');
    y = mystoi(date);
    std::getline(ss, date, '-');
    m = mystoi(date);
    std::getline(ss, date, '|');
    d = mystoi(date);
    std::getline(ss, date);
    std::stringstream v(date);
    if (!(v >> value))
        throw std::runtime_error("bad formatted data");
    if (!is_valid_date(y, m, d) || !is_valid_value(value))
        return (-1);
    return (y * 10000 + (m * 100) + d);
}

float ft_closest_key(std::map<int, float> const &m, int data)
{
    std::map<int, float>::const_iterator lower_it = m.lower_bound(data);

    if (lower_it == m.begin())
        return lower_it->second;
    else if (lower_it == --m.end())
        return (lower_it)->second;
    else
        return lower_it->second;
}

void find_btc(std::map<int, float> const &csv_map, std::string tmp)
{
    if (tmp.empty())
        return;
    float num;
    int data = ft_parse_input(tmp, num);
    if (data == -1)
        return;
    std::pair<int, int> line(data, num);
    float btc_val = ft_closest_key(csv_map, data);
    if (btc_val == -1)
        std::cout << "Error: not a positive number." << std::endl;
    std::cout << tmp.substr(0, tmp.find(" ")) << " => " << num << " = " << btc_val * num << std::endl;
}