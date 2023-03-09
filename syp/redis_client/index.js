const redis = require('redis');

const connectWithRedisURL = () => {
  const client = redis.createClient();

  client.connect();
  client.on('connect', () => console.log('### connected to redis'));

  client.set("i", "#", function(err, reply) {
    console.log("### value of i :",reply)
  });

  client.get("")

  client.quit();
};

connectWithRedisURL();
