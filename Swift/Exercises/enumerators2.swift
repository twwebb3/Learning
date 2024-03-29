/* 
*/

enum MenuOption: String {
    // Option enter text and validate there are no numbers in it
    case enterText = "1"
    case enterNumber = "2"
    case exit = "3"

    static func allCases() -> [MenuOption] {
        // Return an array of all the cases
        return [.enterText, .enterNumber, .exit]
    }

    func description() -> String {
        // Return a description of the option
        switch self {
        case .enterText:
            return "Enter text"
        case .enterNumber:
            return "Enter number"
        case .exit:
            return "Exit"
        }
    }


}

func printMenu() {
    // Print the menu options
    // use a loop to print each option
    for option in MenuOption.allCases {
        print("\(option.rawValue). \(option.description())")
    }
}

func getMenuItem() -> MenuOption {
    // Get user input and convert it to a MenuOption
}

func performAction(for option: MenuOption) {
    // Use a switch statement to handle each case
}

// Main program loop
while true {
    printMenu()
    let option = getMenuItem()

    if option == .exit {
        break
    }

    performAction(for: option)
}
