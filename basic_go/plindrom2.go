package main

import "fmt"

func palindrome(m int, n int) []int {
	result := []int{}
	for i := m; i <= n; i++ {
		temp := i
		rev := 0
		for a := i; a > 0; a = a / 10 {
			rev = rev*10 + a%10

		}
		if rev == temp {
			result = append(result, temp)

		}

	}
	return result

}

func main() {
	var m, n int
	fmt.Println("enter the first number:")
	fmt.Scanf("%d", &m)
	fmt.Println("enter the second number:")
	fmt.Scanf("%d", &n)
	fmt.Println(palindrome(m, n))

}
