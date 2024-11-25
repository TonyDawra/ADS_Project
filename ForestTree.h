#ifndef FORESTTREE_H
#define FORESTTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include<fstream>
#include "Account.h"

using namespace std;
template <typename T>

class ForestTree {
public:
    ForestTree();
    void readFromTxt(const string& fileName);
    void addAccount(const T& account);
    void addTransaction(double ammount, char type);
    

private:

    struct treeNode {
        T data;                     
        treeNode* firstChild;         
        treeNode* nextSibling;    
        treeNode(T& data);
    };
	typedef treeNode* treeNodeptr;
    treeNodeptr root;
};

#endif // !FORESTTREE_H
