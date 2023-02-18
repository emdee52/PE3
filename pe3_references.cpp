#include <iostream>

// Name: Md Mahmud
//

// Write any functions you need here!

void increment(int * x) {
    (*x)++;
}

void increment2(int & x){
    x++;
}

void increment3(const int &ref, int * ptr){
    (*ptr)++;
    std::cout << "ref: "<< ref << std::endl;
    std::cout << "ptr: "<< *ptr << std::endl;
}

int main() {
    // Add as many prints to cout as you need to answer the questions.
    // Leave them in your code when you turn it in.
    // If you have lines of code that cause errors that test the questions,
    // leave this code in your file but comment it out.
    
    // 1) Declare an int
    int x = 0;
    // 2) Declare a pointer to that int
    int *y = &x;
    // 3) Increment the int via the pointer
    (*y)++;
    // 4) Declare a reference to your int
    int &z = x;
    // 5) Increment the int via the reference
    z++;
    // 6) When you increment the int via the variable declared in #1, which
    // variables will be modified to see the changes? (the pointer , reference or both?)
    // Answer: Both the pointer and the reference will see changes
    std::cout << x << std::endl;
    std::cout << *y << std::endl;
    std::cout << z << std::endl;

    // 7) When you increment the int via the pointer declared in #2, which
    // variables will be modified to see the changes?
    // Answer: Both the pointer and the reference will see changes

    // 8) When you increment the int via the reference declared in #4, which
    // variables will be modified to see the changes?
    // Answer:  Both the pointer and the reference will see changes

    // 9) Write a function that takes an int * parameter. How would you pass the 
    // variable from #1 into this function? 
    // Modify the parameter within the function using any operation of your choice.(write the function definition and call below)
    // Does it update the value you originally passed to the function? Yes
    // void increment(int * x)
    increment(&x);
    std::cout << x << std::endl;


    // 10) Can you pass your reference from #4 to the function from #9 without accessing its address?
    // Answer: No


    // 11) Write a function that takes an int & parameter. How would you pass the 
    // variable from #1 into this function? 
    // Modify the parameter using any operation of your choice.(write the function definition and call below)
    // Does it update the value you originally passed to the function? Yes
    // void increment2(int & x)
    increment2(z);
    std::cout << z << std::endl;
    // 12) Can you pass your pointer from #2 to the function from #11 without dereferencing it?
    // Answer: No its not possible

    // 13) Can you pass your reference from #4 to the function from #11?
    // Answer: Yes
    increment2(z);
    std::cout << z << std::endl;
    // 14) Write a function that takes one const reference input parameter and one pointer
    // output parameter. The function should fill in the value of the output parameter based
    // on the value of the input parameter. (what it does exactly is up to you).
    // Call your function 3 times below. Be sure to include output as necessary to be sure
    // your function works as described.
    increment3(z, y);
    increment3(z, y);
    increment3(z, y);
    // 15) What is/are the difference(s) between output parameters and return values?
    // Answer: The output parameter returns the current value of the parameter back to the function it was called from. Return values indicate a function has been terminated and must be stored in a variable.

    // 16) Create a custom class with at least one private field/class attribute. Overload the == and + operator for this class
    // such that == can be used to compare the objects of the class and + can be used to add
    // 2 objects of the class together. Implement an appropriate constructor for your class.
    // When you overload these operators, the resulting return value should make sense.
    // Instantiate at least 2 objects of this class and perform the == and + operations on them.
    // hint: for operator+, the function signature when implemented as a member function of the Object class is:
    // Object operator+(const Object &other)
    // Answer:
}
