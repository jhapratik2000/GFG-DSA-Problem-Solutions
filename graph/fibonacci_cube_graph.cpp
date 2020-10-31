// CPP code to find vertices in a fibonacci
// cube graph of order a
#include<iostream>
using namespace std;

// function to find fibonacci number
int fibonacci(int a)
{
    if (a<=1)
        return a;
    return fibonacci(a-1) + fibonacci(a-2);
}

// function for finding number of vertices
// in fibonacci cube graph
int Vertices(int a)
{
    // return fibonacci number for f(a + 2)
    return fibonacci(a + 2);
}

// driver program
int main()
{
    // a is the order of the graph
    int a = 3;
    cout <<Vertices(a);
    return 0;
}

/*This code is contributed by pratfi*/
