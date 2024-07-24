# Constants
$HOST_PROJECT_PATH = "C:\\Mocking_example"
$IMAGE_NAME = "cpp-gtest-docker-env"

# Build the Docker image
Write-Host "Building the Docker image..."  
docker build -t $IMAGE_NAME .\docker-env
if ($LASTEXITCODE -ne 0) {
    Write-Host "Docker image build failed!" -ForegroundColor Red
    exit 1
}

# Run the Docker image
Write-Host "Running the Docker container..." 
docker run --rm -v "${HOST_PROJECT_PATH}:/host" $IMAGE_NAME