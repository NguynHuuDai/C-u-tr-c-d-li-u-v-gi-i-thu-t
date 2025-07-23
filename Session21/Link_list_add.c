#include <stdlib.h>
//
// Created by hp on 7/23/2025.
//
//Tạo cấu trúc của một node
typedef struct Node
{
    int data;
    struct Node *next;

}Node;
//Viết hàm tạo node
Node *preNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
//Tạo mảng chứa danh sách các con trỏ trỏ tới từng đỉnh
//
Node *linkListArr[4];
//Viết hàm tạo liên kết
Node* createNodeTree(int u, int v)
{
    Node *newNode = createNodeTree(u);
    newNode->next = createNodeTree(u);
    newNode-> createNodeTree


}
int main()
{
    for (int i = 0; i < 4; i++)
    {
        linkListArr[i]= NULL;
    }
    return 0;
}