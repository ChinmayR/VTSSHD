/*
 * GlobalVarStore.cpp
 *
 *  Created on: Jan 29, 2014
 *      Author: chinmay
 */

#include "GlobalVarStore.h"
#include <iostream>
using namespace std;

bool GlobalVarStore::instanceFlag = false;
GlobalVarStore* GlobalVarStore::single = NULL;


GlobalVarStore* GlobalVarStore::getInstance()
{
    if(! instanceFlag)
    {
        single = new GlobalVarStore();
        instanceFlag = true;
        return single;
    }
    else
    {
        return single;
    }
}

void GlobalVarStore::testMethod()
{
    cout << "Method of the singleton class" << endl;
}

GlobalVarStore::GlobalVarStore() {
	// TODO Auto-generated constructor stub

}

GlobalVarStore::~GlobalVarStore() {
	// TODO Auto-generated destructor stub
	instanceFlag = false;
}

