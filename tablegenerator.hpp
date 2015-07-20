#ifndef GOB_TABLEGENERATOR_HPP_INCLUDED
#define GOB_TABLEGENERATOR_HPP_INCLUDED

#include <fstream>
#include <string>
#include <array>

namespace gob {

class TableGenerator
{
public:
    TableGenerator();
    void generate(const std::string& filePath);

private:
    std::string $filePathIN;
    std::array< std::array< std::array< double, 28 >, 27 >, 27 > $letters;
};

}

#endif // GOB_TABLEGENERATOR_HPP_INCLUDED
