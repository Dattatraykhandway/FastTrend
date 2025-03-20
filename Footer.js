export default function Footer() {
  return (
    <footer style={{ textAlign: 'center', padding: '1rem', background: '#1e1e1e' }}>
      © {new Date().getFullYear()} FastTrend. All rights reserved.
    </footer>
  );
}