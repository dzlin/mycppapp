/* 
 * File:   main.cpp
 * Author: gzdzl
 *
 * Created on 2015年12月25日, 下午8:04
 */

#include <iostream>
#include "app/Core.h"

using namespace std;
using namespace app;

int main(int argc, char** argv) {

    Core core;
    core.setName("zhangsan");

    cout << "my name is " << core.getName() << endl;
    int i;
    cin >> i;
    return 0;
}

