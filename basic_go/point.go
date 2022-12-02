package main

import "fmt"

func main() {
	var a int = 10

	var p *int

	p = &a

	fmt.Println("value stored in a=", a)
	fmt.Println("address of a=", &a)
	fmt.Println("value stored in variable p=", p)

}
