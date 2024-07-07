<?php
// Enable error reporting for debugging
error_reporting(E_ALL);
ini_set('display_errors', 1);

// Check if the request method is POST
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Retrieve the direction from the POST request
    $direction = $_POST["direction"];

    // Connect to the MySQL database
    $conn = new mysqli("localhost", "root", "", "robot_control", 3307);

    // Check the connection
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    // Insert the direction into the controls table
    $sql = "INSERT INTO controls (direction) VALUES ('$direction')";
    if ($conn->query($sql) === TRUE) {
        // success message if the command is sent successfully
        $message = "Command '$direction' sent successfully";
    } else {
        // error message 
        $message = "Error: " . $sql . "<br>" . $conn->error;
    }

    // Close the database connection
    $conn->close();

    // redirect back to index.html
    header("Location: index.html?message=" . urlencode($message));
    exit();
}
?>
