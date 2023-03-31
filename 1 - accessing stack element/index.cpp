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