#include <iostream>
#include "LinkedList.cpp"

using namespace std;


//  +=====================================================+
//  |                                                     |
//  |          THE TEST CODE BELOW WILL PRINT             |
//  |              OUTPUT TO "USER LOGS"                  |
//  |                                                     |
//  |  Use the output to test and troubleshoot your code  |
//  |                                                     |
//  +=====================================================+

int main()
    {

       /* cout << "\n------ Test: PartitionEmptyList ------\n";
        
        LinkedList list(1);
        list.makeEmpty();
        
        cout << "BEFORE:    ";
        list.printList();
        
        cout << "partitionList(3)\n";
        cout << "EXPECTED:  empty\n";
        
        list.partitionList(3);
        
        cout << "ACTUAL:    ";
        list.printList();
        */

        cout << "\n------ Test: PartitionSingleElement ------\n";
        
        LinkedList list(1);
        
        cout << "BEFORE---:    ";
        list.printList();
        
        cout << "partitionList(3)\n";
        cout << "EXPECTED:  1\n";
        
        list.partitionList(3);
        
        cout << "ACTUAL:    ";
        list.printList();


/*
        cout << "\n------ Test: PartitionMixedNumbers ------\n";
        
        LinkedList list(1);
        list.append(4);
        list.append(3);
        list.append(2);
        list.append(5);
        list.append(2);
        
        cout << "BEFORE:    ";
        list.printList();
        
        cout << "partitionList(3)\n";
        cout << "EXPECTED:  1 -> 2 -> 2 -> 4 -> 3 -> 5\n";
        
        list.partitionList(3);
        
        cout << "ACTUAL:    ";
        list.printList();
*/        
        return 0;
               
       
    }



