#include <string.h>
#include <malloc.h>
#include <stdio.h>


struct element
{
    int number;
    int priority;

    struct element* right;
    struct element* left;


} *root, * reader, * reader_supp;


void root_input(int k, int p) {

    root = malloc(sizeof(struct element));

    root->number = k;

    root->priority = p;

    root->right = NULL;

    root->left = NULL;
}


int search(void) {

    int search = 1;

    if (root == NULL) {
        
        search = 0;
    }
    
    return search;
}


void input(int k, int p) {

    reader = root;
    
    
    struct element* tmp = malloc(sizeof(struct element));

    tmp->number = k;

    tmp->priority = p;

    tmp->right = NULL;

    tmp->left = NULL;



    while (reader != NULL) {

        if (tmp->priority <= reader->priority) {

            if (reader->left != NULL) {

                reader = reader->left;
            }
            else {

                reader->left = tmp;
                reader = NULL;
            }
        }
        else {

            if (reader->right != NULL) {

                reader = reader->right;
            }
            else {

                reader->right = tmp;
                reader = NULL;
            }
        }
    }
}


int output(void) {

    int num;

    reader = root;
    reader_supp = root;

    while (reader != NULL) {

        if (reader->right == NULL) {

            num = reader->number;


            // Четыре способа удаления числа из бинарного дерева поиска, соответствующих четырем разным условиям: 

            // 1)Если в дереве только одно число, которое является корнем
            if (reader->left == NULL && reader->right == NULL && reader == root) {

                reader = NULL;
                root = NULL;
            }

            // 2)Если удаляемое число является листом дерева
            else if (reader->left == NULL && reader->right == NULL && reader != root) {
                
                reader_supp->right = NULL;
            }

            // 3)Если из корня дерева "выходит" только одна ветвь и корень дерева является удаляемым числом
            else if ((reader->left != NULL || reader->right != NULL) && reader == root) {
                
                reader = reader->left;
                root = reader;                                
            }

            // 4)Если удаляемое число имеет только одного потомка и не является корнем дерева
            else {
                                  
                reader_supp->right = reader->left;
            }


            reader = NULL;
        }
        else {

            reader_supp = reader;
            reader = reader->right;
        }
    }

    return num;
}