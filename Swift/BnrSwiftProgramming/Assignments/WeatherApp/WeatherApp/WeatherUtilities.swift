
import Foundation

func generateRandomTemp() -> Double {
    return Double.random(in: 0...100)
}

func generateWindCondition() -> String {
    let isWindy = Bool.random()
    return isWindy ? "windy" : "calm"
}

func generateWindSpeed(isWindy: String) -> Int {
    if isWindy=="windy" {
        return Int.random(in: 1...30)
    } else {
        return 0
    }
}

func generateCloudCoverage() -> String {
    let isCloudy = Bool.random()
    return isCloudy ? "cloudy" : "clear"
}

func todaysWeather() {
    let temperature = generateRandomTemp()
    let windCondition = generateWindCondition()
    let windSpeed = generateWindSpeed(isWindy: windCondition)
    let cloudCoverage = generateCloudCoverage()
    
    print("Here is today's weather: ")
    print("Temperature: \(temperature)°F")
    print("Wind Condition: \(windCondition)")
    print("Wind Speed: \(windSpeed)")
    print("Cloud Coverage: \(cloudCoverage)")
}
