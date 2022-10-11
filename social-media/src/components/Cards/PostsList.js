import React, { useState, useEffect } from "react";
import { db } from "./firebase";
import { Posts } from "./Posts";

function PostList() {
  const [posts, setPosts] = useState([]);
  useEffect(() => {
    db.collection("posts").onSnapshot((snapshot) => {
      setPosts(snapshot.doc.map((doc) => doc.data()));
    });
  }, []);
  return (
    <div className="postlist-container">{posts.map((post) => 
        <Posts
        userName = {post.userName}
        caption = {post.caption}
        image = {post.imageUrl}
        />
        )}</div>
  );
}

export default PostList;
