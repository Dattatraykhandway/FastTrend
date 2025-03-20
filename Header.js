import Link from 'next/link';
import styles from './Header.module.css';

export default function Header() {
  return (
    <header className={styles.header}>
      <div className={styles.logo}>FastTrend</div>
      <nav>
        <Link href="/">Home</Link>
        <Link href="/login">Login</Link>
      </nav>
    </header>
  );
}