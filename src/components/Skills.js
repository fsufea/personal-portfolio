import React from 'react';
import { Container, Row, Col } from 'react-bootstrap';
import Carousel from 'react-multi-carousel'; // Corrected import for Carousel
import 'react-multi-carousel/lib/styles.css';
import meter1 from '../assets/img/meter1.svg';
import meter2 from '../assets/img/meter2.svg';
import meter3 from '../assets/img/meter3.svg';
import colorSharp from '../assets/img/color-sharp.png';

export const Skills = () => {
  const responsive = {
    superLargerDesktop: {
      breakpoint: { max: 4000, min: 3000 },
      items: 5,
    },
    desktop: {
      breakpoint: { max: 3000, min: 1024 },
      items: 3,
    },
    tablet: {
      breakpoint: { max: 1024, min: 464 },
      items: 2,
    },
    mobile: {
      breakpoint: { max: 464, min: 0 },
      items: 1,
    },
  };

  return (
    <section className="skills" id="skills">
      <Container>
        <Row>
          <Col>
        <div className="skill-box"> {/* Correct class name here */}
            <h2>Skills</h2>
            <p>I am proficient in multiple programming languages, including PHP, HTML, CSS, JavaScript, React, C, C++, C#, .NET, Java, Python, Flutter and MySQL.</p>
            <Carousel responsive={responsive} infinite={true} className="skill-slider">
            <div className="item">
                <img src={meter1} alt="" />
                <h5>HTML, CSS, JavaScript</h5>
            </div>
            <div className="item">
                <img src={meter2} alt="" />
                <h5>Java</h5>
            </div>
            <div className="item">
                <img src={meter3} alt="" />
                <h5>C++ Programming</h5>
            </div>
            <div className="item">
                <img src={meter3} alt="" />
                <h5>C Programming</h5>
            </div>
            <div className="item">
                <img src={meter2} alt="" />
                <h5>Python</h5>
            </div>
            <div className="item">
                <img src={meter2} alt="" />
                <h5>React</h5>
            </div>
            <div className="item">
                <img src={meter2} alt="" />
                <h5>Flutter & Dart</h5>
            </div>
            <div className="item">
                <img src={meter1} alt="" />
                <h5>PHP</h5>
            </div>
            <div className="item">
                <img src={meter2} alt="" />
                <h5>C# & .NET</h5>
            </div>
            </Carousel>
        </div>
        </Col>
        </Row>
      </Container>
      <img className="background-image-left" src={colorSharp} alt="" />
    </section>
  );
};

