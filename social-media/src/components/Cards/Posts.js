import React ,{useState , useEffect} from 'react';
import {db} from './firebase';

function Posts({props}) {
 
    return (
        <div className="post-container">
            <div className="header">
                {props.userName}
            </div>
            <div className="image-container">
                {props.image}
            </div>
            <div class="caption-container">
                {props.caption}
            </div>
        </div>
     );
}

export default Posts;