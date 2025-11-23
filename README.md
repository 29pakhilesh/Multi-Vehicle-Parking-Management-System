# **Parking Management System – C++**

A modular, menu-driven parking management application written in C++.
It supports vehicle parking, automated billing with GST, receipt generation, history tracking, statistics monitoring, and persistent storage across runs.

## **Features**
- Park Vehicles (Car/Bike)
- Remove Vehicles with:
  - Duration calculation
  - Dynamic pricing
  - GST-inclusive receipt
- Revenue update
- Display all parked vehicles with timestamps
- View complete parking history
- Statistics dashboard (Cars, Bikes, Total, Revenue)
- Pricing table display
- Persistent storage using text files

## **Project Structure**
```
/project
│
├── include/
│   ├── bike.h
│   ├── billing.h
│   ├── car.h
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
├── docs/
│   ├── flowchart.jpg
│   └── uml_class_diagram.png
│
├── data/   (auto-generated at runtime)
│   ├── parked.txt
│   ├── history.txt
│   └── stats.txt
│
└── README.md

```

## **How to Compile & Run**
```bash
g++ *.cpp -o parking
./parking
```
Make sure all `.cpp` and `.h` files are inside the same directory.

## **Data Persistence**
The system automatically loads saved data when the program starts and saves updated data on exit.

Files used:
- `parked.txt` — active vehicles
- `history.txt` — completed parking logs
- `stats.txt` — counts and revenue

## **Billing & Receipt System**
- Pricing follows hourly slabs for Car and Bike
- GST (18%) split into **CGST + SGST**
- A full receipt is generated at vehicle exit showing:
  - Entry/Exit time
  - Duration
  - Base amount
  - GST breakdown
  - Total amount

## **Menu Options**
1. Park Vehicle  
2. Remove Vehicle  
3. Display Parked Vehicles  
4. Parking History  
5. Statistics  
6. Pricing Table  
7. Exit & Save  
