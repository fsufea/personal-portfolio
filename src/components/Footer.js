import { Container, Row, Col } from "react-bootstrap";
import logo from "../assets/img/logo.svg";
import navIcon1 from "../assets/img/nav-icon1.svg";
import navIcon3 from "../assets/img/nav-icon3.svg";

export const Footer = () => {
  return (
    <footer className="footer">
      <Container>
        <Row className="align-items-center">
          <Col size={12} sm={6}>
            <img src={logo} alt="Logo" className="footer-logo" />
          </Col>
          <Col size={12} sm={6} className="text-center text-sm-end">
            <div className="social-icons">
              <a href="https://www.linkedin.com/in/nur-faraayuni-sufea-mohd-supian/" className="social-icon">
                <img src={navIcon1} alt="LinkedIn" />
              </a>
              <a href="https://www.instagram.com/faraayunisufea/" className="social-icon">
                <img src={navIcon3} alt="Instagram" />
              </a>
            </div>
            <p>&copy; 2025. All Rights Reserved</p>
          </Col>
        </Row>
      </Container>
    </footer>
  );
};
