#ifndef TREE_HPP
#define TREE_HPP

#include "Client.hpp"
#include "Tree.hpp"
//#include "url/path.hpp"

using yadisk::Client;
using yadisk::ops::Tree;
 
namespace yadisk 
{
namespace ops {
 
/**
��������� ������ �����
\param[in] ������ �� client-yadisk
\param[in] ����
\return ���������� ������ - ������ �����
**/
  Tree tree(Client& client, path home = '/') ;
 
 /**
���������� ������
\param[in] ��������� �� ������
\param[in] ����
**/ 
 
 //void recursive_add(Tree& input, string path, yadisk::ops::Node* parent = NULL)
 
  
}
}

#endif