import { BrowserRouter as Router, Route, Routes } from "react-router-dom";
import LogIn from "./components/UserLogin/LogIn";
import Register from "./components/UserLogin/Register";
import Reset from "./components/UserLogin/Reset";
import Dashboard from "./components/Dashboard";
import { auth } from "./firebase";
import { useAuthState } from "react-firebase-hooks/auth";

import React from "react";

function App() {
  
  const [user, loading] = useAuthState(auth);

  return (
    <div className="app">
      <Router>
        <Routes>
          if(user) <Route exact path="/dashboard" element={<Dashboard />} /> ;
          <Route exact path="/" element={<LogIn />} />
          <Route exact path="/register" element={<Register />} />
          <Route exact path="/reset" element={<Reset />} />
          <Route exact path="/dashboard" element={<Dashboard />} />
        </Routes>
      </Router>
    </div>
  );
}

export default App;
