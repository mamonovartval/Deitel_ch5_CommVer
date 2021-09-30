#pragma once
// DollarAmount class stores dollar amounts as a whole numbers of pennies
#include <string>
#include <cmath>

class DollarAmount{
public:
	// initialize amount from an int64_t value
	explicit DollarAmount(int64_t value) : amount{value} { }

	//add right's amount to this object's amount
	void add(DollarAmount right) {
		// can access private data of other object of tha same class
		amount += right.amount;
	}

	// subtract right's amount from this object's amount
	void subtract(DollarAmount right) {
		// can access private data of other objecy's of the same class
		amount -= right.amount;
	}

	// uses integer arithmetic to calculate interest amount,
	// then calls add with the interest amount
	void addInterest(int rate, int divisor) {
		// create DollarAmount representing the interest
		DollarAmount interest{
			(amount * rate + divisor / 2) / divisor
		};

		add(interest); // add interest to this object's amount
	}

	// return string representation of a DollarAmount object
	std::string toString() const {
		std::string dollars{ std::to_string(amount / 100) };
		std::string cents{ std::to_string(std::abs(amount % 100)) };
		return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
	}
private:
	int64_t amount{ 0 }; // dollar amount in pennies
};

