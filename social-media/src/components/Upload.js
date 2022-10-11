import React, { useState } from "react";
import { db, storage } from "../firebase";

function Upload(props) {
  const [caption, setCaption] = useState("");
  const [image, setImage] = useState(null);

  const handleChange = (e) => {
    if (e.target.files[0]) {
      setImage(e.target.files[0]);
    }
  };

  const handleUpload = () => {
    const uploadImage = storage.ref(`images/${image.name}`).put(image);

    uploadImage.on(
        "state_changed",
        ()=>{
            storage
            .ref('images')
            .child(image.name)
            .getDownloadURL()
            .then(url => {
              db.collections('posts').add({
                timestamp : firebase.firestore.FieldValue.serverTimeStamp(), 
                caption : caption,
                imageUrl : url, 
                username : props.username,

              })
            })
        }
    )


  }
  return (
    <div className="upload-container">
      <input
        type="text"
        placeholder="caption"
        onChange={(e) => setCaption(e.target.value)}
        value={captions}
      />
      <input type="file" onChange={handleChange} />
      <button onClick={handleUpload}>Upload</button>
    </div>
  );
}

export default Upload;
