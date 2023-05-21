#include "pangram.h"
#include <string>
#include <cctype>
#include <iostream>
#include <algorithm>

using namespace std;

namespace pangram {

bool is_pangram(string inc)
{
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::transform(inc.begin(), inc.end(), inc.begin(), ::toupper);

    if (inc.length() < 25)
        return false;
    for (char c : alpha)
    {
        cout << c << endl;
        if (!inc.find(c))
        {
            return false;
        }
    }
    return true;
}

}  // namespace pangram
