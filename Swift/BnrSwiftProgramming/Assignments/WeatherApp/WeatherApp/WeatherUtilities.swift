
import Foundation

func roundToTwoDecimalPlaces(value: Double) -> Double {
    return (value * 100).rounded() / 100
}

func generateRandomTemp() -> Double {
    return roundToTwoDecimalPlaces(value: Double.random(in: 0...100))
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

func generatePrecipitationChance(isCloudy: String) -> Double {
    if isCloudy=="cloudy" {
        return roundToTwoDecimalPlaces(value: Double.random(in: 0...1))
    } else {
        return 0
    }
}

func generatePrecipitationType(precipitationChance: Double, temperature: Double) -> String {
    if temperature<36 {
        return "snow"
    } else {
        return "rain"
    }
}

func todaysWeather() {
    let temperature = generateRandomTemp()
    let windCondition = generateWindCondition()
    let windSpeed = generateWindSpeed(isWindy: windCondition)
    let cloudCoverage = generateCloudCoverage()
    let precipitationChance = generatePrecipitationChance(isCloudy: cloudCoverage)
    let precipitationType = generatePrecipitationType(precipitationChance: precipitationChance, temperature: temperature)
    
    print("Here is today's weather: ")
    print("Temperature: \(temperature)°F")
    print("Wind Condition: \(windCondition)")
    print("Wind Speed: \(windSpeed)")
    print("Cloud Coverage: \(cloudCoverage)")
    print("Precipitation: There's a \(precipitationChance)% chance of \(precipitationType).")
}
