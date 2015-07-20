#include "functions.hpp"

namespace gob {

bool isVowel(char c)
{
    c = std::tolower(c);
    return c == '`' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

}
