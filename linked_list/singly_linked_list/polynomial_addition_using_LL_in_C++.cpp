// ERROR
// PROGRAM FOR ADDITION OF TWO POLYNOMIALS USING LINKED LIST IN C++
// The polynomials have been assumed for the sake of simplicity
// p(x) = 3x^2 + 2x + 5
// q(x) = 5x^3 + 2x^2 + 3x
// r(x) = 5x^3 + 5x^2 + 5x + 5

#include <stdio.h>
#include <stdlib.h>

struct POLYNOMIAL_NODE{
	int coefficient;
	int exponent;
	struct POLYNOMIAL_NODE *link;
};
typedef struct POLYNOMIAL_NODE POLY;

void create_node(POLY **poly, int coeff, int power);
void add_poly(POLY **poly1, POLY **poly2, POLY **poly);
void print_poly(POLY **poly);

// Driver Function
int main()
{
        POLY *poly1 = NULL, *poly2 = NULL, *poly;
        printf("PROGRAM FOR ADDITION OF TWO POLYNOMIALS USING LINKED LIST IN C++\n");
        printf("################################################################\n");

        // Create first polynomial
        create_node(&poly1, 3, 2);
        create_node(&poly1, 2, 1);
        create_node(&poly1, 5, 0);

        printf("First Polynomial is :   p(x)  =  ");
        print_poly(&poly1);

        // Create second polynomial
        create_node(&poly2, 5, 3);
        create_node(&poly2, 2, 2);
        create_node(&poly2, 3, 1);

        printf("Second Polynomial is :   q(x)  =  ");
        print_poly(&poly2);

        // Addition of two polynomials
        poly = (POLY *) malloc(sizeof(POLY));
        add_poly(&poly1, &poly2, &poly);

        printf("Addition of two polynomials :   r(x)  =  ");
        print_poly(&poly);
        return 0;
}

// Function to create new node(new term, here)
void create_node(POLY **poly, int coeff, int power)
{
	POLY *t, *temp = *poly;

	// For first term of highest degree
	if(temp == NULL)
	{
		temp = (POLY *) malloc(sizeof(POLY));
		temp->coefficient = coeff;
		temp->exponent = power;
		temp->link = NULL;
		*poly = temp;
	}

	// For other terms
	else
	{
		while(temp->link != NULL)
			temp = temp->link;

		t = (POLY *) malloc(sizeof(POLY));
		t->coefficient = coeff;
		t->exponent = power;
		t->link = NULL;
		temp->link = t;
	}
	return;
}

// Function to add two polynomials
void add_poly(POLY **poly1, POLY **poly2, POLY **poly)
{
	printf("2\n");
	while((*poly1)->link && (*poly2)->link)
	{
		printf("1\n");
		if((*poly1)->exponent == (*poly2)->exponent)
		{
			(*poly)->coefficient = (*poly1)->coefficient + (*poly2)->coefficient;
			(*poly)->exponent = (*poly1)->exponent;
			(*poly1) = (*poly1)->link;
			(*poly2) = (*poly2)->link;
		}
		else if((*poly1)->exponent > (*poly2)->exponent)
		{
			(*poly)->coefficient = (*poly1)->coefficient;
			(*poly)->exponent = (*poly1)->exponent;
			(*poly1) = (*poly1)->link;
		}
		else
		{
			(*poly)->coefficient = (*poly2)->coefficient;
			(*poly)->exponent = (*poly2)->exponent;
			(*poly2) = (*poly2)->link;
		}

		// After addition of one term create new node for another term
		(*poly)->link = (POLY *) malloc(sizeof(POLY));
		(*poly) = (*poly)->link;
		(*poly)->link = NULL;
		printf("2\n");
	}

	while((*poly1)->link || (*poly2)->link)
	{
		
		printf("3\n");
		if((*poly1)->link != NULL)
		{
			(*poly)->coefficient = (*poly1)->coefficient;
			(*poly)->exponent = (*poly1)->exponent;
			(*poly1) = (*poly1)->link;
		}
		if((*poly2)->link != NULL)
		{
			(*poly)->coefficient = (*poly2)->coefficient;
			(*poly)->exponent = (*poly2)->exponent;
			(*poly2) = (*poly2)->link;
		}

		if((*poly1)->link || (*poly2)->link)
		{      
			(*poly)->link = (POLY *) malloc(sizeof(POLY));
                        (*poly) = (*poly)->link;
                        (*poly)->link = NULL;
		}
		printf("4\n");
	}
	return;
}

// Funtion to print the polynomial
void print_poly(POLY **poly)
{
        while((*poly)->link != NULL){
                printf("%dx^%d + ", (*poly)->coefficient, (*poly)->exponent);
                *poly = (*poly)->link;
        }
	// For last term
	printf("%dx^%d\n", (*poly)->coefficient, (*poly)->exponent);
        return 0;
}
