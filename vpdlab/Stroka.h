//
// Created by RACA HAMA on 2019-05-18.
//

#ifndef UNTITLED_STROKA_H
#define UNTITLED_STROKA_H

#include <iostream>
using namespace std;
class Stroka
{
protected:
    int len;
    char* pCh;
public:

    Stroka(int = 0); //конструктор по умолчанию
    Stroka(char ch);
    Stroka(const char*);
    Stroka(const Stroka&);
    ~Stroka();
    char* getStr(void)const
    {
        return pCh;
    }
    int getLen(void)const
    {
        return len;
    }
    void Show(void);
};
#endif //UNTITLED_STROKA_H
