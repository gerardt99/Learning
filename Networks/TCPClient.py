from socket import *

serverName = '10.91.2.130'
serverPort = 12000

clientSocket = socket(AF_INET, SOCK_STREAM)
clientSocket.connect((serverName, serverPort))

sentence = eval(input('Input lowercase sentence: '))
clientSocket.send(sentence)

modifiedSentence = clientSocket.recv(1024)
print('From Server: ', modifiedSentence)
clientSocket.close()
