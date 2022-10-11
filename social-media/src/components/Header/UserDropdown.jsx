import React from "react";
import { auth, logout, signInWithGoogle } from "../../firebase";
import { useNavigate } from "react-router-dom";
import { useAuthState } from "react-firebase-hooks/auth";

function UserDropdown() {
  const [user, loading] = useAuthState(auth);
  const navigate = useNavigate();

  const checkUser = () => {
    if (!user) {
      <button onClick={navigate("/")}>Sign In</button>;
      return;
    }
    if (user) {
      <div className="ui floating labeled icon dropdown button">
        <i className="filter icon"></i>
        <span className="text">{user.name}</span>
        <div className="menu">
          <a className="header" onClick={navigate("/Profile")}>Profile</a>
          <div className="divider"></div>
          <div className="item">
            <span className="text" onClick={logout}>
              Log Out
            </span>
          </div>
        </div>
      </div>;
    }
  };

  return (
    <div>
      <checkUser />
    </div>
  );
}

export default UserDropdown;
