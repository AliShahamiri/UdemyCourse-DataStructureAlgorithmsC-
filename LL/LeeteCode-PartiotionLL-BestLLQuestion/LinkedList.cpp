#include <iostream>

using namespace std;

class Node {
    public:
        int value;
        Node* next;
        Node(int value) {
            this->value = value;
            next = nullptr;
        }
};

class LinkedList {
    private:
        Node* head;
        int length;
        
    public:
        LinkedList(int value) {
            Node* newNode = new Node(value);
            head = newNode;
            length = 1;
        }

        ~LinkedList() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
        }

        void printList() {
            Node* temp = head;
            if (temp == nullptr) {
                cout << "empty";
            } else {
                while (temp != nullptr) {
                    cout << temp->value;
                    temp = temp->next;
                    if (temp != nullptr) {
                        cout << " -> ";
                    }
                }
            }
            cout << endl;
        }

        Node* getHead() {
            return head;
        }

        int getLength() {
            return length;
        }
        
        void makeEmpty() {
            Node* temp = head;
            while (head) {
                head = head->next;
                delete temp;
                temp = head;
            }
            length = 0;
        }

        void append(int value) {
            Node* newNode = new Node(value);
            if (head == nullptr) {
                head = newNode;
            } else {
                Node* currentNode = head;
                while (currentNode->next != nullptr) {
                    currentNode = currentNode->next;
                }
                currentNode->next = newNode;
            }
            length++;
        }

        //   +======================================================+
        //   |                 WRITE YOUR CODE HERE                 |
        //   | Description:                                         |
        //   | - Partition list around value x                      |
        //   | - Return type: void                                  |
        //   |                                                      |
        //   | Tips:                                                |
        //   | - Create two dummy nodes for two new lists           |
        //   | - One list for nodes less than x                     |
        //   | - Another list for nodes greater or equal to x       |
        //   | - Loop through original list                         |
        //   | - Assign nodes to new lists based on value           |
        //   | - Merge the two new lists                            |
        //   | - Update the original list's head                    |
        //   +======================================================+
        void partitionList(int x)
        {  
            if (head == nullptr) return;
            
            Node* headSmall = nullptr;
            Node* headLarge = nullptr;
            
            Node* tempSmall = nullptr;
            Node* tempLarge = nullptr;
            
            Node* temp=head;


            //temp = head;
            
            int ismall = 0;
            int ilarge = 0;
            
            while(temp!=nullptr)
            {
                if (temp->value < x)
                {
                    if (ismall==0)  
                    {
                        headSmall = temp;
                        tempSmall = temp;
                        ismall++;
                    }
                    else
                    {
                        tempSmall->next = temp;
                        tempSmall       = temp;   
                    }
                }
                else
                {
                    if (ilarge==0)  
                    {
                       headLarge = temp;
                       tempLarge = temp;
                       ilarge++;
                    }
                    else   
                    {
                        tempLarge->next = temp;
                        tempLarge       = temp;
                    }
                }
                temp = temp->next;
            }
            if (tempLarge) tempLarge->next = nullptr;
            //tempSmall->next = nullptr;
            if (tempSmall)
            {
                tempSmall->next = headLarge;
                head            = headSmall;
            }
            else
            {
                head = headLarge;
            }
            
        return;    
        }

};


