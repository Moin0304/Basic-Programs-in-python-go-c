package main

import "fmt"

func main() {
	var num, temp, rev, min, max, rem int
	fmt.Print("enter the minimum and maximum limit of palindrome= ")
	fmt.Scanln(&min, &max)
	fmt.Print("palindrome numbers between", min, "and", max, "are: ")
	for num = min; num <= max; num++ {
		rev = 0
		for temp = num; temp > 0; temp = temp / 10 {
			rem = temp % 10
			rev = rev*10 + rem
		}
		if num == rev {
			fmt.Print(num, "\t")
		}
	}
	fmt.Println()

}
