like teamviewer, but only on shell

will be 3 programs, 1- client/server(in one program),a chat and a small one that will run it easyly

client/server- will be one program and depand on user input, will be client or server

chat- will be used for the programmers to communicate

the third program will run all this things

client/server protocol

number|data

101|code - client request to start communication
102 - client request for disconnect

202|true/false - server respod to 101
202 - server respond to 102

301|file name - client requst for file
302|position - server or client send the cursor position
303|letter - server or client send the last letter entered

401|file - server send the file


ideas

the client/server will use multi therding to recive and send
