//
//  main.cpp
//  1.4 Ex6
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char c;
    int number_of_0 = 0, number_of_1 = 0, number_of_2 = 0, number_of_3 = 0, number_of_4 = 0;
    cout << "Input now\n";
    while((c = getchar())!=EOF){
        switch (c) {
            case '0':
                number_of_0++;
                break;
            case '1':
                number_of_1++;
                break;
            case '2':
                number_of_2++;
                break;
            case '3':
                number_of_3++;
                break;
            case '4':
                number_of_4++;
                break;
            default:
                break;
        }
    }
    cout << "Number of 0: " << number_of_0 << endl;
    cout << "Number of 1: " << number_of_1 << endl;
    cout << "Number of 2: " << number_of_2 << endl;
    cout << "Number of 3: " << number_of_3 << endl;
    cout << "Number of 4: " << number_of_4 << endl;
    return 0;
}
