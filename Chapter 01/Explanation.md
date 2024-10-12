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

## 5. Why the analysis of the Algorithm?
A ---------> B<br>
To go from city A to city B, there can be many ways of accomplishing this: by flight, by bus, by train ans also by bicycle. Depending on the availability and convenience, we choose the one that suits us. Similarily, in Computer Science, multiple algorithma are available for solving the same problem. **Algorithm analysis helps us to determine which algorithm is most efficient in terms of time and space consumed.**

## 6. Goal of the analysis of the Algorithm
The goal of the analysis of the algorithm is to compare algorithms (or solutions) mainly in terms of running time but also in terms of other factor (meaning, developer effort etc) 

## 7. What is Running Time Analysis
It is the process of determining how processing time increases as the size of the problem (input size) increases. Input size is the number of elements in the input, and depending on the problem type, the input may be of different types.<br>
The following are the common types of the input:<br>
- Size of the array
- Polynomial degree
- Number of elements in a mtrix
- Number of bits in the binary classification of the input
- Vertices and edge in a graph

## 8. How to compare Algorithm
To compare algorithm, let us define a few objective measures:<br>
- **Execution Times**: Not a good measure as execution times are specific to a particular computer.
- **Number of statements executed**: Not a good measure, since the number of statements varies with the programming language as well as the style of the indicidual programmer
- **Ideal Solution**: Let us assume that the running time of a given algorithm as a function of the input size n (i.e. f(n)) and compare these different functions corresponding to running times. This kind of comparison is independent of machine time, programming style etc.

## 9. What is the Rate of Growth?
Thea rate at which the running time increases as a function of input is called the rate of growth.

