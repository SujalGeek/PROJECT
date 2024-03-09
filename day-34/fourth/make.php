<?php
if ($_SERVER["REQUEST_METHOD"] == "POST") {
  // Connect to MongoDB
  $mongo = new MongoDB\Driver\Manager("mongodb://localhost:27017");

  // Database and collection
  $database = "DCSE";
  $collection = "DATA";

  // Retrieve form data
  $studentName = $_POST['studentName'];
  $studentEmail = $_POST['studentEmail'];
  $studentLinkedin = $_POST['studentLinkedin'];
  $studentMobile = $_POST['studentMobile'];
  $facultyName = $_POST['facultyName'];

  // Handle image upload
  $imagePath = "";
  if (isset($_FILES['imageUpload']) && $_FILES['imageUpload']['error'] === UPLOAD_ERR_OK) {
    $targetDir = "uploads/";
    $targetFile = $targetDir . basename($_FILES["imageUpload"]["name"]);
    if (move_uploaded_file($_FILES["imageUpload"]["tmp_name"], $targetFile)) {
      $imagePath = $targetFile;
    } else {
      echo "Error uploading file.";
    }
  }

  // Document to insert
  $document = [
    "student_name" => $studentName,
    "student_email" => $studentEmail,
    "student_linkedin" => $studentLinkedin,
    "student_mobile" => $studentMobile,
    "faculty_name" => $facultyName,
    "image_upload" => $imagePath
  ];

  // Insert document
  try {
    $bulk = new MongoDB\Driver\BulkWrite;
    $bulk->insert($document);
    $mongo->executeBulkWrite("$database.$collection", $bulk);
    echo "New record created successfully";
  } catch (Exception $e) {
    echo "Error: " . $e->getMessage();
  }
}