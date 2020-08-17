//
//  main.cpp
//  Coin Change
//  https://www.hackerrank.com/challenges/coin-change/problem
//
//  Created by Evan Jackson on 8/16/20.
//  Copyright © 2020 Evan Jackson. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getWays(int total, vector<int> values){
    // vector of vectors so that I can compare answers to preexisting answers
    // to make sure no duplicates exist. Vectors will be sorted before adding.
    // vector is static for recursion
    static vector<vector<int>> answers;
    // temp vector to store answers into, also static for recursion
    static vector<int> temp;
    for(int i = 0; i < values.size(); i++){
        
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    int total, coins, temp;
    vector<int> values;
    cin >> total >> coins;
    for(int i = 0; i < coins; i++){
        cin >> temp;
        values.push_back(temp);
    }
    sort(values.begin(), values.end());
    for(int i = 0; i < values.size(); i++)
        cout << values[i] << endl;
    
}
