# Recursive Objects and Processes
## Volunteer (provided)
Create a `Volunteer` class that stores the volunteer's name, hours worked, and a `std::shared_ptr` to another volunteer. Create a constructor that takes in the name of the volunteer and a `std::shared_ptr` to the next volunteer. Assign the parameters to the appropriate member variables.

Create mutators to change the next volunteer and hours worked member variables. Create accessors for the name and hours worked member variables.

Create a `TeamHoursWorked` member variable that will add all the hours worked of volunteers in the same team. A team includes the volunteer the next volunteer it points to and other next volunteers linked. Use recursion to implement the function.

### TeamMostHours
Create the `TeamMostHours` member function for the Volunteer class. The function should use recursion to find the most hours worked by a single member of the team and return it.

### TeamAggregateHoursOver
Ceate the `TeamAggregateHoursOver` member function. It accepts a minimum hours parameter and returns the total hours worked by the team that is over the minimum hours. For example, if the minimum hours parameter is 0.5, and the team members' hours are 1, 2, 0.5, and 3.5, then it will only return 6.5 (1.0 + 2.0 + 3.5).

## main()
Call the `TeamMostHours` member function on the `Volunteer` object pointed to by `doina` to display the most hours worked by a team member. 

Call the `TeamAggregateHoursOver` member function on the `Volunteer` object pointed to by `doina` to display the team's total hours worked over 0.5.