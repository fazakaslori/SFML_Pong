
#include "Do.hpp"
#include <iostream>

namespace Console
{

void OutputWriter::Write (std::string param)
{
	std::cout << param << std::endl;
}

}