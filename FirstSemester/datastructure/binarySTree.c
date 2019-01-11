#include <stdio.h>
#include <stdlib.h>

typedef struct BST
{
    int data;
    struct BST *left, *right;
} node;

node *new_node, *root;

void insert(node *, node *);
void inorder(node *);
void preorder(node *);
void postorder(node *);
node *get_node();

void main()
{
    int choice;
    int key;

    root = NULL;
    
    printf("\nProgram For Binary Search Tree ");
    while(1)
    {
        printf("\n1.Create");
        printf("\n2. Traverse in Inorder");
        printf("\n3. Traverse in Preorder");
        printf("\n4. Traverse in Postorder");
        printf("\n5. Exit\n");
        printf("\nEnter your choice :");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
                new_node = get_node();
                printf("\nEnter The Element ");
                scanf("%d", &new_node->data);
                if (root == NULL) /* Tree is not Created */
                    root = new_node;
                else
                    insert(root, new_node);      
            break;

        case 2:
            printf("\nBST Traversal in INORDER \n");
            inorder(root);
            break;
        case 3:
            printf("\nBST Traversal in PREORDER \n");
            preorder(root);
            break;
        case 4:
            printf("\nBST Traversal in POSTORDER \n");
            postorder(root);
            break;
        case 5:
            exit (0);
           
        }
    } 
}

node *get_node()
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void insert(node *root, node *new_node)
{
    if (new_node->data < root->data)
    {
        if (root->left == NULL)
            root->left = new_node;
        else
            insert(root->left, new_node);
    }

    if (new_node->data > root->data)
    {
        if (root->right == NULL)
            root->right = new_node;
        else
            insert(root->right, new_node);
    }
}

void inorder(node *temp)
{
    if (temp != NULL)
    {
        inorder(temp->left);
        printf(" %d --->", temp->data);
        inorder(temp->right);
    }
}

void preorder(node *temp)
{
    if (temp != NULL)
    {
        printf(" %d --->", temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

void postorder(node *temp)
{
    if (temp != NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf(" %d --->", temp->data);
    }
}

