//
// Created by RACA HAMA on 2019-05-18.
//

#ifndef UNTITLED_IDENTSTR_H
#define UNTITLED_IDENTSTR_H
#include <iostream>
#include "Stroka.h"

using namespace std;
class IdentStr :public Stroka //производный класс - наследует данные-члены базового класса
{
public:
    IdentStr(int = 0);
    IdentStr(char ch);
    IdentStr(const char*);
    IdentStr(const IdentStr&);
    ~IdentStr();
	int operator [] (const char);
	int operator [] (const char*);
    IdentStr& operator = (const IdentStr&);
    char operator [] (int);
    IdentStr operator ~ ();
    friend IdentStr operator +(const IdentStr&, const IdentStr&);
    friend IdentStr operator +(const IdentStr&, const char*);
    friend IdentStr operator +(const char*, const IdentStr&);

};
#endif //UNTITLED_IDENTSTR_H
