//
//  main.cpp
//  1.8 Ex1
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
using namespace std;

struct Article {
    string Art_Number;
    int Quantity;
    string Description;
};

void my_print(Article *obj){
    cout << obj->Art_Number << endl;
    cout << obj->Quantity << endl;
    cout << obj->Description << endl;
}
int main(int argc, const char * argv[]) {
    Article my_art = {"188005038",1,"Rutgers MSMF"};
    my_print(&my_art);
    return 0;
}


