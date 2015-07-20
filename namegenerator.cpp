#include "namegenerator.hpp"

namespace gob {

NameGenerator::NameGenerator() : $filePath(), $simpleLetters() {}

std::string NameGenerator::generate(const std::string& filePath, int min, int max)
{
    if($filePath != filePath){
        $filePath = filePath;
        std::ifstream fin{$filePath.c_str()};

        if(!fin) return "ERROR FilePath";

        char prev{}, crt{}, next{};
        double freq{};

        while(!fin.eof()){
            fin >> prev >> crt >> freq >> next;
            $simpleLetters[prev - 'a' + 1][crt - 'a' + 1][0].push_back(next - 'a' + 1);
            $simpleLetters[prev - 'a' + 1][crt - 'a' + 1][1].push_back(freq);
        }
    }

    std::string name{};
    unsigned seed{static_cast<unsigned>(std::chrono::system_clock::now().time_since_epoch().count())};
    std::minstd_rand0 rd{seed};
    float goal{(rd()%100) / 100.0f}, fcrt{0.0};
    char prev{0}, crt{0}, next{};
    int cmpt{0}, length{0};

    do{
        next = $simpleLetters[prev][crt][0][cmpt];
        fcrt += $simpleLetters[prev][crt][1][cmpt];
        ++cmpt;
    }while(fcrt < goal);

    name = static_cast<char>(next + 'A' - 1);
    ++length;
    prev = crt;
    crt = next;

    while(1){
        int cmptWhile{0};
        do{
            cmpt = 0;
            goal = (rd()%100) / 100.0f;
            fcrt = 0.0;
            do{
                next = $simpleLetters[prev][crt][0][cmpt];
                fcrt += $simpleLetters[prev][crt][1][cmpt];
                ++cmpt;
            }while(fcrt < goal);
            if(++cmptWhile >= 26) break;
        }while(length <= min && next == 0);

        if(next == 0) break;

        name += static_cast<char>(next + 'a' - 1);
        ++length;
        prev = crt;
        crt = next;
        if(length >= max) break;
    }
    return name;
}

}
