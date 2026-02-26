#include <iostream>
#include <string>
using namespace std;

    // function for checking freq for two windows
    bool isFreqSame(int freq1[], int freq2[]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length()) return false;

        // creating frequency array for s1
        int freq[26] = {0};
        for (int i = 0; i < s1.length(); i++) {
            int idx = s1[i] - 'a';
            freq[idx]++;
        }

        int windowSize = s1.length();

        for (int i = 0; i < s2.length(); i++) {

            int windowIdx = 0;   // index for new window
            int idx = i;         // index for original window

            // creating window array
            int windowFreq[26] = {0};

            while (windowIdx < windowSize && idx < s2.length()) {
                windowFreq[s2[idx] - 'a']++;   // ✅ fixed line
                windowIdx++;
                idx++;
            }

            if (windowIdx == windowSize && isFreqSame(freq, windowFreq)) {
                return true;
            }
        }

        return false;
    }