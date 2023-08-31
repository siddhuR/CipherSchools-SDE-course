const dateFormatter = new Intl.DateFormat("en-IN", {
    dateStyle: "medium",
    hour12: true,
    hour: "numeric",
    minute: "numeric",
    year:  "numeric",
    month: "shorts",
    day:"2-digit"
 });
export const formatDate = (data)=> dateFormatter.format(data);