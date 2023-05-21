#include "reverse_string.h"

using namespace std;

namespace reverse_string {

string reverse_string(string inc)
{
    string answer = "";

    for (int i = inc.length() -1; i >= 0; i--)
    {
        answer += inc[i];
    }
    return answer;
}

}  // namespace reverse_string
