#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int numWaterBottles(int numBottles, int numExchange){
        int ans = numBottles;
        int current = numBottles;
        int emptyBottles = 0;
        while(current > 0){
            emptyBottles += current;
            current = 0;
            if(emptyBottles >= numExchange){
                int newBottles = emptyBottles / numExchange;
                emptyBottles %= numExchange;
                current = newBottles;
                ans += newBottles;
            } else{
                break;
            }
        }
        return ans;
    }
};

