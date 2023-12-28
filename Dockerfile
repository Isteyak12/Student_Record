# Use an image with a C++ compiler and standard libraries
FROM gcc:latest

# Set the working directory in the container
WORKDIR /app

# Copy the C++ source code file into the container at /app
COPY main.cpp /app

# Compile the C++ code
RUN g++ -o main main.cpp

# Set the command to run the compiled C++ program
CMD ["./main"]
