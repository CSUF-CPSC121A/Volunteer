#include <iostream>
#include <memory>
#include "volunteer.h"

int main() {
 std::shared_ptr<Volunteer> paul
     = std::make_shared<Volunteer>("Paul", nullptr);
 paul->SetHoursWorked(2.0);

 std::shared_ptr<Volunteer> jc
     = std::make_shared<Volunteer>("JC", paul);
 jc->SetHoursWorked(3.0);

 std::shared_ptr<Volunteer> kevin
     = std::make_shared<Volunteer>("Kevin", jc);
 kevin->SetHoursWorked(2.5);

 std::shared_ptr<Volunteer> michael
     = std::make_shared<Volunteer>("Michael", kevin);
 michael->SetHoursWorked(2.5);

 std::shared_ptr<Volunteer> doina
     = std::make_shared<Volunteer>("Doina", michael);
 doina->SetHoursWorked(2.75);

 std::cout << "Team's total hours worked: ";
 std::cout << doina->TeamHoursWorked() << "\n";

 // TODO: Display the most hours worked by the team.
 std::cout << "Most hours worked by a team member: ";
 std::cout << doina->TeamMostHours() << "\n"; 
 
 // TODO: Display the total hours worked over 0.5 
 std::cout << "Team's total hours worked over 0.5 hours: ";
 std::cout << doina->TeamAggregateHoursOver(0.5) << "\n";
  
 return 0;
}
