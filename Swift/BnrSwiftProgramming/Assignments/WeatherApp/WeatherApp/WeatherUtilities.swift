
import Foundation

struct WeatherDay {
    var temperature: Double
    var windCondition: String
    var windSpeed: Int
    var cloudCoverage: String
    var precipitationChance: Double
    var precipitationType: String
}

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

func generateWeatherDay() -> WeatherDay {
    let temperature = generateRandomTemp()
    let windCondition = generateWindCondition()
    let windSpeed = generateWindSpeed(isWindy: windCondition)
    let cloudCoverage = generateCloudCoverage()
    let precipitationChance = generatePrecipitationChance(isCloudy: cloudCoverage)
    let precipitationType = generatePrecipitationType(precipitationChance: precipitationChance, temperature: temperature)

    return WeatherDay(temperature: temperature,
                      windCondition: windCondition,
                      windSpeed: windSpeed,
                      cloudCoverage: cloudCoverage,
                      precipitationChance: precipitationChance,
                      precipitationType: precipitationType)
}

func todaysWeather() {
    let todaysWeather = generateWeatherDay()
    
    print("Here is today's weather: ")
    print("Temperature: \(todaysWeather.temperature)°F")
    print("Wind Condition: \(todaysWeather.windCondition)")
    print("Wind Speed: \(todaysWeather.windSpeed)")
    print("Cloud Coverage: \(todaysWeather.cloudCoverage)")
    print("Precipitation: There's a \(todaysWeather.precipitationChance)% chance of \(todaysWeather.precipitationType).")
}
