#include "Server.hpp"

int main() {
    // Create a server instance on port 3490
    Server server(3490);

    // Start the server
    server.start();

    return 0;
}
