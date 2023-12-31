#include "functions.h"

int main(void)
{
    node *root = NULL;
    bool found = false;
    int value[9] = {9, 4, 20, 1, 6, 15, 170, 0, INT_MIN};
    int value2[9] = {9, 4, 20, 1, 6, 15, 170, INT_MIN, INT_MAX};
    insert_tree(&root, 9);
    insert_tree(&root, 4);
    insert_tree(&root, 6);
    insert_tree(&root, 20);
    insert_tree(&root, 170);
    insert_tree(&root, 15);
    insert_tree(&root, 1);
    for (register int i = 0; i < 9; i++)
    {
        int found = BFS(root, value[i]);
        printf("%d is BFS %d\n", value[i], found);
    }
    printf("=========================================\n");
     for (register int i = 0; i < 9; i++)
    {
        int found = BFS_recursion(root, value[i]);
        printf("%d is BFS %d\n", value[i], found);
    }
    printf("=========================================\n");
    printf("Deleteing\n");
    for (int i = 0; i < 9; i++)
    {
        int done = remove_node(&root, value[i]);
        printf("%d is remove_node %d\n", value[i], done);
    }
    printf("Done\n");

}