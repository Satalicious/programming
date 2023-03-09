

const Redis = require("ioredis");
const redis = new Redis();

let players = ["timy", "markus"];
let api_resp = [];

redis.lrange("players", 0, -1, (err, result) => {
    players = result;
    
    players.forEach((player, i) => {
        redis.get(player, (err,res) => {
            console.log("player: ", res)
            api_resp.push(res);
            console.log(i, players.length)
            if(i==(players.length-1)) {
                console.log("api resp: ")
                console.dir(api_resp)
            }
        })
    })
});




