import Head from 'next/head';
import Header from '../components/Header';
import Footer from '../components/Footer';
import PostCard from '../components/PostCard';
import styles from '../styles/Home.module.css';

export default function Home({ posts }) {
  return (
    <div className={styles.container}>
      <Head>
        <title>FastTrend - Trending News</title>
        <meta name="description" content="Stay updated with trending news" />
      </Head>
      <Header />
      <main className={styles.main}>
        <h1>Trending News</h1>
        <div className={styles.grid}>
          {posts.map((post) => (
            <PostCard key={post._id} post={post} />
          ))}
        </div>
      </main>
      <Footer />
    </div>
  );
}

export async function getServerSideProps() {
  const posts = [
    { _id: '1', title: 'News 1', summary: 'Summary of news 1' },
    { _id: '2', title: 'News 2', summary: 'Summary of news 2' },
    { _id: '3', title: 'News 3', summary: 'Summary of news 3' }
  ];
  return { props: { posts } };
}