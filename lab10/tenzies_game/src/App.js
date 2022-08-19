
import './App.css'
import React from "react"
import Die from "./Die"
import { nanoid } from "nanoid"
import Confetti from "react-confetti"
import { useStopwatch } from 'react-timer-hook';

export default function App() {

    const [dice, setDice] = React.useState(allNewDice())
    const [tenzies, setTenzies] = React.useState(false)
    const [counter, setCounter] = React.useState(0)

    const {
        seconds,
        minutes,
        start,
        pause,
        reset,
    } = useStopwatch({ autoStart: true });

    React.useEffect(() => {
        const allHeld = dice.every(die => die.isHeld)
        const firstValue = dice[0].value
        const allSameValue = dice.every(die => die.value === firstValue)
        if (allHeld && allSameValue) {
            setTenzies(true)
            pause()
            let bestTime = localStorage.getItem('best_time') === null ? 0 : localStorage.getItem('best_time')
            let currentTime = minutes > 0 ? (minutes*60)+seconds : seconds
            console.log(`current time: ${currentTime}, best_time ${bestTime}`)
            if (currentTime < bestTime || bestTime === 0)
                localStorage.setItem('best_time', JSON.stringify(currentTime));
        }
    }, [dice, pause,minutes,seconds])

    function MyStopwatch(props) {
        return (
            <div style={{ textAlign: 'center' }}>
                <div style={{ fontSize: '20px', color: 'green' }}>
                    {minutes > 0 ? <span>{`${minutes} : `}</span> : ""}<span>{seconds}</span>
                </div>
            </div>
        );
    }

    function generateNewDie() {
        return {
            value: Math.ceil(Math.random() * 6),
            isHeld: false,
            id: nanoid()
        }
    }

    function allNewDice() {
        const newDice = []
        for (let i = 0; i < 10; i++) {
            newDice.push(generateNewDie())
        }
        return newDice
    }

    function rollDice() {
        setCounter(prevCount => prevCount + 1)
        if (!tenzies) {
            setDice(oldDice => oldDice.map(die => {
                return die.isHeld ?
                    die :
                    generateNewDie()
            }))
        } else {
            setTenzies(false)
            setDice(allNewDice())
            setCounter(0)
            reset()
        }
    }

    function holdDice(id) {
        setDice(oldDice => oldDice.map(die => {
            return die.id === id ?
                { ...die, isHeld: !die.isHeld } :
                die
        }))
    }

    const diceElements = dice.map(die => (
        <Die
            key={die.id}
            value={die.value}
            isHeld={die.isHeld}
            holdDice={() => holdDice(die.id)}
        />
    ))

    return (
        <main>
            {tenzies && <Confetti />}
            <h1 className="title">Tenzies</h1>
            <p className="instructions">Roll until all dice are the same.
                Click each die to freeze it at its current value between rolls.</p>
            <MyStopwatch start={start} pause={pause} reset={reset}/>
            <p>{counter}</p>
            <div className="dice-container">
                {diceElements}
            </div>
            <button
                className="roll-dice"
                onClick={rollDice}
            >
                {tenzies ? "New Game" : "Roll"}
            </button>
            
        </main>
    )
}