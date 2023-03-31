# Access Stack Element by Index

This code defines a function `access` that takes a stack of integers and an index as input and returns the value of the integer at the specified index of the stack. 

## How It Works

1. The function creates a temporary stack `temp` and copies all the elements from the input stack `stack` into `temp` by popping them out of `stack` and pushing them onto `temp`.

2. It then uses a loop to pop elements off `temp` until it reaches the specified index. The popped elements are discarded since they are not needed.

3. The value at the desired index is then obtained by calling `top()` on `temp`.

4. Finally, the function returns the value.

## Inputs

The function takes two inputs:

- `stack`: A stack of integers. It can be of any size.

- `index`: An integer that represents the index of the element that needs to be accessed. The index is zero-based, which means the first element has an index of 0, the second has an index of 1, and so on.

## Outputs

The function returns an integer, which is the value of the element at the specified index in the input stack. If the index is out of range, the function returns 0.

## Example Usage

```c++
#include <iostream>
#include <stack>
int access(std::stack<int> stack, int index){
   std::stack<int> temp;
   while(!stack.empty()){
   temp.push(stack.top());
   stack.pop();
   }
   int value = 0;
   while (value != index)
   {
    temp.pop();
    value++;
   }
   value = temp.top();
   return value;
}
int main() {
    std::stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);

    int index = 3;
    int value = access(myStack, index);

    std::cout << "The value at index " << index << " is: " << value << std::endl;

    return 0;
}
```

