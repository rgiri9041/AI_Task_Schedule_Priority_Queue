## Abstract

**Field:** This project is situated within the realm of Computer Science and Artificial Intelligence, focusing on data structure implementation and algorithmic efficiency. It utilizes a Priority Queue (Max-Heap) to solve the real-world problem of task scheduling in AI systems.

**Purpose:** The primary aim of this project is to enable autonomous systems to prioritize critical tasks (e.g., safety protocols) over background tasks (e.g., data logging). This is achieved by implementing a menu-driven C++ application where tasks are assigned priority levels. 
The Max-Heap ensures the highest priority task is always processed first in **O(log n)** time. Additionally, the program allows users to view all pending tasks in order of importance.

**Future Enhancements:** Future iterations of this project involve implementing a Graphical User Interface (GUI) for easier interaction, adding multithreading for concurrent task processing, and allowing dynamic updates to a task's priority while it is still in the queue.

## Data Structure: Priority Queue (Max-Heap)

A Priority Queue is a data structure where each element has a "priority." Elements with higher priorities are served before lower ones. 

In this project, a **Max-Heap** is used. A Max-Heap is a complete binary tree where every parent node is greater than or equal to its children. 
*   Because of this rule, the highest priority task is always at the root (index 0).
*   **Complexity:** Insertion and extraction are extremely fast (**O(log n)**), making it highly scalable for AI workloads.

### Advantages & Disadvantages
**Advantages:**
*   Extremely fast access to the highest priority element (O(1) peek).
*   Efficient insertions and deletions (O(log n)).
*   Dynamic memory allocation.

**Disadvantages:**
*   Searching for a specific task in the middle is slow (O(n)).
*   Not stable (items with the same priority might not maintain FIFO order).
*   Heapify logic is complex to code from scratch.

## Object-Oriented Programming (OOP) Design

This project adheres to the OOP paradigm through **Encapsulation**:
*   The `heap` vector, `heapifyUp`, and `heapifyDown` methods are kept **private** inside the `TaskScheduler` class.
*   This prevents the user or main program from accidentally corrupting the tree structure.
*   The `AITask` is implemented as a `struct` to keep the task name and priority glued together as a single data package, ensuring they are never separated during swaps.
