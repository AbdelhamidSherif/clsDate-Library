
# 📅 clsDate – A Powerful C++ Date Manipulation Library

`clsDate` is a robust and full-featured C++ class designed to handle all your date-related operations. From date arithmetic and formatting to weekday calculations and calendar generation, `clsDate` provides an intuitive, object-oriented interface for working with dates.

This library is ideal for developers needing accurate date processing in financial systems, scheduling software, or time-tracking applications.

---

## ⚙️ Features

* 🧠 **Auto System Date Detection**
* 🕵️ **Date Validation with Leap Year Support**
* 🔄 **Date Arithmetic**: Add/subtract days, weeks, months, years, centuries, millennia
* 📆 **Calendar Printing**: Month and full year views
* ⏳ **Time Unit Conversion**: Days, hours, minutes, seconds in a date/month/year
* 📊 **Business Day Calculations**
* 🧮 **Age Calculation in Days**
* 📌 **Date Comparisons and Ordering**
* 📍 **Period Overlap Support** via `clsPeriod` class

---

## 🚀 Quick Start

### Include Header
```cpp
#include "clsDate.h"
```

### Example
```cpp
#include "clsDate.h"
#include <iostream>

int main() {
    clsDate date("17/07/2025");
    date.Print();

    clsDate systemDate = clsDate::GetSystemDate();
    std::cout << "System Date: " << systemDate.DateToString() << std::endl;

    date.AddDays(40);
    std::cout << "After 40 Days: " << date.DateToString() << std::endl;

    return 0;
}
```

---

## 🧰 Core Methods Overview

### 🗓️ Initialization

| Constructor | Description |
|-------------|-------------|
| `clsDate()` | Initializes to system date |
| `clsDate("dd/mm/yyyy")` | Initializes from string |
| `clsDate(day, month, year)` | Direct date initialization |
| `clsDate(orderInYear, year)` | Initialize from day-of-year |

### 🧮 Date Arithmetic

- Add / Subtract:
  - Days, Weeks, Months, Years
  - Decades, Centuries, Millennia

### 📅 Calendar Utilities

| Method | Description |
|--------|-------------|
| `PrintMonthCalendar()` | Displays month calendar |
| `PrintYearCalendar()` | Displays full year calendar |
| `DayShortName()` | Returns short name of the day |
| `MonthShortName()` | Returns short month name |

### 🔍 Date Info

| Method | Description |
|--------|-------------|
| `IsLeapYear()` | Checks if year is leap |
| `NumberOfDaysInMonth()` | Get number of days in month |
| `DayOfWeekOrder()` | Day index (0=Sun, ..., 6=Sat) |
| `DaysFromTheBeginingOfTheYear()` | Count days passed |
| `DaysUntilTheEndOfMonth()` | Days remaining in month |
| `DaysUntilTheEndOfYear()` | Days remaining in year |

### 🧪 Comparison Methods

| Method | Description |
|--------|-------------|
| `IsDateBeforeDate2()` | Check if current date is before another |
| `IsDateAfterDate2()` | Check if after |
| `IsDateEqualDate2()` | Check if equal |
| `CompareDates(Date1, Date2)` | Returns: -1 (before), 0 (equal), 1 (after) |

---

## 🗂️ `clsPeriod` – Date Range Class

`clsPeriod` is a simple class to represent a range between two `clsDate` objects.

### Example
```cpp
clsPeriod period(clsDate("01/01/2025"), clsDate("01/03/2025"));
period.Print();

if (period.IsOverLapWith(clsPeriod(clsDate("15/02/2025"), clsDate("15/04/2025")))) {
    std::cout << "Periods overlap!" << std::endl;
}
```

---

## 📁 File Structure

```
📁 clsDate_Library/
├── clsDate.h         → Main class header
├── clsPeriod.h       → Period class
├── main.cpp          → Demo / usage examples
├── README.md         → Documentation

```

---

## ✅ Requirements

- **C++ Version**: C++11 or later
- **Dependencies**: `<string>`, `<vector>`, `<ctime>`, `<iostream>`
- **Cross-Platform**: Windows, Linux, macOS

---
## 🧑‍💻 Author

**Doctor Dev**  
📍 Egypt  
🧠 Software Engineer | C++ Date Systems Expert  
🔗 [GitHub](https://github.com/AbdelhamidSherif)

---
## ⭐ Support

If you like this project, please ⭐ star the repository to show support!
