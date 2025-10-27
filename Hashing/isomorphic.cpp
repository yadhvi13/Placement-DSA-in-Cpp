// int mapST[256] = {0};
//         int mapTS[256] = {0};

//         for (int i = 0; i < s.size(); i++) {
//             if (mapST[s[i]] != mapTS[t[i]]) return false;
//             mapST[s[i]] = i + 1;
//             mapTS[t[i]] = i + 1;
//         }
//         return true;
//     }

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
        return false;

    unordered_map<char, char> mapST;
    unordered_map<char, char> mapTS;

    for (int i = 0; i < s.length(); i++)
    {
        char a = s[i];
        char b = t[i];

        // If mapping exists, check consistency
        if (mapST.count(a) && mapST[a] != b)
            return false;
        if (mapTS.count(b) && mapTS[b] != a)
            return false;

        // Create mapping if not present
        mapST[a] = b;
        mapTS[b] = a;
    }

    return true;
};