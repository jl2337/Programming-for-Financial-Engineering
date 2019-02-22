//
//  main.cpp
//  1.9 Ex2
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, const char * argv[]) {
    fstream file;
    file.open("Ex2.txt",ios::app); // creat a file
    if(!file){
        cout << "Failed to open file\n";
        return 0;   // if failed to creat, exit program
    }
    else{
        cout << "Succeed to creat file\n";  // if succeed then print succeed to screen
    }
    char c;
    cout << "Input now\n";
    while((c = getchar())!=EOF){ // for MacOS, EOF is inputted by control + D
        file << c;
    }
    return 0;
}
