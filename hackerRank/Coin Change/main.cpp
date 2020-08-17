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

using namespace std;



int main(int argc, const char * argv[]) {
    int total, coins, temp;
    vector<int> values;
    
    cin >> total >> coins;
    for(int i = 0; i < coins; i++){
        cin >> temp;
        values.push_back(temp);
    }
    for(int i = 0; i < values.size(); i++)
        cout << values[i] << endl;
    
}
