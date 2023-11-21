/*
    D3. Implement linked list working like Queue.
*/

#include <iostream>

using namespace std;


struct node {
   int data;
   struct node *next;
};


struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;

/*  The function Insert() inserts an element into the queue.
    If rear is NULL,then the queue is empty and a single element is inserted.
    Otherwise, a node is inserted after rear with the required element and then that node is set to rear.
*/
void Insert() {
   int val;

   cout<<"Insert the element in queue : "<<endl;
   cin>>val;

   if (rear == NULL) 
   {
      rear = (struct node *)malloc(sizeof(struct node));
      rear->next = NULL;
      rear->data = val;
      front = rear;
   } 
   else 
   {
      temp=(struct node *)malloc(sizeof(struct node));
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
   }
}


/*  In the function Delete(), 
    if there are no elements in queue then it is underflow condition. 
    If there is only one element in the queue that is deleted and front and rear are set to NULL.
*/
void Delete() {
   temp = front;

   if (front == NULL) {
      cout<<"Underflow"<<endl;
      return;
   }
   else if (temp->next != NULL) 
   {
      temp = temp->next;
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      free(front);
      front = temp;
   } 
   else 
   {
      cout<<"Element deleted from queue is : "<<front->data<<endl;
      free(front);
      front = NULL;
      rear = NULL;
   }
}

/*  In the function display(), if front and rear are NULL then queue is empty.
    Otherwise, all the queue elements are displayed using a while loop with the help of temp variable.
*/
void Display() {
   temp = front;

   if ((front == NULL) && (rear == NULL)) 
   {
      cout<<"Queue is empty"<<endl;
      return;
   }

   cout<<"Queue elements are: ";

   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}

/*  The function main() provides a choice to the user if they want to insert, delete or display the queue.
    According to the user response, the appropriate function is called using switch.
*/
int main() 
{
   int ch;

   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {

      cout<<"Enter your choice : "<<endl;
      cin>>ch;

      switch (ch) 
      {
        case 1: 
            Insert();
            break;

        case 2:
            Delete();
            break;

        case 3:
            Display();
            break;

        case 4:
            cout<<"Exit"<<endl;
            break;

        default:
            cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);


   return 0;
}

/* OUTPUT

   1) Insert element to queue
   2) Delete element from queue        
   3) Display all the elements of queue
   4) Exit
   Enter your choice : 
   1
   Insert the element in queue : 
   2
   Enter your choice : 
   2
   Element deleted from queue is : 2
   Enter your choice :
   13
   Invalid choice
   Enter your choice :
   3
   Queue is empty
   Enter your choice :
   4
   Exit
*/