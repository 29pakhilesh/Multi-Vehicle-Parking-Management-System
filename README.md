# **Parking Management System – C++**

A modular, menu-driven parking management application written in C++.
It supports vehicle parking, automated billing with GST, receipt generation, history tracking, statistics monitoring, and persistent storage across runs.

## **Features**
- Park Vehicles (Car/Bike) with capacity limits
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
│   main.cpp
│   constant.h
│   vehicle.h
│   utils.h / utils.cpp
│   pricing.h / pricing.cpp
│   billing.h / billing.cpp
│   receipt.h / receipt.cpp
│   parkVehicle.h / parkVehicle.cpp
│   removeVehicle.h / removeVehicle.cpp
│   displayAll.h / displayAll.cpp
│   showHistory.h / showHistory.cpp
│   showStats.h / showStats.cpp
│   persistence.h / persistence.cpp
│
└── Auto-generated files:
    parked.txt
    history.txt
    stats.txt
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
