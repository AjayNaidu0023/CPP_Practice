/*
Containers in C++ STL

Containers, objects which store data, Algorithms, set of procedures to process data, and Iterators, objects which 
point to some element in a container. Today, in this tutorial, we will be interested in discussing more about containers.

Containers have 3 types:

    1. Sequence Containers
    2. Associate Containers
    3. Derived Containers

Sequence Containers

    >> A sequence container stores that data in a linear fashion. Refer to the illustration below to understand what 
        storing something in a linear fashion means.

    >> Sequence containers include Vector, List, Dequeue etc. These are some of the most used sequence containers

Associate Containers

    >> An associative container is designed in such a way that enhances the accessing of some element in that container. 
    It is very much used when the user wants to fastly reach some element. Some of these containers are, Set, Multiset, 
    Map, Multimap etc.  They store their data in a tree-like structure.

Derived Containers

    >> An associative container is designed in such a way that enhances the accessing of some element in that container. 
    It is very much used when the user wants to fastly reach some element. Some of these containers are, Set, Multiset, 
    Map, Multimap etc.  They store their data in a tree-like structure.

A stack, works on the first in first out [FIFO] method

Now since we have got the basic idea of all the three types of containers, a question which might arise is when to use 
    which.  So, let’s deal with that,

In sequence containers, we have Vectors, which has following properties:

    1. Faster random access to elements in comparison to array
    2. Slower insertion and deletion at some random position, except at the end.
    3. Faster insertion at the end.

    In lists we have 

    >> Random accessing elements is too slow, because every element is traversed using pointers.
    >> Insertion and deletion at any position is relatively faster, because they only use pointers, which can easily be 
        manipulated.
*/