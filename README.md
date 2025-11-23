# 🚗 Parking Management System – C++

A modular, menu-driven vehicle parking management application written in modern C++.
The system supports parking operations, automated billing with GST, receipt generation, statistics tracking, and persistent data storage.

---

## ⭐ Features

- Park Vehicles (Car/Bike)
- Remove Vehicles with:
  - Auto duration calculation
  - Dynamic pricing (slab-based)
  - GST-inclusive receipt (CGST + SGST)
- Auto revenue update
- View all currently parked vehicles
- Complete parking history log
- Statistics dashboard:
  - Total vehicles
  - Total cars
  - Total bikes
  - Total revenue
- Persistent storage across program runs
- Clean modular structure (headers + source files)
- Uses Makefile for easy compilation

---

## 📂 Project Structure

```
C++ Project/
│
├── header/
│   ├── billing.h
│   ├── constant.h
│   ├── displayAll.h
│   ├── parkVehicle.h
│   ├── persistence.h
│   ├── pricing.h
│   ├── receipt.h
│   ├── removeVehicle.h
│   ├── showHistory.h
│   ├── showStats.h
│   ├── utils.h
│   ├── vehicle.h
│   └── vehicleBase.h
│
├── src/
│   ├── billing.cpp
│   ├── displayAll.cpp
│   ├── main.cpp
│   ├── parkVehicle.cpp
│   ├── persistence.cpp
│   ├── pricing.cpp
│   ├── receipt.cpp
│   ├── removeVehicle.cpp
│   ├── showHistory.cpp
│   ├── showStats.cpp
│   └── utils.cpp
│
├── images/
│   ├── flowchart.jpg
│   └── screenshots/
│       ├── case1.jpg
│       ├── case2.jpg
│       ├── case3.jpg
│       ├── case4.jpg
│       ├── case5.jpg
│       └── case6.jpg
│
├── data/   (auto-generated at runtime)
│   ├── parked.txt
│   ├── history.txt
│   └── stats.txt
│
├── Makefile
└── README.md
```

---

## 🛠️ How to Compile & Run (using Makefile)

Open terminal inside the project folder:

```bash
cd ~/Desktop/C++\ Project
```

### **Build the project**
```bash
make
```

### **Run the program**
```bash
make run
```

### **Clean build files**
```bash
make clean
```

### **Full reset (clears data + build)**
```bash
make reset
```

---

## 📦 Data Persistence

The program automatically loads previous data on startup and saves on exit.

Files used (inside `/data`):

- **parked.txt** – all currently parked vehicles  
- **history.txt** – past parking logs with billing  
- **stats.txt** – total counts & revenue  

These files are created automatically when the program runs.

---

## 💰 Billing & Receipt System

- Dynamic pricing based on vehicle type & duration
- 18% GST split into:
  - **9% CGST**
  - **9% SGST**
- Receipt shows:
  - Entry / Exit timestamps
  - Total duration
  - Base cost
  - GST breakdown
  - Final amount

---

## 📋 Menu Options

1. Park Vehicle  
2. Remove Vehicle  
3. Display Parked Vehicles  
4. Parking History  
5. Statistics  
6. Pricing Table  
7. Exit & Save  

---

Enjoy your clean, modular, and professional C++ Parking Management System 🚗

