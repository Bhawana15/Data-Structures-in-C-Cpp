// PROGRAM FOR REPRESENTATION OF POLYNOMIAL USING LINKED LIST IN C

#include <stdio.h>
#include <stdlib.h>

struct POLYNOMIAL_NODE{
        int coefficient;
        int exponent;
        struct POLYNOMIAL_NODE *link;
};
typedef struct POLYNOMIAL_NODE polynomial;

void create_node(polynomial **poly, int coeff, int pow);
void print_poly(polynomial **poly);

// Driver function
int main()
{
	polynomial *poly = NULL;
	int i, degree, coeff;
        printf("PROGRAM FOR REPRESENTATION OF POLYNOMIAL USING LINKED LIST IN C\n");
        printf("##################################################################\n");

	// Taking input
	printf("Enter degree of the polynomial :\t");
	scanf("%d", &degree);
	for(i = degree ; i >= 0 ; i--)
	{
		printf("Enter coefficient for term-%d of power-%d\n", i, i);
		scanf("%d", &coeff);
		create_node(&poly, coeff, i);
	}
	print_poly(&poly);

        return 0;
}

// Function to create a new node
void create_node(polynomial **poly, int coeff, int pow)
{
	polynomial *t, *temp = *poly;

	// First term of polynomial
	if(temp == NULL){
		temp = (polynomial *) malloc(sizeof(polynomial));
		temp->coefficient = coeff;
		temp->exponent = pow;
		temp->link = NULL;
		*poly = temp;
	}                                                                        
	// Other terms
	else{
		while(temp->link != NULL)
			temp = temp->link;
		
		t = (polynomial *) malloc(sizeof(polynomial));
		t->coefficient = coeff;
		t->exponent = pow;
		t->link = NULL;
		temp->link = t;
	}
	return;
}

// Function to print the polynomial - Representation
void print_poly(polynomial **poly)
{
	printf("POLYNOMIAL IS :   ");
	while((*poly)->link != NULL){
		printf("%dx^%d + ", (*poly)->coefficient, (*poly)->exponent);
		*poly = (*poly)->link;
	}
	printf("%dx^%d\n ", (*poly)->coefficient, (*poly)->exponent);
	return;
}
