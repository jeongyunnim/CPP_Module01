#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl    harl;

    if (argc != 2)
    {
        std::cerr << "Error\nArgument error" << std::endl;
        return (1);
    }
    harl.complain(argv[1]);
    return (0);
}