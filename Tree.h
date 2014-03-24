#ifndef _TREE_H_
#define _TREE_H_
#include "Node.h"
class Tree
{
public:
Tree();
~Tree();
void addNode(int data);
private:
Node* m_pRoot;

};

#endif
