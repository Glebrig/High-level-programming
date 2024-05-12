#pragma once

#include <cstddef>
#include <string>
#include "./CMenuItem.h"

using namespace std;

namespace SGP{
class CMenu {
    public:
        CMenu(string, CMenuItem *, size_t);
        int getSelect() const;
        bool isRun() const;
        string getTitle();
        size_t getCount() const;
        CMenuItem *getItems();
        void print();
        int runCommand();
        std::string username;
        std::string password;
        int k1=0;
        int k2=0;
        
    private:
        int select{-1};
        size_t count{};
        bool running{};
        string title{};
        CMenuItem *items{};
};
}