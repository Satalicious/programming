const Redis = require("ioredis");


sample = (async () => {
    const redis = new Redis();
    
    let obj1 = await redis.get("tim")
    
    let obj2 = await redis.get("mathias")
    
    console.log(obj1)
    console.log(obj2)
    console.log("EOC")

})

sample()



