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
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
        return false;

    unordered_map<char, char> mapISO;
    unordered_map<char, char> maISO;

    for (int i = 0; i < s.length(); i++)
    {
        char a = s[i];
        char b = t[i];

        if (mapISO.count(a) && mapISO[a] != b)
            return false;

        if (maISO.count(b) && maISO[b] != a)
            return false;

        mapISO[a] = b;
        maISO[b] = a;
    }

    return true;
}

int main()
{
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (isIsomorphic(s, t))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}