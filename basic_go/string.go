package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func main() {

	// var myString string
	// fmt.Scanln(&myString) // it will take only frist elemetn in string ex: input:mghanath prasad d output: meghanath
	// fmt.Println(myString)

	// var name string = "meghanath"
	// var a, _ = fmt.Println(name) // '_' is used to over come the error
	// fmt.Print(a)

	// reader := bufio.NewReader(os.Stdin)
	// fmt.Print("enter your full name: ")
	// myname, _ := reader.ReadString('\n')
	// fmt.Println(myname)

	reader := bufio.NewReader(os.Stdin)
	fmt.Print("enter your rating: ")
	myRating, _ := reader.ReadString('\n')
	myNumRating, _ := strconv.ParseFloat(strings.TrimSpace(myRating), 64)
	fmt.Print(myNumRating)
	fmt.Printf("%T", myNumRating)

}
