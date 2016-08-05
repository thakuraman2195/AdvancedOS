# AdvancedOS

### Java Socket Programming
* Java Socket programming is used for communication between the applications running on different JRE.
* Java Socket programming can be connection-oriented or connection-less.
* Socket and ServerSocket classes are used for connection-oriented socket programming and DatagramSocket and DatagramPacket classes are used for connection-less socket programming.
* The client in socket programming must know two information:
    IP Address of Server, and
    Port number.

### Socket class
* A socket is simply an endpoint for communications between the machines. The Socket class can be used to create a socket.
* Important methods
    
    ```
    Method	                                            Description
     public InputStream getInputStream()	returns the InputStream attached with this socket.
     public OutputStream getOutputStream()	returns the OutputStream attached with this socket.
     public synchronized void close()	    closes this socket
    ```
     
 ### ServerSocket class
* The ServerSocket class can be used to create a server socket. This object is used to establish communication with the clients.
* Important methods

    ```
    Method	                                            Description
     public Socket accept()	            returns the socket and establish a connection between server and client.
     public synchronized void close()	closes the server socket.
    ```

In this example, client will write first to the server then server will receive and print the text. 
Then server will write to the client and client will receive and print the text. The step goes on.