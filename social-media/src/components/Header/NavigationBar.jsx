import React, { useState, useEffect } from "react";
import { useAuthState } from "react-firebase-hooks/auth";
import { auth } from "../../firebase";
import UserDropdown from "./UserDropdown" ;

function NavigationBar() {
  const [user, loading] = useAuthState(auth);
  return (
    <div class="ui pointing menu">
      <a class="active item">Home</a>
      <a class="item">Messages</a>
      <a class="item">Friends</a>
      <div class="right menu">
        <div class="item">
          <div class="ui transparent icon input">
            <input type="text" placeholder="Search..." />
            <i class="search link icon"></i>
          </div>
        </div>
        <a><img onClick={ ()=> {<UserDropdown/>}}/></a>
      </div>
    </div>
  );
}

export default NavigationBar;
