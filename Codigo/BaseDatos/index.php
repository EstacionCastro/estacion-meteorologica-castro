#este es el código que he usado para hacer la tabla en html

<!DOCTYPE html>
<html>
<head>
    <title>Sensor Data</title>
    <link rel="stylesheet" type="text/css" href="bootstrap.min.css">
</head>
<body>
<center><h1>Estación meteorológica IES Juan Antonio Castro: Humedad</h1></center>
<?php

$servername = "localhost";
$dbname = "id21490724_trikitrakatelas";
$username = "id21490724_humedadpapu2";
$password = "Paquito_1";
$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 

$sql = "SELECT id, sensor, location, value1, value2, value3, reading_time FROM SensorData ORDER BY id DESC";

echo '<center>
<div class="card border-dark mb-3" style="max-width: 30rem;">

  <div class="card-body">
   <table class="table-secondary" cellspacing="5" cellpadding="5">

      <tr class="table-secondary"> 
        <td>ID</td> 
        <td>Sensor</td> 
        <td>Location</td> 
        <td>Humedad</td>
        <td></td>
        <td></td>
        <td>Fecha</td> 
      </tr>
  </div>
    </center>
';   
 
if ($result = $conn->query($sql)) {
    while ($row = $result->fetch_assoc()) {
        $row_id = $row["id"];
        $row_sensor = $row["sensor"];
        $row_location = $row["location"];
        $row_value1 = $row["value1"];
        $row_value2 = $row["value2"]; 
        $row_value3 = $row["value3"]; 
        $row_reading_time = $row["reading_time"];
       
        echo ' <tr class="table-info">
                <td>' . $row_id . '</td> 
                <td>' . $row_sensor . '</td> 
                <td>' . $row_location . '</td> 
                <td>' . $row_value1 . '</td> 
                <td>' . $row_value2 . '</td>
                <td>' . $row_value3 . '</td> 
                <td>' . $row_reading_time . '</td> 
              </tr>';
    }
    $result->free();
}

$conn->close();
?> 
</table>
</body>
</html>
