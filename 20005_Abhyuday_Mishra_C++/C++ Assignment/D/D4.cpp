/*
    D4. Implement linked list working like Stack.
*/

#include <iostream>

using namespace std;

struct Node 
{
   int data;
   struct Node *next;
};

struct Node* top = NULL;


/*  The push() function takes argument val i.e., value to be pushed into the stack.
    Then a new node is created and val is inserted into the data part.
    This node is added to the front of the linked list and top points to it.
*/
void push(int val) 
{
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
   newnode->data = val;
   newnode->next = top;
   top = newnode;
}



/*  The pop() function pops the topmost value of the stack, if there is any value.
    If the stack is empty then underflow is printed.
*/
void pop() 
{
   if(top==NULL)
   {
    cout<<"Stack Underflow"<<endl;
   }
   else 
   {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}

/*  The display() function displays all the elements in the stack.
    This is done by using ptr that initially points to top but goes till the end of the stack.
    All the data values corresponding ptr are printed.
*/
void display() 
{
   struct Node* ptr;

   if(top==NULL)
   {
    cout<<"stack is empty";
   }
   else 
   {
      ptr = top;
      cout<<"Stack elements are: ";

      while (ptr != NULL) 
      {
         cout<< ptr->data <<" ";
         ptr = ptr->next;
      }
   }
   cout<<endl;
}


int main() 
{
   int ch, val;

   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;

   do 
   {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) 
      {
        case 1: 
        {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
        }

        case 2: 
        {
            pop();
            break;
        }

        case 3: 
        {
            display();
            break;
        }

        case 4: 
        {
            cout<<"Exit"<<endl;
            break;
        }

        default: 
        {
            cout<<"Invalid Choice"<<endl;
        }

      }
    
    }while(ch!=4);

   return 0;
}

/*  OUTPUT

    1) Push in stack 
    2) Pop from stack
    3) Display stack 
    4) Exit
    Enter choice:    
    1
    Enter value to be pushed:
    1000
    Enter choice: 
    1
    Enter value to be pushed:
    2314
    Enter choice: 
    1
    Enter value to be pushed:
    23423124
    Enter choice: 
    2
    The popped element is 23423124
    Enter choice:
    3
    Stack elements are: 2314 1000 
    Enter choice:
    4
    Exit
*/