// lowerbounds and upperbounds STLs are used to return the index of the element that we want , within the container.begin() and container.end() range.

// lower bound syntax :

// int index=lower_bound(cont.begin(),cont.end(),find_element)-cont.begin()

// here cont.end() can be written as cont.begin() + n (you can customize the range)

// Here lower_bound returns the first occurence of the element if its present
// if the element is not present , then it returns the index of the immediate next greater element (in a sorted containers like sets), that returned index
// can be next to the last element of the set.

// upper bound syntax :

// int index=upper_bound(cont.begin(),cont.end(),find_element)-cont.begin()

// again here cont.end() can be written as cont.begin() + n (you can customize the range)

// Here upper_bound returns the index of the element next to the find_element

// if the element is not present , then it returns the index of the immediate next greater element (in a sorted containers like sets) , that returned index
// can be next to the last element of the set.


/*
NOTE :

auto lb=st.lower_bound(2); //gives the index of the element > = find_element
auto ub=st.upper_bound(3); //gives the index of the element > find_element

*/