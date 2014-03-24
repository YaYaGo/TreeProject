#ifndef _NODE_H_
#define _NODE_H_
class Node
{
public:
Node();
~Node();
void initNode(int data,Node* pLchild,Node* pRchild);
private:
int m_Data;
Node* m_pLchild;
Node* m_pRchild;
};
#endif
