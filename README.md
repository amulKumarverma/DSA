<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>DSA in C++ | Amul Kumar Verma</title>
    <style>
        body {
            font-family: 'Segoe UI', sans-serif;
            margin: 0;
            background: #0f172a;
            color: #e5e7eb;
            line-height: 1.6;
        }

        header {
            background: linear-gradient(135deg, #2563eb, #1e40af);
            padding: 40px;
            text-align: center;
        }

        header h1 {
            font-size: 2.8rem;
            margin-bottom: 10px;
        }

        section {
            padding: 40px 10%;
        }

        h2 {
            color: #38bdf8;
            margin-bottom: 10px;
        }

        .card {
            background: #1e293b;
            padding: 20px;
            border-radius: 12px;
            margin-bottom: 20px;
            box-shadow: 0 0 10px rgba(0,0,0,0.4);
        }

        ul {
            padding-left: 20px;
        }

        li {
            margin: 6px 0;
        }

        button {
            padding: 10px 18px;
            border: none;
            border-radius: 8px;
            background: #22c55e;
            color: #000;
            font-weight: bold;
            cursor: pointer;
            margin-top: 10px;
        }

        button:hover {
            background: #16a34a;
        }

        .code-box {
            background: #020617;
            padding: 15px;
            border-radius: 8px;
            font-family: monospace;
            overflow-x: auto;
            display: none;
        }

        footer {
            text-align: center;
            padding: 20px;
            background: #020617;
            color: #94a3b8;
        }
    </style>
</head>
<body>

<header>
    <h1>📘 Data Structures & Algorithms in C++</h1>
    <p>Learn • Practice • Master DSA</p>
</header>

<section>
    <h2>🚀 About the Project</h2>
    <div class="card">
        <p>
            This repository contains beginner-friendly and optimized implementations of
            Data Structures and Algorithms using C++. It is designed for students preparing
            for <b>placements, GATE, interviews, and competitive programming</b>.
        </p>
    </div>
</section>

<section>
    <h2>📂 Folder Structure</h2>
    <div class="card">
<pre>
DSA_IN_CPP/
│
├── Basic_Patterns/
├── Arrays/
├── Strings/
├── Linked_List/
├── Stack/
├── Queue/
├── Recursion/
├── Searching/
├── Sorting/
├── Trees/
├── Graphs/
├── Dynamic_Programming/
├── Bit_Manipulation/
├── STL/
└── Practice_Problems/
</pre>
    </div>
</section>

<section>
    <h2>⭐ Example: Star Pattern</h2>
    <button onclick="toggleCode()">Show / Hide Code</button>

    <div id="codeBlock" class="code-box">
<pre>
#include &lt;iostream&gt;
using namespace std;

int main() {
    int n = 5;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
</pre>
    </div>
</section>

<section>
    <h2>🧠 Topics Covered</h2>
    <div class="card">
        <ul>
            <li>Arrays & Strings</li>
            <li>Recursion</li>
            <li>Searching & Sorting</li>
            <li>Stack & Queue</li>
            <li>Linked List</li>
            <li>Trees & Graphs</li>
            <li>Dynamic Programming</li>
            <li>Bit Manipulation</li>
            <li>STL (Vector, Map, Set, Queue)</li>
        </ul>
    </div>
</section>

<section>
    <h2>🧪 How to Run</h2>
    <div class="card">
        <pre>
git clone https://github.com/your-username/DSA_IN_CPP.git
cd DSA_IN_CPP
g++ filename.cpp -o output
./output
        </pre>
    </div>
</section>

<section>
    <h2>👨‍💻 Author</h2>
    <div class="card">
        <p><strong>Amul Kumar Verma</strong></p>
        <p>B.Tech (CSE) | Aspiring Software Engineer</p>
        <p>Passionate about DSA, AI & Software Development</p>
    </div>
</section>

<footer>
    ⭐ If you like this project, don't forget to star the repository!
</footer>

<script>
function toggleCode() {
    const code = document.getElementById("codeBlock");
    code.style.display = code.style.display === "none" ? "block" : "none";
}
</script>

</body>
</html>
