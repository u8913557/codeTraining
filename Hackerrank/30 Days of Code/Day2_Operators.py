#!/bin/python3

import sys

if __name__ == "__main__":
    meal_cost = float(input().strip())
    tip_percent = int(input().strip())
    tax_percent = int(input().strip())
    
    totalCost = meal_cost*(1+0.01*(tip_percent+tax_percent))
    
    print("The total meal cost is %d dollars." % round(totalCost)) 
