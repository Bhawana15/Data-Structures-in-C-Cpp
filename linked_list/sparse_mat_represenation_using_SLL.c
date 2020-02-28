// PROGRAM FOR REPRESENTATION OF SPARSE MATRIX USING LINKED LIST
// Sparse matrix of order 4x5 has already been assumed

#include <stdio.h>
#include <stdlib.h>

struct COMPACT_LIST{
		int row;
		int col;
		int value;
		struct COMPACT_LIST *next;
};
typedef struct COMPACT_LIST compact;

void create_node(compact **start, int row, int col, int element);
void print_list(compact **start);

int main()
{
	compact *start = NULL;
	int row, col, index = 0, size = 0, sparse[4][5] = { {0, 0, 1, 0, 0}, {0, 0, 0, 2, 0}, {3, 0, 0, 0, 0}, {0, 0, 0, 0, 4} };
        printf("PROGRAM TO REPRESENT SPARSE MATRIX USING LINKED LIST\n");
        printf("####################################################\n");

        printf("The sparse matrix is :\n");
        for(row = 0 ; row < 4 ; row++){
                for(col = 0 ; col < 5 ; col++)
                        printf("%d\t", sparse[row][col]);
                printf("\n\n");
        }


        for(row = 0 ; row < 4 ; row++)
                for(col = 0 ; col < 5 ; col++)
                        if(sparse[row][col] != 0)
				create_node(&start, row, col, sparse[row][col]);
	print_list(&start);
	return 0;
}

// Function to create a new node
void create_node(compact **start, int row_index, int col_index, int element)
{
	compact *t, *temp = *start;

	// If list is empty
	if(temp == NULL)
	{
		temp = (compact *) malloc(sizeof(compact));
		temp->value = element;
		temp->row = row_index;
		temp->col = col_index;
		temp->next = NULL;
		*start = temp;
	}

	// If the list is not empty
	else
	{
		while(temp->next != NULL)
			temp = temp->next;

		t = (compact *) malloc(sizeof(compact));
		t->value = element;
		t->row = row_index;
		t->col = col_index;
		t->next = NULL;
		temp->next = t;
	}
	return;
}

/* Function to print the linked list */
void print_list(compact **start)
{
	int i = 0;
	while((*start) != NULL)
	{
		i++;
		printf("Node - %d : Value  =  %d,  Row  =  %d,  Column  =  %d,  Address  =  %p\n", i, (*start)->value, (*start)->row, (*start)->col, *start);
		*start = (*start)->next;
	}
	return;
}
