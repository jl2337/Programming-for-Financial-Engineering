//
//  main.cpp
//  1.7 Ex4
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string s[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Satauday"};
    int i;
    cout << "Input\n";
    cin >> i;
    while(i<1||i>7){
        cout << "Again\n";
        cin >>i;
    }
    cout << "Today is: " << s[i-1] << endl;
    return 0;
}
