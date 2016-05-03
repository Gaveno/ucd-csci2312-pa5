//
// Created by Gavin on 5/2/2016.
//

#ifndef UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H

#include <string>

using std::string;

namespace CS2312 {
    template<typename T>
    class less {
    public:
        bool operator()(const T &a, const T &b) {
            return (a < b);
        }
    };

    template<>
    class less<string> {
    public:
        bool operator()(const string &a, const string &b) {
            return (a[0] < b[0]);
        }
    };

    template<>
    class less<const char *> {
    public:
        bool operator()(const char *a, const char *b) {
            return (*a < *b);
        }
    };
}
#endif //UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H
