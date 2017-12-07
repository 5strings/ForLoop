//
//  main.cpp
//  ForLoop C++
//
//  Created by Eun Jae Lee on 7/12/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    for (int i=0; i != 10; i++) {// i <= 10;
        for (int j=0; j != i+1; j++) {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}
