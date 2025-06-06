#include <iostream>
using namespace std;

int main()
{
    int choice;
    int arr[1000];
    int size = 0;

    while (true)
    {
        cout << "\n--- Menu ---\n";
        cout << "1. Add element to an array" << endl;
        cout << "2. Display elements of array" << endl;
        cout << "3. Delete element from array" << endl;
        cout << "4. Sort array" << endl;
        cout << "5. Search element" << endl;
        cout << "6. Find average of elements in array" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            // Add element
            if (size < 1000)
            {
                cout << "Enter an element to add: ";
                cin >> arr[size++];
            }
            else
            {
                cout << "Array is full!" << endl;
            }
            break;

        case 2:
            // Display elements
            if (size == 0)
            {
                cout << "Array is empty." << endl;
            }
            else
            {
                cout << "Array elements:\n";
                for (int i = 0; i < size; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;

        case 3:
            // Delete element
            if (size == 0)
            {
                cout << "Array is empty. Nothing to delete." << endl;
                break;
            }

            int delete_element, index = -1;
            cout << "Enter an element to delete: ";
            cin >> delete_element;

            for (int i = 0; i < size; i++)
            {
                if (arr[i] == delete_element)
                {
                    index = i;
                    break;
                }
            }

            if (index == -1)
            {
                cout << "Element not found." << endl;
            }
            else
            {
                for (int i = index; i < size - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                size--;
                cout << "Element deleted." << endl;
            }
            break;

        case 4:
            // Sort array (Bubble Sort)
            if (size == 0)
            {
                cout << "Array is empty. Nothing to sort." << endl;
                break;
            }

            for (int i = 0; i < size - 1; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            cout << "Array sorted." << endl;
            break;

        case 5:
            // Search element
            if (size == 0)
            {
                cout << "Array is empty. Nothing to search." << endl;
                break;
            }

            int search_element;
            cout << "Enter an element to search: ";
            cin >> search_element;
            index = -1;

            for (int i = 0; i < size; i++)
            {
                if (arr[i] == search_element)
                {
                    index = i;
                    break;
                }
            }

            if (index == -1)
            {
                cout << "Element not found." << endl;
            }
            else
            {
                cout << "Element found at index: " << index << endl;
            }
            break;

        case 6:
            // Calculate average
            if (size == 0)
            {
                cout << "Array is empty. Cannot calculate average." << endl;
                break;
            }

            float sum = 0;
            for (int i = 0; i < size; i++)
            {
                sum += arr[i];
            }

            cout << "The average is: " << (sum / size) << endl;
            break;

        case 7:
            // Exit
            cout << "Exiting program." << endl;
            return 0;

        default:
            cout << "Invalid choice! Enter a number between 1 and 7." << endl;
            break;
        }
    }

    return 0;
}
