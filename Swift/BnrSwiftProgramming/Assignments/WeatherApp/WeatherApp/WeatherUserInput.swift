
import Foundation

func mainMenu() {
    while true {
        print("Select an option:")
        
        if let choice = readLine() {
            switch choice {
            case "1":
                print("You selected option 1.")
            case "2":
                print("You selected option 2.")
            case "3":
                print("You selected option 3.")
            case "4":
                print("Terminating...")
                exit(0)
            default:
                print("Invalid option. Please try again.")
            }
        }
    }
}
