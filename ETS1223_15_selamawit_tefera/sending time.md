- Write a program to calculate the time required to transmit a file over a network based on file size and transmission rate.

1. Problem Analysis

1.1 Inputs: File size in MB

Transmission rate in characters per second

1.2 Output: Time required to transmit the file 

1.3 Process:

- Convert file size from MB to bytes by multiplying by 1024*1024

- Calculate transmission time = File size in bytes / Transmission rate

2. Program Design

- Declare fileSize, transmissionRate, transmissionTime variables 

- Input fileSize in MB 

- Convert fileSize to bytes 

- Set transRate value 

- Calculate transmissionTime = fileSize / transmissionRate 

- Print transmissionTime result 

- End


3. Algorithm

   - Start 

   - Input file size in MB

   - Convert file size to bytes = size \* 1024 \* 1024 
   - Input transmission rate in characters per second
   - Calculate transmission time = file size in bytes/transmission rate 

   - Print transmission time

   - End

Algorithm- Flowchart

```mermaid
graph LR;
id1([Start]);
id2[/Read file size/];
id3(file size= size \* 1024 \* 1024);
id4(time = file size / 960);
id5[/Print time/];
id6([End]);
id1-->id2;
id2-->id3;
id3-->id4;
id4-->id5;
id5-->id6;
```