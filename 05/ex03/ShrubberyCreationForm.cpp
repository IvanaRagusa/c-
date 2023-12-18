# include "ShrubberyCreationForm.hpp"

class Aform;

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
 AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& Shrubbery) 
{
    *this = Shrubbery;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& Shrubbery)
{
    if (this != &Shrubbery)
    {}
    return(* this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

AForm *ShrubberyCreationForm::newform(const std::string target)
{
    return (new ShrubberyCreationForm(target));
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    try
    {
        checkForm(executor);
        std::ofstream ofile;
        ofile.open((_target + "_shrubbery").c_str());
        if (ofile.is_open())
        {
            ofile << "                ⠀⠀⠀⠀⠀⠀⠀⠀⠀  ⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀     ⠀⠀⣀⡀   ⣸⣷⣦⡀⠀⠀⠀⠀    ⣿⢷⡄⠀⠀⠀⠀⠀⠀⢀⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
            ofile << "     ⠀⠀⠀ ⢠⣿⣧⡀⠀⠀⢹⣷⠈⢿⣆⠀⠀⠀    ⣿⠈⣿⡄⠀⠀⣀⡴⢶⣿⡟⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
            ofile << "          ⣿⠀⣿⣇⠀⠀⠈⢻⣆⠘⣿⠀⠀   ⣀⣽⣧⣸⣿⣴⡞⣉⣰⡞⢻⡇⢸⡇⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
            ofile << "         ⠀⣿⣷⣶⣶⣷⣄⣿⠛⢷⣶⣿⣸⣿⣿⣤⣄⡀⠉⠻⣿⣶⠞⢉⣽⡿⢿⣿⠛⠛⠋⠁⠀⢸⣇⣸⡿⢾⣿⡛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
            ofile << "   ⠀⠀⠀⠀⠀⠀⠙⣿⣌⣿⠀⠹⣿⣦⠀⠙⣿⣿⠛⢷⣄⠉⠻⣿⠀⣀⢻⣷⡶⠛⠁⠀⢠⡇⠀⢠⣴⡄⠀⢸⡟⣫⣼⣿⣟⣛⣛⣛⣷⣦⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
            ofile << "        ⠀⢀⣤⣬⣿⣿⡄⠀⣿⡟⠛⠶⠾⣿⡄⠀⠙⠛⠲⢿⣷⣿⠘⣿⠀⠀⠀⣼⠁⠀⢸⡇⢻⣾⡿⠛⠋⠁⠀⠉⠉⠉⣿⠁⣨⠿⠛⢛⣿⠟⠀⠀⠀⠀⠀ " << std::endl;
            ofile << "   ⠀⢠⣿⣷⣄⠈⣿⣍⠉⠛⠿⣶⣿⠃⠀⠀⠀⢸⣧⡀⠀⠀⠀⠀⠉⣿⡇⢿⣇⠀⠀⠀⣿⠀⠀⢸⡇⣸⡏⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣡⡤⠾⠋⠁⠀⠀⠀⠀⠀⠀ " << std::endl;
            ofile << "   ⢀⣀⣿⡆⢿⡄⠈⠛⠶⠶⠶⠾⠿⣷⣄⠀⠀⠈⣿⣇⠀⠀⠀⠀⠀⣿⡇⠀⢿⣦⡀⠀⣿⠀⠀⠈⣷⣏⡀⠀⠀⠀⠀⠀⢀⣠⣾⠟⠉⠁⠀⢀⣠⣴⠶⢶⣶⣄⠀⠀ " << std::endl;
            ofile << "  ⠀⢸⣿⠻⣿⣼⡇⠀⠀⠀⠀⠀⠀⠀⠈⠻⢷⣦⣀⠘⢿⣆⠀⠀⠀⠀⣿⡇⠀⠀⠹⣧⣀⣿⠀⢠⡼⣿⡏⠻⣦⡀⢀⣤⣴⣿⣿⣥⣤⣤⣤⡶⣿⣿⡷⠶⠞⠛⠉⠀⠀ " << std::endl;
            ofile << "   ⠈⢿⣄⠈⢻⡇⠀⢀⣤⣶⣶⣦⡤⠀⠀⠀⠈⠛⠻⢿⣿⣷⣄⠀⠀⣿⡇⠀⠀⠀⢻⣿⣿⡾⠋⢠⣾⣷⣄⢸⡏⠉⠉⠀⠀⠀⠀⠀⠉⠻⣷⣄⠉⢻⣦⡄⠀⠀⠀⠀ " << std::endl;
            ofile << "  ⢸⡿⣿⣿⠶⣤⣿⣾⡿⣤⣤⠾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠻⣷⣄⣿⣿⠀⠀⠀⠈⣿⣿⠀⠀⣸⠏⢹⡏⠛⣿⠀⠀⠀⠀⠀⠀⢀⣀⡴⠟⠉⠛⠻⠿⠇⠀⠀⠀⠀ " << std::endl;
            ofile << "  ⢸⣧⠈⢿⣆⠀⠈⢿⣧⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⠀⠀⠀⠀⠀⠙⢿⣿⣿⡄⠀⠀⠀⢹⣿⣤⠾⢻⡆⠸⣇⠀⠀⣀⣀⣀⣤⠶⠾⣿⡛⢷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
            ofile << "    ⣷⣬⣿⠀⠀⠀⠹⣷⣄⡀⢀⣴⣾⣛⣩⣿⠟⠁⠀⠀⠀⠀⠀⠀⢻⣿⣿⠀⢀⣤⣿⣿⠋⠀⠈⢳⣴⣿⡶⠿⠛⠉⠉⠀⠀⠀⠈⠿⣦⣙⣷⡄⠀⠀⠀⠀⠀⠀⠀ " << std::endl;
            ofile << "     ⠙⣿⣤⣀⡀⠀⠀⠙⢿⣮⣉⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣶⡿⠋⢹⣿⠀⣠⣶⠟⠻⢷⣤⣤⣀⣀⣀⣤⣄⡀⠀⠀⠀⠉⠉⠀⠀⢀⣤⡴⢶⡆⠀ " << std::endl;
            ofile << "       ⠀⠈⠙⠛⠛⠿⠷⠾⠿⣿⣦⣄⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡿⠁⠀⢸⣿⣿⠋⠀ ⠀⠀⠀⠈⠉⠙⠛⠙⢻⡈⠛⣷⣄⠀⠀⢀⣴⣾⣯⣴⠾⠛⠃⠀ " << std::endl;
            ofile << "⣀⡀⠀ ⠀⠀⠀⣀⣤⡶⣦⣄⣀⠀⠀⠀⠉⠻⠿⢿⣿⣿⣿⣿⣿⣶⣦⣤⣀⢸⣿⣇⠀⠀⣾⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢈⣷⣦⣨⣿⠶⢾⣿⣿⠿⠿⣦⣀⡀⠀⠀ " << std::endl;
            ofile << "⢸⣏⡙⢷⣦⡀⠈⠽⠶⠶⠶⠿⢿⣀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⠙⢿⣿⣿⣿⣿⠀⢀⣿⣿⠀⣀⣀⣀⣀⣤⣤⣶⡶⠾⢿⣟⢿⡍⠉⠀⢀⣿⣿⠉⠳⠶⣄⣹⣷⡄⠀" << std::endl;
            ofile << "⠀⠙⠷⣶⣾⣿⠀⠀⠀⠀⠀⠀⠀⠙⢿⣦⣤⣤⣀⣀⣀⣠⣤⣤⣤⣤⣀⠀⠙⢿⣿⡟⠀⣼⣿⣿⣿⢿⣿⣿⣟⠛⠛⠉⠀⠀⢈⣿⠀⣿⣄⣀⣿⡏⣼⡇⠀⠀⠀⠉⠉⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⢈⣟⠻⢷⣦⣤⣤⣤⣤⣤⣤⡶⠿⠿⠛⠛⠛⠛⠋⠙⠛⠛⠻⢿⣿⣦⣼⣿⣇⣼⣿⠛⠁⠀⠀⠀⠉⠛⠛⢻⣿⣿⠛⠛⠻⣷⣿⠋⠉⠻⣿⣿⣧⣤⣶⡶⠶⣤⣄⡀" << std::endl;
            ofile << "⠀⠀⢀⣾⠿⣦⠀⠀⠀⠀⠀⠀⣠⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⢸⡟⢹⣷⠀⠀⠀⠉⠀⠀⠀⠉⠀⠻⣿⡈⠻⣶⣴⠿⠟" << std::endl;
            ofile << "⠀⠀⢸⣇⢠⣿⠀⠀⠀⠀⠀⠀⣿⡜⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⢸⣇⣾⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⣦⣬⣷⡄⠀" << std::endl;
            ofile << "⠀⠀⠈⠻⣾⡋⠀⠀⠀⠀⠀⠀⠘⢿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠁⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⣿⣿⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣿⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⡿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣿⣿⣿⣿⣿⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⡿⠛⠻⣿⣍⠛⠿⣿⣿⣷⣶⣶⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << std::endl;
            ofile << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠿⠿⠿⠛⠋⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⠈⠹⠟⠂⠀                      " << std::endl;
            ofile << std::endl;
            ofile.close();
        }
        std::cout << executor << " executed " << _target << std::endl;
    }
    catch(AForm::GradeTooLowException & e)
	{
		std::cout << "Oh, no " << executor << " can't execute " << _target << " becaaaaause : " << e.what() << std::endl;
	}
	catch(AForm::FormNotSignedException & e)
	{
		std::cout << "Oh, no " << executor << " can't execute " << _target << " becaaaaause : " << e.what() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "Oh, no " << executor << " can't execute " << _target << " becaaaaause : " << e.what() << std::endl;
	}    
}