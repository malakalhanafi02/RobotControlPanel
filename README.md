# 🤖 Robot Control Panel
https://github.com/malakalhanafi02/RobotControlPanel/assets/122760944/f8c50448-7ccf-4202-83e4-7c08fe88a94b

---

### This project is a web-based control panel for a robot, allowing users to send commands to the robot. 

---

## ⌨️ XAMPP Setup

1. Go to the [XAMPP download page](https://www.apachefriends.org/index.html)
2. Select the version for your operating system (Windows, macOS, Linux) and download it
3. Run the downloaded installer and follow the instructions to install XAMPP on your machine
   <img width="497" alt="image" src="https://github.com/malakalhanafi02/RobotControlPanel/assets/122760944/6bf3cfdf-0e56-4cc9-a79e-ff578188e6fb">
4. Choose the default settings and complete the installation

   <img width="489" alt="image" src="https://github.com/malakalhanafi02/RobotControlPanel/assets/122760944/f39cb07e-7ded-4e6a-a0a2-6d2fa427cb00">
6. MySQL should be running on port 3307 (mine could not run on 3306)
7. Start Apache and MySQL
<img width="659" alt="image" src="https://github.com/malakalhanafi02/RobotControlPanel/assets/122760944/36e362ec-6f5e-4f89-bd81-e952176cb6f7">

---

## 👩🏻‍💻 Database Setup

1. Open `phpMyAdmin` by navigating to `http://localhost/phpmyadmin`
  <img width="1374" alt="image" src="https://github.com/malakalhanafi02/RobotControlPanel/assets/122760944/0f4784de-a2f4-4320-b10c-b9d947a4ac3a">

3. Create a new database named `robot_control`
  <img width="667" alt="image" src="https://github.com/malakalhanafi02/RobotControlPanel/assets/122760944/2d5495a3-ef3c-4e43-ba72-6a98806dff51">

4. Create a table named `controls`
<img width="946" alt="image" src="https://github.com/malakalhanafi02/RobotControlPanel/assets/122760944/ff1b8188-dee9-46f9-9188-d6ba034daf28">

with the following structure:

```sql
CREATE DATABASE robot_control;

USE robot_control;

CREATE TABLE controls (
    id INT AUTO_INCREMENT PRIMARY KEY,
    direction VARCHAR(10) NOT NULL,
    timestamp TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
```

---

## 👾 Create Project Directory and Files

I used VS Code, created a project with 3 files and commited them to this repo (you can find the codes for each):
<img width="273" alt="image" src="https://github.com/malakalhanafi02/RobotControlPanel/assets/122760944/027987e7-27f1-481c-b22b-6e693cc08304">


1. index.html
2. control.php
3. style.css

<img width="573" alt="image" src="https://github.com/malakalhanafi02/RobotControlPanel/assets/122760944/a4149f8b-9bca-4ffe-9e5a-8d70a5c78512">

---

## How to Run

1. Start Apache and MySQL from the XAMPP Control Panel
2. Open your browser and navigate to `http://localhost/RobotControlPanel/index.html`
3. Use the control panel to send commands to the robot. A pop-up window will display success or error messages





