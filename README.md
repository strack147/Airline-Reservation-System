An information system for an airline.

The company has:

  ->	Employees. Each employee has the name, the AT, the address, telephone number and birth date. Employees are divided into                 administrators, pilots and flight attendants. The administrators have the additional charaktiristko their grammatical knowledge         and years of service pilots of flight hours and flight attendants years seniority.
  
  ->	Itinerary. A route has a code starting point, destination, day out (a single one of the Monday ... Sunday), time of departure and         arrival. Also has the ticket price.
  
  ->	Customer name, phone number, address.
  
  ->	We also want to apothikefsome information for each execution of a service that is performed (e.g., a route is Athens-Heraklion             Monday 8:00, execution is a specific embodiment example 12/05/2016). Ie a route has many executions but a performance refers to a         single route. Each service execution has two pilots and four flight attendants. It also has a list of customers who have a ticket         for the specific service performance. It also has a maximum guest numbers
  
  ->	Issued tickets. They have a unique code, the client issued the ticket and itinerary execution referred.
  
  
The following functions should be supported:

  ->	Choose correctly what features are public, protected, private.
  
  ->	For each class must be defined set and get functions for all attributes / variables of each class. Also you need to set a Display         method for each class.
  
  ->	Travel ticket (it should be updated and the customer list of a route class)
  
  ->	Cancel ticket (it should be updated and the customer list of a route class)
  
  ->	Each customer can purchase tickets and can cancel (before the realization of the service)
  
  ->	Define a class company which will manage the basic functions. You have a list of schedules, a list of customers, a list of                 employees, and a list of tickets. Supports all insert and delete functions of all previous lists. Also it manages the interface           (graphical or not)
  
Functionality:

When you start the system prompts the user to enter the username and password (username, password). Then it identifies the user and displays the function menu corresponding to the category of the user (administrator or customer). The functions available for each user category are:

Admin:

•	Create User Account

•	Print Catalog Routes

•	Add / Remove Routes 

•	Add / Remove Running Routes 

•	Print Customer Relationship

•	Print tickets per customer

•	Operator disconnection from the system. When disconnecting the system, not the program is terminated.


Customer:

•	Catalog printing services
•	Ticket only if available eistirio
•	Print Ticket purchased
•	buying a ticket cancellation
•	Ability to purchase tickets for flight response (ie Heraklion-Athens, Athens London) only if tickets are available on all flights       involved.
•	Client disconnection from the system. When disconnecting the system, not the program is terminated.

  Furthermore the user program can be closed. For this operation it is required to store during closing and loading the data when         opening the program.



