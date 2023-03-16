


let myPromise = (value) => 
new Promise(function(resolve, reject) {
    if (value >= 0) { resolve("cool, v= " + value);} else {reject("not cool, v= " + value)}
})



myPromise(0)
.then((val) => {
    console.log(val); 
    return myPromise(-1);
})
.then((val) => {
    console.log(val);
    return myPromise(2);
}, (err) => {
    console.log("im failing");
    return myPromise(2);
})
.then((val) => {
    console.log(val);
    return myPromise(1);
})
.then((val) => {
    console.log(val);
})
.catch((err) => {
    console.log("CATCH => " + err)
})
