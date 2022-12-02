package main

import "fmt"

func main() {

	var n int
	println("enter a number to check its polidrome or not")
	fmt.Scanf("%d", &n)
	var rev int = 0
	var temp = n

	for temp > 0 {
		var rem = temp % 10
		rev = (rev * 10) + rem
		temp = temp / 10
	}

	if n == rev {
		fmt.Println("The given number is Palindrome")
	} else {
		fmt.Println("The given number is NOT a Palindrome")
	}
}
