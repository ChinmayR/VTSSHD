/*
 * GlobalVarStore.h
 *
 *  Created on: Jan 29, 2014
 *      Author: chinmay
 */

#ifndef GLOBALVARSTORE_H_
#define GLOBALVARSTORE_H_



class GlobalVarStore {

private:
    static bool instanceFlag;
    static GlobalVarStore *single;

    GlobalVarStore();

public:
    static GlobalVarStore* getInstance();
    void testMethod();
    ~GlobalVarStore();
};

#endif /* GLOBALVARSTORE_H_ */
