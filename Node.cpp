#include "Node.h"
#include <stdio.h>
void Node::initNode(int data,Node* pLchild,Node* pRchild)
{
     printf("initNode:data:%d,lchild:%p,pRchild:%p",data,pLchild,pRchild);
}

Node::Node()
{
    m_Data = 0;
    m_pLchild = NULL;
    m_pRchild = NULL;           
}

Node::~Node()
{
    m_Data = 0;
    m_pLchild = NULL;
    m_pRchild = NULL; 
}
