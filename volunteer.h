#include <iostream>
#include <memory>

class Volunteer {
public:
  Volunteer(const std::string &name,
           std::shared_ptr<Volunteer> next_volunteer)
      : name_(name), next_volunteer_(next_volunteer) { }

  void AssignNextVolunteer(
      std::shared_ptr<Volunteer> next_volunteer) {
    next_volunteer_ = next_volunteer;
  }

  const std::string& Name() {
    return name_;
  }

  void SetHoursWorked(double hours_worked) {
    hours_worked_ = hours_worked;
  }

  double HoursWorked() {
    return hours_worked_;
  }

  double TeamHoursWorked() {
    if (next_volunteer_ == nullptr) {
      return hours_worked_;
    } else {
      return hours_worked_ + next_volunteer_->TeamHoursWorked();
     }
  }

  // TODO: Create the TeamMostHours member function

  // TODO: Create the TeamAggregateHoursOver member function

private:
  std::shared_ptr<Volunteer> next_volunteer_;
  std::string name_;
  double hours_worked_;
};
