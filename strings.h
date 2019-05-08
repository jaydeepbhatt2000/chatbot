#ifndef STRINGS_H
#define STRINGS_H

//#endif // STRINGS_H
//#ifndef __STRING_H__
//#define __STRING_H__

#pragma warning(disable: 4786)
#include <string>
#include <vector>

const int MAX_RESP = 4;

typedef std::vector<std::string> vstring;


bool isPunc(char c);
void cleanString( std::string &str );
void UpperCase( std::string &str );
void copy(const char *array[], vstring &v);
void copy_new(const char *vv_new[] , vstring &v_new);

template<typename T>
void shuffle(T &array, size_t size) {
    for(size_t i = 0; i < size; ++i) {
        int index = rand() % size;
        std::swap(array[i], array[index]);
    }
}

#endif
