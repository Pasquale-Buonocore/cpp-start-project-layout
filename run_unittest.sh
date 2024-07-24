#!/bin/bash

# Constants
HOST_PROJECT_PATH=$(pwd)
IMAGE_NAME="cpp-gtest-docker-env"

# Build the Docker image
echo "Building the Docker image..."
docker build -t $IMAGE_NAME ./docker-env
if [ $? -ne 0 ]; then
    echo "Docker image build failed!"
    exit 1
fi

# Run the Docker container
echo "Running the Docker container..."
docker run --rm -v "${HOST_PROJECT_PATH}:/host" $IMAGE_NAME
