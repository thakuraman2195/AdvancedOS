### Program to implement multi programming

    * Assumptions
        1. All the processes arrive at time 0
        2. I/O Burst can have infinite threads
        

    * Sample run 

    ```
    Number of process : 4
    Enter Cpu Time for P[1] : 3
    Enter I/O time for P[1] : 8
    Enter Cpu Time for P[2] : 4
    Enter I/O time for P[2] : 6
    Enter Cpu Time for P[3] : 2
    Enter I/O time for P[3] : 7
    Enter Cpu Time for P[4] : 5
    Enter I/O time for P[4] : 9
    Enter Context time : 2
    P[1]	=	2	CPU	
    P[2]	=	2	CPU	
    P[3]	=	2	CPU	
    P[3]	is going to IOBurst for 7
    P[4]	=	2	CPU	
    P[1]	=	1	CPU	
    P[1]	is going to IOBurst for 8
    P[2]	=	2	CPU	
    P[2]	is going to IOBurst for 6
    P[4]	=	2	CPU	
    P[4]	=	1	CPU	
    P[4]	is going to IOBurst for 9
    Process P[1]	has wait time =	6
    Process P[2]	has wait time =	7
    Process P[3]	has wait time =	4
    Process P[4]	has wait time =	9
    Total wait : 26
    Average wait : 6.5
    ```