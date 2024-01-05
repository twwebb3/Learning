
import Foundation

struct WeatherDay {
    var date: Date
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

func formatDate(date: Date) -> String {
    let dateFormatter = DateFormatter()
    dateFormatter.dateStyle = .medium
    dateFormatter.timeStyle = .none
    
    return dateFormatter.string(from: date)
}

func generateWeatherDay(date: Date) -> WeatherDay {
    let formattedDate = formatDate(date: date)
    let temperature = generateRandomTemp()
    let windCondition = generateWindCondition()
    let windSpeed = generateWindSpeed(isWindy: windCondition)
    let cloudCoverage = generateCloudCoverage()
    let precipitationChance = generatePrecipitationChance(isCloudy: cloudCoverage)
    let precipitationType = generatePrecipitationType(precipitationChance: precipitationChance, temperature: temperature)

    return WeatherDay(date: date,
                      temperature: temperature,
                      windCondition: windCondition,
                      windSpeed: windSpeed,
                      cloudCoverage: cloudCoverage,
                      precipitationChance: precipitationChance,
                      precipitationType: precipitationType)
}

func todaysWeather() {
    let today = Date()
    let todaysWeather = generateWeatherDay(date: today)
    let formattedDate = formatDate(date: today)
    
    print("Here is today's (\(formattedDate)) weather: ")
    print("Temperature: \(todaysWeather.temperature)°F")
    print("Wind Condition: \(todaysWeather.windCondition)")
    print("Wind Speed: \(todaysWeather.windSpeed) mph")
    print("Cloud Coverage: \(todaysWeather.cloudCoverage)")
    print("Precipitation: There's a \(todaysWeather.precipitationChance)% chance of \(todaysWeather.precipitationType).")
}

func generateFiveDayForecast() -> [WeatherDay] {
    var forecast: [WeatherDay] = []
    let today = Date()

    for i in 0...4 {
        let daysFromNow = Calendar.current.date(byAdding: .day, value: i, to: today) ?? Date()
        let weatherDay = generateWeatherDay(date: daysFromNow)
        forecast.append(weatherDay)
    }

    return forecast
}

func displayFiveDayForecast(forecast: [WeatherDay]) {
    for (index, weatherDay) in forecast.enumerated() {
        let formattedDate = formatDate(date: weatherDay.date)
        print("\(formattedDate):")
        print("Temperature: \(weatherDay.temperature)°F")
        print("Wind: \(weatherDay.windCondition) at \(weatherDay.windSpeed) mph")
        print("Cloud Coverage: \(weatherDay.cloudCoverage)")
        print("Precipitation Chance: \(weatherDay.precipitationChance)%")
        print("Precipitation Type: \(weatherDay.precipitationType)")
        print("----------")
    }
}
