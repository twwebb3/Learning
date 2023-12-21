
import Foundation

func mainMenu() {
    while true {
        print("Select an option:")
        print("1. Five Day Forecast.")
        print("2. Weather History.")
        print("3. Major Weather Events.")
        print("4. Quit.")
        
        if let choice = readLine() {
            switch choice {
            case "1":
                let forecast = generateFiveDayForecast()
                displayFiveDayForecast(forecast: forecast)
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
