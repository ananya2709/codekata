<!DOCTYPE html>
<html>
<title>
	BMI CALCULATOR</title>
	<body>
		<h2>BMI CALCULATOR</h2>
		<form method="POST" action="calculate.php">
		    NAME<input type="name" name="name" placeholder="enter yor name"><br><br>
			<input type="submit" value="calculate"name="submit">
                     
           	
</form>
</body>
</html>

<?php
{
$name1=$_POST['name'];
if(!empty($name1))
{
	$con=mysqli_connect("localhost","root","","bmi");
		if(!$con)
        die("connection error".mysqli_error());
        else
        {
        $sql=mysqli_query($con,"ALTER TABLE bmi_info ADD bmi int(30)");	
        $query="select * from bmi_info where name='$name1'";
        $mysqli=null;
        $result=mysqli_query($con,$query);
        $a=mysqli_fetch_array($result);
        if(!$a)
        {
        die("no username as such <br>create a new account".mysqli_error($mysqli));
        }

        else
        {
        	$height=$a['height'];
        	$weight=$a['weight'];
        	$bmi=$height/$weight;
        	//mysqli_query("ALTER TABLE bmi_info ADD bmi int(30)");
        	$update=mysqli_query($con,"update bmi_info set bmi='$bmi' where name='$name1'");
        	echo("inserted");
        }
    }
}
}        ?>
