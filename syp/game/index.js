

const Redis = require("ioredis");
const redis = new Redis();

redis.flushall();

var players = ["nadine", "miha", "tim", "mathias"];

for (let i = 0; i < players.length; i++) {
    console.log("registering player: ", players[i])
    redis.lpush("players", players[i], (err, suc) => {
        let obj = {};
        obj.x = Math.random() * 400;
        obj.y = Math.random() * 300;
        obj.name = players[i];
        redis.set(players[i], JSON.stringify(obj));
        console.log("...ok");
    });
}

console.log("everything ready")
