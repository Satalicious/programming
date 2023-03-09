const Redis = require("ioredis");


let promise = (time) => {
    return new Promise(res => setTimeout(res,time))
}

(async () => {
    for(let i = 0; i < 10; i++) { await promise(1000)
console.log("t => ", Date.now())}
})();         
