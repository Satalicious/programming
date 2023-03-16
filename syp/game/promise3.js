


let myPromise = (value) => 
new Promise(function(resolve, reject) {
    if (value >= 0) { resolve("cool, v= " + value);} else {reject("not cool, v= " + value)}
})


(async () => { // serial

    let r1 = await myPromise(0);
    let r2 = await myPromise(1);
    let r3 = await myPromise(-2).catch((err) => {console.log("bloed aber")});
    console.log(r1)
    console.log(r2)
    console.log(r3)
})();


