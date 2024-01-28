 **# studentdirectory.c**

**A C program for managing student records in a simple database.**

**## Features:**

- **Add new student records**
- **Search for records by enrollment number**
- **Modify existing records**
- **Delete records**
- **Display all records**
- **Display the student with the highest percentage**

**## Structure:**

* **Structure `stu`:**
    - `en`: Enrollment number (int)
    - `name`: Student name (char array)
    - `sem`: Semester (int)
    - `per`: Percentage (float)
* **Array `rec`:** Stores up to 10 student records of type `stu`
* **Global variable `curr`:** Tracks the number of records in the `rec` array

**## Functions:**

* **addrec():** Adds a new student record with validation
* **indofen():** Finds the index of a record by enrollment number
* **printrecbyen():** Prints the details of a record by enrollment number
* **modbyen():** Modifies the details of a record by enrollment number
* **delbyid():** Deletes a record by enrollment number
* **disphighest():** Displays the student with the highest percentage
* **displayall():** Displays all student records
* **main():** Main function, provides a user menu and calls other functions

**## Implementation:**

* Uses an array-based database to store records
* Employs a user-friendly menu for operations
* Includes input validation and handles empty database cases
