## Clinic Pre-Triage System

A C++ object-oriented console application that simulates patient registration and admission in a healthcare clinic.

---

## Overview

This system tracks incoming patients, assigns tickets, calculates estimated wait times, and handles their admission for either contagion tests or triage services.

---

## Key Features

- **OOP Concepts:** Inheritance, polymorphism, dynamic memory, abstract interfaces
- **Patient Types:** `TestPatient` (Contagion) and `TriagePatient`
- **Ticketing System:** Tracks arrival time, number, and formats output
- **Menu System:** Text-based UI using `Menu` class
- **Persistence:** Loads/saves patients and wait times from CSV files

---

## File Structure

| File               | Description                                       |
|--------------------|---------------------------------------------------|
| `main_prof.cpp`    | Entry point for testing the system                |
| `PreTriage.cpp/h`  | Core logic for managing registration/admission    |
| `Patient.cpp/h`    | Abstract base class for patients                  |
| `TestPatient.cpp/h`| Handles contagion test patients                   |
| `TriagePatient.cpp/h` | Handles triage patients with symptoms          |
| `Ticket.cpp/h`     | Ticket object (ID + timestamp)                    |
| `Time.cpp/h`       | Time formatting and math                          |
| `IOAble.cpp/h`     | Interface for read/write abstraction              |
| `Menu.cpp/h`       | Text-based menu display                           |
| `Utils.cpp/h`      | Input validation, debug mode, utility functions   |

---
