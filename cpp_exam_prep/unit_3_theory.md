#### STACKS #### 
- it a linear data structure that strictly that follows the LIFO principle to store the data values. 
- Unlike the array in Stack you don't have multiple control points there is only one control point called " Top " -> All insertions and deletions happens only using this point. 

    Properties of Stacks :- 
        1. Restricted Access : Only interaction with the data of the *topmost level.*
                               No insertion, reading, modifying, deletion with
                               *middle & bottom levels of data.* 
        2. LIFO Control      : Simply explain it's insertion and removing process. 
        3. One Control Center: Top is the pointer through which the whole data 
                               is mainatined making it less flexible. 

    Primitives of Stacks :-
        < manje basic operations of stacks one can do >

        1. push() => new element at top | limit cross -> Stack overflow error. 
        2. pull() => removes & returns the top element | no data -> Stack underflow error. 
        3. peek() => read the top element | read only. 
        4. isEmpty() => boolean operation to figure out is there data or not ? 
        5. isFull() => boolean operation that checks and returns value when the stack is full. 

#### QUEUES ####          
- it is a linear data structure that strictly follows the FIFO principle to store and work with the data. 
- Unlike, Stacks it has 2 end points like control centres to work namely, *front* - to track which element is to be removed and *rear* - to track where the element the is to be added.

    Properties of queue :- 
        1. Two Open Ends : Unlike slack it has 2 ends at the *front < for data removal >* and *rear < for data addition >.*
        2. FIFO Control : Simply explain it's insertion and removing process. 
        3. Order Preservation : Perfectly preserves the arrival order of the data. 

    Primitives of queue :-
        < manje basic operations of queue one can do >

        1. enqueue() => new element at the rear (back) | limit cross -> Queue overflow error. 
        2. Dequeue() => removes & returns the top element | no data -> Queue underflow error. 
        3. peek() => read the top element | read only. 
        4. isEmpty() => boolean operation to figure out is there data or not ? 
        5. isFull() => boolean operation that checks and returns value when the stack is full.
