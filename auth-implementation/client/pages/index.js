
import buildClient from "../api/build-client";

const LandingPage = ({ currentUser }) => {
  console.log(currentUser);

  // axios.get("/api/users/currentUser").catch((err) => {
  //   console.log(err.message);
  // });

  return <h1>Landing Page</h1>;
};

LandingPage.getInitialProps = async ({req}) => {
  const {data} = await buildClient({req}).get('/api/users/currentuser')
};

export default LandingPage;
