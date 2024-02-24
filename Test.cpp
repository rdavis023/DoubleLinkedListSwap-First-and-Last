#include <iostream>
#include "main.cpp"

using namespace std;


//  +=====================================================+
//  |                                                     |
//  |          THE TEST CODE BELOW WILL PRINT             |
//  |              OUTPUT TO "USER LOGS"                  |
//  |                                                     |
//  |  Use the output to test and troubleshoot your code  |
//  |                                                     |
//  +=====================================================+


static void test() {

    // Helper function to check test result
    auto checkTestResult = [](bool condition) {
        cout << (condition ? "PASS" : "FAIL") << endl;
    };

    // Test 1: Initializes With Correct Value
    {
        cout << "\n------ DoublyLinkedList Test: Initializes With Correct Value ------\n";

        DoublyLinkedList dll(5);

        cout << "Expected Head Value: 5\n";
        cout << "Actual Head Value: " << dll.getHead()->value << "\n";
        cout << "Expected Tail Value: 5\n";
        cout << "Actual Tail Value: " << dll.getTail()->value << "\n";
        cout << "Expected Length: 1\n";
        cout << "Actual Length: " << dll.getLength() << "\n";

        checkTestResult(
            dll.getHead()->value == 5 && 
            dll.getTail()->value == 5 &&
            dll.getLength() == 1
        );
    }

    // Test 2: Initializes Head and Tail To Same Node
    {
        cout << "\n------ DoublyLinkedList Test: Initializes Head and Tail To Same Node ------\n";

        DoublyLinkedList dll(10);

        cout << "Checking if head and tail point to the same node...\n";

        checkTestResult(dll.getHead() == dll.getTail());
    }

    // Test 3: Initializes Next And Prev To Null
    {
        cout << "\n------ DoublyLinkedList Test: Initializes Next And Prev To Null ------\n";

        DoublyLinkedList dll(20);

        cout << "Checking if next and prev pointers are null...\n";

        checkTestResult(
            dll.getHead()->next == nullptr &&
            dll.getHead()->prev == nullptr
        );
    }

    // Test 4: Initializes With Negative Value
    {
        cout << "\n------ DoublyLinkedList Test: Initializes With Negative Value ------\n";

        DoublyLinkedList dll(-3);

        cout << "Expected Head Value: -3\n";
        cout << "Actual Head Value: " << dll.getHead()->value << "\n";
        cout << "Expected Tail Value: -3\n";
        cout << "Actual Tail Value: " << dll.getTail()->value << "\n";

        checkTestResult(
            dll.getHead()->value == -3 &&
            dll.getTail()->value == -3
        );
    }

    // Test 5: Initializes With Zero Value
    {
        cout << "\n------ DoublyLinkedList Test: Initializes With Zero Value ------\n";

        DoublyLinkedList dll(0);

        cout << "Expected Head Value: 0\n";
        cout << "Actual Head Value: " << dll.getHead()->value << "\n";
        cout << "Expected Tail Value: 0\n";
        cout << "Actual Tail Value: " << dll.getTail()->value << "\n";

        checkTestResult(
            dll.getHead()->value == 0 &&
            dll.getTail()->value == 0
        );
    }

}

