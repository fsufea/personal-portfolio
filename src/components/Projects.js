import { Container, Row, Col, Tab, Nav } from "react-bootstrap";
import { ProjectCard } from "./ProjectCard";
import pythonImg1 from "../assets/img/alarm.png";
import pythonImg2 from "../assets/img/digitalclock.png";
import pythonImg3 from "../assets/img/stopwatch.png";
import pythonImg4 from "../assets/img/weather.png";
import pythonImg5 from "../assets/img/dice.png";
import pythonImg6 from "../assets/img/hangman.png";
import pythonImg7 from "../assets/img/rockpaperscissors.png";
import pythonImg8 from "../assets/img/atm.png";
import pythonImg9 from "../assets/img/number.png";


import colorSharp2 from "../assets/img/color-sharp2.png";
import 'animate.css';
import TrackVisibility from 'react-on-screen';

export const Projects = () => {

  const python = [
    {
      title: "Python Alarm Clock",
      description: "This Python program is an alarm clock that alerts the user at a specified time. It uses the pygame library to play an alarm sound when the current time matches the user-set alarm time. ",
      imgUrl: pythonImg1,
      url: "https://github.com/fsufea/python/blob/main/alarmclock.py"
    },
     {
      title: "Digital Clock",
      description: "This Python script creates a simple digital clock using the PyQt5 library. The clock displays the current time in a window, updating every second.",
      imgUrl: pythonImg2,
      url: "https://github.com/fsufea/python/blob/main/digitalclock.py"
    },
    {
      title: " Stopwatch",
      description: "This Python code creates a simple stopwatch application using PyQt5. It features a GUI with buttons for starting, stopping, and resetting the stopwatch. The stopwatch updates every 10 milliseconds using a QTimer.",
      imgUrl: pythonImg3,
      url: "https://github.com/fsufea/python/blob/main/stopwatch.py"
    },
    {
      title: "Weather App with API",
      description: "This Python code creates a weather app using PyQt5 and the OpenWeatherMap API. The app allows users to input a city name, retrieve weather data, and display the temperature, weather description, and an emoji representing the current weather conditions.",
      imgUrl: pythonImg4,
      url: "https://github.com/fsufea/python/blob/main/weatherappwithAPI.py"
    },
    {
      title: "Dice",
      description: "This Python script simulates rolling a specified number of dice (between 1 and 6 sides). The user is prompted to input the number of dice, and then random values between 1 and 6 are assigned to each die. The dice faces are represented as ASCII art stored in a dictionary, and the results are displayed in a horizontal format. The total sum of the dice rolls is also calculated and printed.",
      imgUrl: pythonImg5,
      url: "https://github.com/fsufea/python/blob/main/dicerollerprogram.py"
    },
    {
      title: "Guess The Word (Hangman)",
      description: "This Python script implements a simple Hangman game. It selects a random word from a predefined list (wordslist) and prompts the user to guess letters. Each incorrect guess progresses the 'hangman' drawing, and the user loses if the drawing reaches completion. The game ends when the word is fully guessed or the hangman is fully drawn.",
      imgUrl: pythonImg6,
      url: "https://github.com/fsufea/python/blob/main/hangmangame.py"
    },
    {
      title: "Rock Paper Scissors",
      description: "This Python script is a simple implementation of the classic 'Rock, Paper, Scissors' game. The player is prompted to input their choice (rock, paper, or scissors), while the computer randomly selects its choice. The game then compares the player's and computer's choices and announces the winner based on the game rules. If it's a tie, it will state that.",
      imgUrl: pythonImg7,
      url: "https://github.com/fsufea/python/blob/main/rockpaperscissor.py"
    },
     {
      title: "Banking Program",
      description: "This Python script is a simple banking program where users can check their balance, deposit money, and withdraw funds. The program runs in a loop, continuously showing the menu and processing user input until the user selects the option to exit. It handles invalid input, such as negative deposit or withdrawal amounts, and shows error messages when necessary.",
      imgUrl: pythonImg8,
      url: "https://github.com/fsufea/python/blob/main/bankingprogram.py"
    },
     {
      title: "Guess the Number",
      description: "This Python script implements a simple number guessing game. The game randomly selects a number between 1 and 100, and the player is tasked with guessing the number. The player is continuously prompted to guess until the correct number is guessed.",
      imgUrl: pythonImg9,
      url: "https://github.com/fsufea/python/blob/main/numberguessinggame.py"
    },
  ];

  const cSharp = [
    {
      title: "Web Project 1",
      description: "A web project description here",
      imgUrl: pythonImg1,
    },
    {
      title: "Web Project 2",
      description: "Another web project description",
      imgUrl: pythonImg1,
    },
    {
      title: "Web Project 3",
      description: "Web development project description",
      imgUrl: pythonImg3,
    },
  ];

  return (
    <section className="project" id="projects">
      <Container>
        <Row>
          <Col size={12}>
            <TrackVisibility>
              {({ isVisible }) =>
              <div className={isVisible ? "animate__animated animate__fadeIn": ""}>
                <h2>Projects</h2>
                <p>Explore a variety of projects showcasing my skills in programming, web development, and design.</p>
                <Tab.Container id="projects-tabs" defaultActiveKey="first">
                  <Nav variant="pills" className="nav-pills mb-5 justify-content-center align-items-center" id="pills-tab">
                    <Nav.Item>
                      <Nav.Link eventKey="first">Python</Nav.Link>
                    </Nav.Item>
                    <Nav.Item>
                      <Nav.Link eventKey="second">C# Programming</Nav.Link>
                    </Nav.Item>
                    <Nav.Item>
                      <Nav.Link eventKey="third">Design</Nav.Link>
                    </Nav.Item>
                    <Nav.Item>
                      <Nav.Link eventKey="fourth">Design</Nav.Link>
                    </Nav.Item>
                    <Nav.Item>
                      <Nav.Link eventKey="fifth">Web Developments</Nav.Link>
                    </Nav.Item>
                    <Nav.Item>
                      <Nav.Link eventKey="sixth">Design</Nav.Link>
                    </Nav.Item>
                  </Nav>
                  <Tab.Content id="slideInUp" className={isVisible ? "animate__animated animate__slideInUp" : ""}>
                    <Tab.Pane eventKey="first">
                      <Row>
                        {
                          python.map((project, index) => {
                            return (
                              <ProjectCard
                                key={index}
                                {...project}
                                />
                            )
                          })
                        }
                      </Row>
                    </Tab.Pane>
                    <Tab.Pane eventKey="second">
                      <Row>
                          {cSharp.map((project, index) => {
                            return (
                              <ProjectCard
                                key={index}
                                {...project}
                              />
                            );
                          })}
                        </Row>                    </Tab.Pane>
                    <Tab.Pane eventKey="third">
                      <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Cumque quam, quod neque provident velit, rem explicabo excepturi id illo molestiae blanditiis, eligendi dicta officiis asperiores delectus quasi inventore debitis quo.</p>
                    </Tab.Pane>
                    <Tab.Pane eventKey="fourth">
                      <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Cumque quam, quod neque provident velit, rem explicabo excepturi id illo molestiae blanditiis, eligendi dicta officiis asperiores delectus quasi inventore debitis quo.</p>
                    </Tab.Pane>
                  </Tab.Content>
                </Tab.Container>
              </div>}
            </TrackVisibility>
          </Col>
        </Row>
      </Container>
      <img className="background-image-right" src={colorSharp2} alt="Decorative background" />
    </section>
  )
}