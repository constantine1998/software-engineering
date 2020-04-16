import socket                                         
import time
import sys

def reverse(tm):
    pal = ""
    for i in range(1,len(tm)+1):
        pal=pal+tm[len(tm)-i]
    return pal

# create a socket object
serversocket = socket.socket(
	        socket.AF_INET, socket.SOCK_STREAM) 

# get local machine name
host = (sys.argv[1])                         
port = int(sys.argv[2])                                          

# bind to the port
serversocket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
serversocket.bind((host, port))                                  

# queue up to 5 requests
serversocket.listen(5)                                           
      
#while True:
#If you want to send multiple strings then uncomment the while loop and indent all of the below script.
print("Server started waiting for client to connect....")
#Establish a connection
clientsocket,addr = serversocket.accept()
print("Connected to host ip:%s") %host
tm=clientsocket.recv(10240)
print("Received '%s' from %s") %(tm,host)
pal=reverse(tm)
clientsocket.send(pal)
print("Sent '%s' to '%s'") %(pal,host)
clientsocket.close()
