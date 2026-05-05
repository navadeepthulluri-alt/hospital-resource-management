
# 🏥 Patient Transfer Graph & Hospital Resource Management

## 📌 Project Title

Patient Transfer Graph using C (CRUD-Based Hospital Resource Management)

## 👥 Team Members

* Member 1
* Member 2
* Member 3

## ❗ Problem Statement

Hospitals often need to manage patient transfers between departments or facilities while tracking resource availability (beds, doctors, etc.).
This project implements a graph-based system where:

* Each node represents a hospital/department
* Edges represent patient transfers between them

The system allows users to perform CRUD operations to manage hospital nodes and visualize connections.

## 🧠 Data Structure Used

* **Graph (Adjacency List Representation)**
* Each node contains:

  * Hospital ID
  * Name
  * Available Beds
* Dynamic memory allocation using `malloc()` and `free()`

## ⚙️ Algorithm Explanation

1. **Create (Add Node)**

   * Allocate memory dynamically
   * Insert node into adjacency list

2. **Read (Display)**

   * Traverse all nodes
   * Display hospital details and connections

3. **Update**

   * Search node by ID
   * Modify hospital details

4. **Delete**

   * Remove node
   * Free allocated memory

5. **Search**

   * Linear search through node list

## 💻 Compilation Instructions

```bash
gcc hospital_graph.c -o hospital
./hospital
```

## 📊 Sample Output

```
1. Add Hospital
2. Delete Hospital
3. Update Hospital
4. Search Hospital
5. Display Hospitals
6. Exit

Enter choice: 1
Enter ID: 101
Enter Name: City Hospital
Enter Beds: 50
Hospital Added Successfully!

Enter choice: 5
ID: 101 | Name: City Hospital | Beds: 50
```

## 🎥 Demo Video Link

(Add your video link here)
