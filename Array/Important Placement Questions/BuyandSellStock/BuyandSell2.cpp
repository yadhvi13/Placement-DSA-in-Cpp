#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int buyandsell(vector<int> &prices){
     int profit = 0;
     int n = prices.size();

     for(int i=1; i<n; i++){
        if(prices[i] > prices[i-1]){
            profit = profit + prices[i] - prices[i-1];
        }
     }
     return profit;
}

int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;

    vector<int> prices(n);
    cout << "enter the elem in array: ";
    for(int i=0; i<n; i++){
        cin >> prices[i];
    }

    cout << buyandsell(prices) << endl;
    return 0;
}