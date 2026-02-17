#include "LogCon.h"

using namespace std;

bool NOT(bool a) {
    if (a == true) return false;
    else return true;
}

bool AND(bool a, bool b) {
    if (a && b) return true;
    else return false;
}

bool OR(bool a, bool b) {
    if (a || b) return true;
    else return false;
}

bool IMP(bool a, bool b) {
    if ( a == true && b == false) return false;
    else return true;
}

bool EQU(bool a, bool b) {
    if ( a == b ) return true;
    else return false;
}

bool XOR(bool a, bool b) {
    if ( a != b ) return true;
    else return false;
}

bool FUNC3(bool a, bool b, bool c) {
    
}