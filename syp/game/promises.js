
let delay = (time) => {
    return new Promise(res => setTimeout(res,time))
}

(async () => {
    for(let i = 0; i < 10; i++) { await delay(1000)
console.log("t => ", Date.now())}
})();         
