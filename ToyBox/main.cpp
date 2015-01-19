//
//  main.cpp
//  ToyBox
//
//  Created by mikael korpela on 08/01/15.
//  Copyright (c) 2015 mikael korpela. All rights reserved.
//

#include <iostream>
#include <core.hpp>

// the blody easylogging requires this..
// (I hate when random libraries pollute my codebase with their nonsense)
INITIALIZE_EASYLOGGINGPP

int main(int argc, const char * argv[])
{
    // configure logging
    el::Loggers::reconfigureAllLoggers(el::ConfigurationType::Format, "%datetime - %level@%fbase:%line: %msg");
    
    // insert code here...
    LOG(INFO) << "Hello logging";
    return 0;
}
