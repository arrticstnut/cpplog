///
/// @file    test.cc
///

#include "cppLog.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;


void test(){
	cc::LogError("this is error");
	cc::LogWarn("this is warn");
	cc::LogInfo("this is info");
	cc::LogDebug("this is debug");
}

int main(){
	test();
	return 0;
}

