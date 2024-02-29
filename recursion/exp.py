import socket
import struct
import sys

SERVER_IP="vortex.labs.overthewire.org"
SERVER_PORT=5842
ANS=0

client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect((SERVER_IP, SERVER_PORT))
for i in range(4):
    received_data = client_socket.recv(4)
    unpack_data=struct.unpack("<I",received_data)
    ANS+=unpack_data[0]
print(ANS)
packed_data=struct.pack("<I",ANS)
client_socket.send(packed_data)
print(client_socket.recv(1024))


