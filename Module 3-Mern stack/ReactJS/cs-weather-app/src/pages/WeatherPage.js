import WeatherSummary from "../components/WeatherSummary";

const WeatherPage = () => {
    return (
        <div>
            <h1 className="ui header">Weather</h1>
            <button className="ui icon button" onClick={() => {
                console.log("Temparature Unit button was Clicked.");
            }}>°F</button>
            <div>
                <WeatherSummary />

            </div>
        </div>
    );
};

export default WeatherPage;