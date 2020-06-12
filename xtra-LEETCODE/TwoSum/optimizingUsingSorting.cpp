// NOT COMPILED
// TWO SUM PROBLEM 
// SORT THE ARRAY AND THEN APPLY BINARY SEARCH (WHICH IS VERY FAST) ON IT

#include <iostream> 
#include <vector>                         
using namespace std;           

class Sum {
  private :
    int target;
  public:
    Sum () {
        target = 9;
    }
    int* twoSum (int* v, int* sol);
    void printResult (int* sol, int v[]);
};

void Sum::twoSum (std::vector<int> &v, int* sol) {
        int length = sizeof(*v);
        v.sort (0, length);
        int toFind, mid, beg= 0 , end = length - 1;
        for (int i = 0 ; i < length ; i++) {
            toFind = target - *(v+i);
            mid = (beg + (length - beg))/2;
            while (beg <= end) {
            	if (toFind == *(v+mid)) {
            	    *sol = mid;
            		*(sol + 1) = i;
            		return sol;
            	}
            	else {
            		if (toFind > *(v+mid))
            			beg = mid + 1;
            		else
            			end = mid;
            	}
            }
        }
        return NULL;
}
    
void Sum::printResult (int* sol, vector<int> &v) {
    cout << "Elements that add upto 9 are :  " << v[*sol] << " and " << v[*(sol + 1)] << endl;
    return;
}

void print (vector<int> &v, int len) {
    vector<int>::const_iterator pos;
    for (pos = v.begin(); pos != v.end(); ++pos)
    	cout << *pos << "   ";
    cout << endl;
    return;
}


int main() {
    Sum s;
    int sol[2];
    vector<int> v = {2, 7, 11, 15};
    cout << "Array is :  ";
    print (v, 4);
    int *solution = s.twoSum(v, sol);
    if (solution != NULL){
       s.printResult(solution, v);
    }
    else{
        cout << "Sum not found" << endl;
    }
    return 0;
}