#ifndef GOB_NAMEGENERATOR_HPP_INCLUDED
#define GOB_NAMEGENERATOR_HPP_INCLUDED

#include <cstdlib>
#include <fstream>
#include <string>
#include <vector>
#include <array>
#include <random>
#include <chrono>

#include "functions.hpp"

namespace gob {

class NameGenerator
{
public:
    NameGenerator();
    std::string generate(const std::string& filePath, int min = 3, int max = 10);

private:
    std::string $filePath;
    std::array< std::array< std::array< std::vector< double >, 2 >, 27>, 27 > $simpleLetters;
};

}

#endif // GOB_NAMEGENERATOR_HPP_INCLUDED
