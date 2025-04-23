# 📐 ACE_Project_TrishnaKalita – Mensuration Calculator

A simple C program to calculate the **area** and **perimeter/circumference** of basic shapes:  
🟠 **Circle**, 🟦 **Rectangle**, and 🔺 **Triangle**.

---

## ✨ Features

- 🟠 **Circle**: Area & Circumference  
- 🟦 **Rectangle**: Area & Perimeter  
- 🔺 **Triangle**: Area & Perimeter  

---

## 🧠 Functions Used

```c
// Circle
float area_circle(float radius);
float perimeter_circle(float radius);

// Rectangle
float area_rectangle(float length, float width);
float perimeter_rectangle(float length, float width);

// Triangle
float area_triangle(float base, float height);
float perimeter_triangle(float side1, float side2, float side3);
```

---

## 🚀 How to Run

### 🛠 Compile the program:
```bash
gcc mensuration_calculator.c
```

### ▶️ Run the program:
```bash
./a.out        # macOS / Linux / Unix
./a.exe        # Windows
```

---

## ⌨️ Input

- Choose a shape: **Circle**, **Rectangle**, or **Triangle**  
- Enter the required dimensions  
  (e.g., radius for Circle, length & width for Rectangle)

---

## 📤 Output

- Displays the **calculated area** and **perimeter/circumference** based on your input

---
