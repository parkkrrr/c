#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#define PORT 8000

int main() {
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    char *hello = "Hello, server!";
    char buffer[1024] = {0};
    
    // Create a socket
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        printf("Socket creation error\n");
        return -1;
    }
    
    // Set server address and port
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
    
    // Convert IPv4 and IPv6 addresses from text to binary form
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        printf("Invalid address or address not supported\n");
        return -1;
    }
    
    // Connect to server
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        printf("Connection failed\n");
        return -1;
    }
    
    // Send message to server
    send(sock, hello, strlen(hello), 0);
    printf("Message sent to server\n");
    
    // Receive message from server
    valread = read(sock, buffer, 1024);
    printf("Message received from server: %s\n", buffer);
    
    // Close socket
    close(sock);
    return 0;
}
