const express = require('express');
const app = express();

app.get("/", (req, res) => { 
    let frank_sinatra = ["Ac-cent-tchu-ate the Positive", "Accidents Will Happen",
   "Adeste Fideles", "Ad-Lib Blues", "An Affair to Remember (Our Love Affair)", "After You've Gone",
   "Ain't She Sweet", "Ain't Cha Ever Comin' Back?", "Air For English Horn", "Alice Blue Gown",
   "All Alone", "All By Myself", "All I Do Is Dream of You", "All I Need is the Girl", "All of Me",
   "All My Tomorrows", "All of You", "All or Nothing at All", "All the Things You Are", "Almost Like Being in Love"];
   
    let songs = frank_sinatra[Math.floor(Math.random()*frank_sinatra.length)];

   res.send(songs);
});

app.get("/birth_date", (req, res) => { 
    let birth = '12.12.1915';

    res.send(birth);
});

app.get("/birth_city", (req, res) => { 
    let city = 'New Jersey';

    res.send(city);
});

app.get("/wives", (req, res) => { 
    let wifes = "Nancy Sandra Sinatra, Ava Lavinia Gardner, María de Lourdes, Barbara Marx";
    
        res.send(wifes);

});

app.get('/picture', (req, res) => {
    res.write(`<html><body><img src="${`https://upload.wikimedia.org/wikipedia/commons/a/af/Frank_Sinatra_%2757.jpg`}" /></body></html>`) 
    res.send();
})

const basicAuth = require('express-basic-auth');

app.get('/public', (req, res) => {
    res.send('Everybody can see this page');
});

app.use(
    basicAuth({
        users: { admin: 'admin' },
        unauthorizedResponse: (req) => {
            return '401 Not authorized';
        },
    })
);

app.get('/protected', (req, res) => {
    res.send('Welcome, authenticated client');
});


const port = 8080;

app.listen(port, () => {
    console.log(`Server listening at ${port}`);
});