## 10. Commonly used Rates of Growth
The diagram below shows the relationship between different rates of growth:<br><br>
![Screenshot 2024-09-21 153855](https://github.com/user-attachments/assets/01271f09-87db-420d-91c6-961dd3f417b1)

### Constant Growth Rate
A constant resource need is one where the resource need does not grow. That is processing 1 piece of data takes the same amount of resource as processing 1 million pieces of data. The graph of such a growth rate looks like a horizontal line<br>
![constants](https://github.com/user-attachments/assets/97bb6502-9ab8-4b96-a5ae-912c60178883)

### Logrithmic Growth Rate
A logrithmic growth rate is a growth rate where the resource needs grows by one unit each time the data is doubled. This effectively means that as the amount of data gets bigger, the curve describing the growth rate gets flatter (closer to horizontal but never reaching it). The following graph shows what a curve of this nature would look like.<br>
![log](https://github.com/user-attachments/assets/3bbb502e-dda8-446a-9f00-d225d80f06f7)

### Linear Growth Rate
A linear growth rate is a growth rate where the resource needs and the amount of data is directly proportional to each other. That is the growth rate can be described as a straight line that is not horizontal<br>
![linear](https://github.com/user-attachments/assets/fb29c668-e85a-49f0-bfa0-b0279a04cc0f)

### Log Linear
A loglinear growth rate is a slightly curved line. the curve is more pronounced for lower values than higher ones<br>
<img width="492" alt="loglinear" src="https://github.com/user-attachments/assets/5e3c1108-0d12-4aaa-9d0d-ccfaeb2dee7c">

### Quadratic Growth Rate
A quadratic growth rate is one that can be described by a parabola.<br>
![squared](https://github.com/user-attachments/assets/4812a2dc-42d1-4716-9dd6-773359cc48d1)

### Exponential Growth Rate
An exponential growth rate is one where each extra unit of data requires a doubling of resource. As you can see the growth rate starts off looking like it is flat but quickly shoots up to near vertical (note that it can't actually be vertical)<br>
![exponential](https://github.com/user-attachments/assets/25280714-1fe3-4b1e-85c0-ba2ce9d981a5)

## 11. Types of Analysis
To analyze the given algorithm, we need to know with which inputs the algorithm takes less time and with which time the algorithm takes a long time. We have already seen that the algorithm can be expressed in the form of an expresiom. That means we represent the algorithm with multiple expressions: one for the case where it takes less time and other for the case where it takes more time.<br>
In general, the first case is called the best case and the second case is called the worst case for the algorithm. To analyze the algorithm, we need some kind of syntaz and that forms the base for asymptotic analysis/notation. There are three types of analysis:<br>
- **Worst Case**
  - Defines the input for which the algorithm takes a long time (slowest time to complete)
  - Input is the one fow which the algorithm runs the slowest.
- **Best Case**
  - Defines the input for which the algorithm takes the least time (fastest time to complete)
  - Input is the one for which the algorithm runs the fastest.
- **Average Case**
  - Provides a prediction about the running time of the algorithm.
  - Run the algorithm many times, using many different inputs that comes from some distribution that generates these inputs. Compute the total running time (by adding the individual time) and divide by the numer of trials.
  - Assume that the input is random.
```
Lower Bound <= Average Time <= Upper Bound
```
for a given algorithm. We can represent the best, worst ans average cases in the form of expressions.

## 12. Asymptotic Notation
Having the expressions for the best, average and worst case, for all the three cases we need to identify the upper and lower bounds. To represent these upper bound and lower bounds, we need some kind of syntax and that is the subject of the following discussion. let us assume that the given algorithm is represented in the form of function f(n).

## 13. Big-O Notation (Upper Bounding Function)
This notation gives the tight upper bound of the given function. Generally it is represented as f(n) = O(g(n)). That means, at larget values of n, the upper bound of f(n) is g(n). For example, if f(n)  = $n^4$ + 100 $n^2$ + 10n + 50 is the given algorithm, then $n^4$ is g(n). That means g(n) gives the maximum rate of growth for f(n) at larget values of n.<br>

![big0](https://github.com/user-attachments/assets/071689bf-8dda-4224-ba72-21d637362195)


Let us see the O-notation with a little more detail. O-notation defined as O(g(n)) = {f(n) : there exists positive constants c and n$_0$ ( read as n not)such that 0<=f(n)<=cg(n) for all n>n $_0$}.<br>
g(n) is an asymptotic tight upper bound for f(n). Our objective is to give the smallest rate of growth g(n) which is greater than or equal to the given algorithm's rate of growth.<br>

Generally, we discard lower vallues of n. That means the rate of growth at lower values of n is not important. In the figure, n $_0$ is the point from which we need to consider the rate of growth for a given algorithm. Below n $_0$, the rate of growth could be different. n $_0$ is caled threshold for the given function.
### Big - O visualization
O(g(n)) is the set of functions with smaller or the same order rate of growth as g(n). For example, O( $n^2$ ) includes O(1), O(n), O(nlnn) etc.<br>
O(1) : 100, 10000, 200, 1, 20 etc.<br>
O(n) : 3n + 100, 100n, 2n - 1, 3 etc.<br>
O(nlnn) : 5nlnn, 3n - 100, 2n - 1, 100, 100n etc.<br>
O($n^2$) : $n^2$, 5n - 10, 100, $n^2$ - 2n -1, 5 etc.<br>

## 14. Omega - &omega;- Notation [Lower Bounding Function]
This notation gives the tighter lower bound of the given algorithm and we represent it as f(n) = &omega;(g(n)). That means, at larger values of n, the tighter lower bound of f(n) is g(n).
![omega](https://github.com/user-attachments/assets/35e6dc1a-00e8-4a22-8ed9-ca13f7812470)
 The &omega; notation can be defined as &omega;(g(n)) = {f(n) : there exists positive constants c and n $_0$ such that 0<=cg(n)<=f(n) for all n>= n $_0$}. g(n) is an asymptotic tight lower bound for f(n). Our objective is to give the largest rate of growth g(n) which is less than or equal to the given algorithm's rate of growth f(n).

## 15. Theta - &theta;-Notation [Order Function]
This notation decides whether the upper and lower bounds of a given function (algorithm) are the same. The average running time of an algorithm is always between the lower bound and the upper bound. If the upper bound [o] and the lower bound [&omega;] give the same result, then the &theta; notation will also have the same rate of growth.<br>
Example: let us assume that f(n) =  10n + n is the expression. Then its tight upper bound g(n) is O(n). The rate of growth in the best case is g(n) = O(n).<br>

In this case, the rate of growth in the best case and worst case are the same. As a result, the average case will also be the same.<br>
For a given function (algorithm) ,if the rate of growth (bounds) for O and &omega; are not the same then the rate of growth for the &theta; case may not be the same. In this case, we need to consider all possible time complexities and take the average of those.
