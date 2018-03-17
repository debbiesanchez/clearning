import matplotlib.pyplot as plt

class Spendings:
	food = None
	travel = None
	rent = None

	def __init__(self):
		self.food = []
		self.travel = []
		self.rent = []

	def food_spending(self, cost):
		self.food.append(cost)

	def travel_spending(self, cost):
		self.travel.append(cost)

	def rent_spending(self, cost):
		self.rent.append(cost)

	def total_spendings(self):
		sum = 0
		for f in self.food:
			sum = sum + float(f)

		for t in self.travel:
			sum = sum + float(t)

		for r in self.rent:
			sum = sum + float(r)

		print('total spendings: %f' % sum)

	def show_hist(self):
		

account = Spendings()

account.food_spending(15)
account.food_spending(10)
account.food_spending(5)

account.rent_spending(500)

account.travel_spending(50)

account.total_spendings()