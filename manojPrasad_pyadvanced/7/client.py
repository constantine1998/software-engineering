import socket
import sys

# create a socket object
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM) 


host = (sys.argv[1])                           

port = int(sys.argv[2])

data = sys.argv[3]

# connection to hostname on the port.
s.connect((host, port))

s.send(data)

cm=s.recv(2048)

if(data==cm): print("True")
else: print("False")

s.close()
