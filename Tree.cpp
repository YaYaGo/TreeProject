#include "Tree.h"
#include "Node.h"
#include <stdio.h>
Tree::Tree()
{
 m_pRoot = NULL;
}
Tree::~Tree()
{
 m_pRoot = NULL;
}

void Tree::addNode(int data)
{
     if( m_pRoot == NULL)
     {
         m_pRoot = new Node();
         m_pRoot->initNode(data,NULL,NULL);
     }
}
