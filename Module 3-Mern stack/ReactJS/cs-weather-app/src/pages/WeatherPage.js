import {useEffect} from "react";
import WhetherRow from "../components/WeatherRow";
import WeatherSummary from "../components/WeatherSummary";

const fetchCoordinates = (callback) => {
    navigator.geolocation.getCurrentPosition(({coords: {latitude, longitude}}) => {
        callback(latitude, longitude);
    },
    (err) => console.log(err)
    );
};

const WeatherPage = () => {
    const isDay = true;

    useEffect(() => {
        fetchCoordinates((latitude, longitude) => {
            console.log(latitude, longitude);
        })
    }, [])
    return (
        <div className={isDay ? "app" : "app dark"}>
            <h1 className="my-heading">Weather</h1>
            <button className="ui icon button" onClick={() => {
                console.log("Temparature Unit button was Clicked.");
            }} style={{ float: "right" }}>°F</button>
            <div>
                <WeatherSummary />
                <table className={`ui very basic table${!isDay ? " dark" : ""}`} >
                    <thead className={`table-custom${!isDay ? " dark" : ""}`}>
                        <tr>
                            <th>Date</th>
                            <th>Temperature</th>
                            <th>Type</th>
                        </tr>
                    </thead>
                    <tbody className="table-custom">
                        <WhetherRow />
                        <WhetherRow />
                        <WhetherRow />
                        <WhetherRow />
                        <WhetherRow />
                        <WhetherRow />
                        <WhetherRow />
                    </tbody>
                </table>

            </div>
        </div>
    );
};

export default WeatherPage;