First, if either list1 or list2 is empty, return the remaining list.

Then, create a head node that point to the head of the list that has lower value. Then the current node will point to the head node. Then, we will loop through the list until one of the list is empty. In each iteration, we will compare the value of the current node of each list. If the value of the current node of list1 is smaller, we will set the next node of the current node to the current node of list1. Then, we will move the current node of list1 to the next node. If the value of the current node of list2 is smaller, we will set the next node of the current node to the current node of list2. Then, we will move the current node of list2 to the next node. Finally, we will return the next node of the head node.

The time complexity of this algorithm is O(n + m), where n is the length of list1 and m is the length of list2. The space complexity of this algorithm is O(1).

