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
  double TeamMostHours() {
    if (next_volunteer_ == nullptr) {
      return hours_worked_;
    } else {
      if (hours_worked_ > next_volunteer_->TeamMostHours()) {
       return hours_worked_;
      }
      else {
        return next_volunteer_->TemMostHours());
      }
    }
  }

  // TODO: Create the TeamAggregateHoursOver member function
  double TeamAggregateHoursOver(double minimum) {
    if (next_volunteer_ == nullptr) {
      if (hours_worked_ > minimum) {
        return hours_worked_;
      else {
        return 0;
       }
    } else {
      if (hours_worked_ > minimum) {
        return hours_worked_ + 
               next_volunteer_->TeamAggregateHoursOver(minimum);
      else {
        return next_volunteer_->TeamAggregateHoursOver(minimum);
       }
    }
  }


private:
  std::shared_ptr<Volunteer> next_volunteer_;
  std::string name_;
  double hours_worked_;
};
