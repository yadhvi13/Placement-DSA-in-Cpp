#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    unordered_map<string, int> mp;
    
    for (int i = 0; i < list1.size(); i++) {
        mp[list1[i]] = i;
    }
    
    vector<string> result;
    int minSum = INT_MAX;
    
    for (int j = 0; j < list2.size(); j++) {
        if (mp.count(list2[j])) {
            int sum = j + mp[list2[j]];
            
            if (sum < minSum) {
                result.clear();
                result.push_back(list2[j]);
                minSum = sum;
            } 
            else if (sum == minSum) {
                result.push_back(list2[j]);
            }
        }
    }
    
    return result;
}

int main() {
    vector<string> list1 = {"Shogun", "Tapioca Express", "Burger King", "KFC"};
    vector<string> list2 = {"Piatti", "The Grill at Torrey Pines", "Hungry Hunter Steakhouse", "Shogun"};

    vector<string> result = findRestaurant(list1, list2);

    for (auto& s : result) {
        cout << s << " ";
    }

    return 0;
}