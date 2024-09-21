## 1. Variables
Consider 2x + y = 3
The equation has variables (x and y) to hold the data/values. This means that the variables x and y are placeholders for representing data. Similarily, in computer science programming, we need something for holding data, and **variables** is the way to do that.

## 2. Data Types
In the above equation, the variables x and y can take values such as integral numbers, real numbers etc. To solve the equation, we need to relate them to the kind of of values they can take, and data type is the name used for this purpose in computer science programming. **A data type in a programming language is a set of data with predefined values.**
*e.g. integers, floating point, unit numbers, character, string etc.*<br>

Computer memory is filled with ones and zeroes. It's very difficult to program in zeroes and ones. To solve this, programming languages and compilers provide us with data types. For example, integers take 2 bytes (actual value depeds on compiler), float take 4 bytes etc. This say that in memory we are combining 2 bytes (16 bits) and calling it an integer. Similarily, combining 4 bytes (32 bits) and calling it a float. A data type reduces the coding efforts. At the top level, there are two types of data types:<br><br>
(1) System defined data types (primitive data types)<br>
(2) User defined data types

### Primitive Data Types
Data Types that are defined by system are called primitive data types.<br>
e.g. int, float, char, double, bool etc.<br>

The number of bits allocatoed for each primtive data type depends on the **programming language**, the **compiler** and the **operating system**.<br>

**For Example**
int may take 2 bytes or 4 bytes. If it takes 2 bytes (16 bits) , then the total number of possible values are -32,768 to 32767 . If it takes 4 bytes (32 bits), then the possible values are between -2147483648 to 2147483647. The same is the case with other data types.

### User-Defined Data Types
If the system-defined data types are not enough, the most programming language allow the users to define their own data types called user defined data types.<br>

e.g. structures in C / C++ and classes in C++ / Java. Like in structures, we combine many system defined data types and call it user defined data types. This gives more flexibility and comfort in dealing with computer memory.

## 3. Data Structures

Once we have data in variables, we need some mechanism for manipulating the data to solve problems. **Data Structure is a particular way of storing and organizing data in a computer so that it can be used efficiently.** A data structure is a special format for organizing and storing data. General data structures include arrays, files, linked list, stacks, queues, trees, graphs and so on.<br>

Depending on the organizing of the elements, data structures are classified into two types:<br>

(1) **Linear Data Structure**: Elements are accessed in a sequential order but it is not compulsary to store all elements sequentially.<br>
e.g. Linked list, stacks, queues etc.<br><br>
(2) **Non Linear Data Structure**: Elements of this data structure are stored/accessed in a non-linear order.<br>
e.g. trees and graphs etc.<br>

## 4. Abstract Data Types

Before defining abstract data types, let us consider different view of system defined data types. We know that, by default all primitive data types support basic operations such as addition and substraction. The system provide the implementations for the primitive data types.<br>
For Uer-Defined data types we also need to define operations. The implementation for these operations can be done when we want to actually use them. That means, in general, user defined data types are defined along with their opertations.<br>
To simplify the process of solving problems, we combine the data structures with their operations and we will call this Abstract Data Types (ADTs).<br>
An ADT consists of two parts:<br>
(1) **Declaration of Data**<br>
(2) **Declaration of operations**<br><br>
Commonly used ADTs include: Linked list, Stacks, Queues, Priority Queues, Binary Trees, Dictionaries, Disjoint sets [Union and FInd], Hash Table, Grpahs, and many more.<br><br>
While defining the ADTs do not worry about the implementation details. They come into the picture only when we want to use them. Different kinds of ADTs are suited to different kinds of applications and some are highly specialized to specific tasks.<br>

## 5. What is an Algorithm?
An algorithm is the step-by-step unambiguous instruction to solve a given problem.<br>
In the traditional study of algorithm, there are two main criteria for judging the merits of algorithms: **Correctness** [does the algoorithm give solution to the problem in a finite number of steps] and **Efficiency** [How much resources in terms of time and memory} does it take to execute.
