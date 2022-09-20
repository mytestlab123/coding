// docs: https://go.dev/doc/tutorial/handle-errors

package main

import (
	"fmt"
	"log"
	"example.com/greetings"
)

func main() {

	log.SetPrefix("greetings: ")
	log.SetFlags(0)

	// message := greetings.Hello("Gladys")
	message, err := greetings.Hello("")

	if err != nil {
		log.Fatal(err)
	}
	fmt.Println(message)
}