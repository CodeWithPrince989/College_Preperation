// TRAVERSE(HEAD)

// 1. PTR = HEAD
// 2. While PTR != NULL
//       a. Process PTR->DATA
//       b. PTR = PTR->NEXT
// 3. Stop

// void traverse(Node* head) {
//     Node* temp = head;

//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }