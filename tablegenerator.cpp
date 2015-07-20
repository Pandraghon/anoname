#include "tablegenerator.hpp"

namespace gob {

TableGenerator::TableGenerator() : $filePathIN(), $letters() {}

void TableGenerator::generate(const std::string& filePath)
{
    $filePathIN = filePath;
    std::ofstream fout_log{($filePathIN.substr(0, $filePathIN.rfind('/') + 1) + "log_error.txt").c_str()};
    std::ofstream fout_set{($filePathIN.substr(0, $filePathIN.rfind('.') + 1) + "set").c_str()};
    std::ifstream fin{$filePathIN.c_str()};
    std::string name{};

    if(!fin){
        fout_log << "Error : cannot find " << $filePathIN;
        return;
    }

    const char*
        //   "ÀÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞßàáâãäåæçèéêëìíîïðñòóôõö÷øùúûüýþÿ"
        tr = "AAAAAAECEEEEIIIIDNOOOOOx0UUUUYPsaaaaaaeceeeeiiiiOnooooo/0uuuuypy";

    while(!fin.eof()){
        fin >> name;

        double charPrec{0.0}, charCrt{0.0}, charNext{};

        for(unsigned int i{0} ; i < name.size() ; ++i){
            unsigned char ch = name[i];
            if(ch >=192)
                charNext = tr[ch-192];
            else
                charNext = name[i];
            if(charNext >= 'a' && charNext <= 'z') charNext = charNext - 'a' + 1;
            else if(charNext >= 'A' && charNext <= 'Z') charNext = charNext - 'A' + 1;
            else break;
            ++$letters[charPrec][charCrt][charNext + 1];
            ++$letters[charPrec][charCrt][0];
            charPrec = charCrt;
            charCrt = charNext;
        }

        ++$letters[charPrec][charCrt][1];
        ++$letters[charPrec][charCrt][0];
    }

    if($letters[0][0][0] == 0) return;

    for(int i{0} ; i < 27 ; ++i){
        for(int j{0} ; j < 27 ; ++j){
            if($letters[i][j][0] != 0){
                if($letters[i][j][1] != 0)
                    fout_set << static_cast<char>(i + 'a' - 1) << " " << static_cast<char>(j + 'a' - 1) << " " << $letters[i][j][1] / $letters[i][j][0] << " `" << std::endl;
                for(int k{2} ; k < 28 ; ++k){
                    if($letters[i][j][k] != 0)
                        fout_set << static_cast<char>(i + 'a' - 1) << " " << static_cast<char>(j + 'a' - 1) << " " << $letters[i][j][k] / $letters[i][j][0] << " " << static_cast<char>(k + 'a' - 2) << std::endl;
                }
            }
        }
    }
}

}
