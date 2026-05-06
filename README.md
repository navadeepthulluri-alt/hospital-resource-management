# 🏥 Patient Transfer Graph & Hospital Resource Management System

## group member name:
T.Navadeep-CDS/2025/1852

B.venkateswara reddy-CDS/2025/1826

## 📌 Project Overview

This project is a **menu-driven C application** designed to manage hospital resources and simulate patient transfers using structured data handling.

The system allows users to:

* Add, update, delete hospital records
* Search and display hospital data
* Manage hospital resources like available beds

Although simplified, the system reflects real-world hospital coordination scenarios where efficient data handling is critical.

---

## 🎯 Objectives

* Implement CRUD operations using C
* Practice **dynamic memory allocation**
* Use **structured data (struct)**
* Build a **modular program with functions**
* Simulate basic hospital resource tracking

---

## 🧩 Features

* ➕ Add new hospital records
* 🔍 Search hospital by ID
* ✏️ Update hospital details
* ❌ Delete hospital records
* 📋 Display all hospitals
* 🧠 Efficient memory usage using `malloc()` and `free()`

---

## 🏗️ System Design

### 📊 Data Structure

We use a **Linked List** to store hospital records dynamically.

Each node contains:

* Hospital ID
* Hospital Name
* Available Beds
* Pointer to next node

```
[ID | Name | Beds | Next] → [ID | Name | Beds | Next] → NULL
```

---

## 🔄 CRUD Operations Explained

### 1. Create (Add Hospital)

* Allocate memory using `malloc()`
* Insert new node at the beginning

### 2. Read (Display Hospitals)

* Traverse the linked list
* Print each hospital’s details

### 3. Update

* Search hospital by ID
* Modify name and bed count

### 4. Delete

* Locate node
* Adjust pointers
* Free memory using `free()`

### 5. Search

* Perform linear search on linked list

---

## 🧠 Algorithm (Step-by-Step)

### Add Node

1. Create new node
2. Input data
3. Link to head
4. Update head pointer

### Delete Node

1. Search for node
2. Track previous node
3. Update links
4. Free memory

### Search Node

1. Traverse list
2. Compare IDs
3. Return result

---

## 🖥️ Technologies Used

* Language: **C**
* Compiler: GCC
* Concepts:

  * Pointers
  * Dynamic Memory Allocation
  * Linked Lists
  * Modular Programming

---

## ▶️ How to Run the Program

### Step 1: Compile

```bash id="c1a2b3"
gcc hospital_graph.c -o hospital
```

### Step 2: Execute

```bash id="d4e5f6"
./hospital
```

---

## 📌 Menu Interface

```
1. Add Hospital
2. Delete Hospital
3. Update Hospital
4. Search Hospital
5. Display Hospitals
6. Exit
```

---

## 📊 Sample Execution

```
Enter choice: 1
Enter ID: 201
Enter Name: Apollo Hospital
Enter Beds: 100
Hospital Added Successfully!

Enter choice: 5
ID: 201 | Name: Apollo Hospital | Beds: 100
```

---

## ⚠️ Limitations

* Uses linked list instead of full graph
* No file storage (data lost after program ends)
* No real-time hospital connectivity

---

## 🚀 Future Enhancements

* 🌐 Convert to **Graph (Adjacency List)** for patient transfers
* 📍 Add shortest path algorithm (Dijkstra)
* 💾 File handling for permanent storage
* 🖥️ GUI using C++ / Python
* 🔐 Authentication system

---

## 🧪 Test Cases

| Input             | Expected Output |
| ----------------- | --------------- |
| Add hospital      | Record inserted |
| Search valid ID   | Hospital found  |
| Search invalid ID | Not found       |
| Delete ID         | Record removed  |

---

## 📷 Screenshots

<img width="396" height="285" alt="image" src="https://github.com/user-attachments/assets/b7adcb20-2f36-4fb5-9737-266fcc631e75" />
<img width="448" height="237" alt="image" src="https://github.com/user-attachments/assets/3711d149-3e95-454c-8728-90b6935d13ce" />
<img width="415" height="248" alt="image" src="https://github.com/user-attachments/assets/a7725d1c-a065-4c23-8ace-66bdf0a1bcaf" />
<img width="518" height="228" alt="image" src="https://github.com/user-attachments/assets/240141e9-0144-4b2b-a352-3b21e82c152b" />
<img width="428" height="243" alt="image" src="https://github.com/user-attachments/assets/1d429db7-c338-44fa-b0d3-f94790f321b7" />
<img width="419" height="217" alt="image" src="https://github.com/user-attachments/assets/4dfae1a1-5831-420c-9c05-a24912fec9e7" />







---

## 🎥 Demo Video

https://drive.google.com/file/d/1PNoOrSRp3nTb_bdBXzh6tiJ_T47dfNnO/view?usp=sharing

---

## 📚 Learning Outcomes

* Understood dynamic memory management
* Learned linked list operations
* Implemented CRUD operations
* Built structured and modular programs

---

## 📜 License

This project is for educational purposes only.

---

## 🙌 Acknowledgement

Guided by faculty and coursework in Data Structures using C.
