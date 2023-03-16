


const myFunc = (param1, param2) => {
    console.log("time: ", Date.now());
    console.log(param1, param2)
}

setInterval(myFunc, 1000, 17, "sers");