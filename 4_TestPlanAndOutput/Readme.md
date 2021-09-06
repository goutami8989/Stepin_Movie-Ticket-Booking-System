# Test Plan and Test Ouput

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**PASS/FAIL**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  T_01|H_01| Provide required details for login to book a ticket| password| Successfully logined In | Successfully logined In| PASS |
|  T_02|H_01| When wrong password is entered| Password|  Entered Password is wrong | Entered Password is wrong | PASS |
|  T_03|H_02|Display the  details of movie available|  Enter choice | Display list | Display list | PASS |
|  T_04|H_02| Purchase a ticket for the movie available | enter choice | ThankYou for Booking Ticket | ThankYou for Booking Ticket| PASS |
|  T_05|H_03|  Summary of a ticket for purchased movie| enter choice | Booking ID,Customer name,Show Name,Hallno,Price | Booking ID,Customer name,Show Name,Hallno,Price| PASS |
|  T_06|H_04| Cancel a ticket   |ID number|  Your ticket is cancelled | Your ticket is cancelled | PASS |
|  T_07|H_03| Change the price of ticket (only admin) | password| Please enter new price | Please enter new price   | PASS |
|  T_08|H_03| Change the price of ticket after login (only admin) | enter new price -price|Price Updated Successfully | Price Updated Successfully  | PASS |
|  T_09|H_03|When wrong password is entered while Changing the price of ticket (only admin) | password | Entered Password is wrong  |  Entered Password is wrong |PASS |
|  T_10|H_05|To view the reserved ticke |password| summary of tickeT|summary of ticket | PASS |
|  T_11|H_05|When wrong password is entered to view the reserved ticket|Correct Password | Entered Password is wrongt|Entered Password is wrong | PASS |













