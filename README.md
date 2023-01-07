<h1>User Profile Creation</h1>

<p>This program creates a user profile and asks the user for their name, surname, and password. The program will then confirm the input with the user and create two text files, "Public Profile.txt" and "SoftwareProfile.txt", containing the user's first login time and date, username, name, and surname.</p>

<h2>Usage</h2>

<p>To use this program, compile and run the <code>main</code> function. The program will prompt the user for their name, surname, and password, and will confirm the input with the user. The program will then create the two text files mentioned above.</p>
<a href="https://imgur.com/cYOADew"><img src="https://i.imgur.com/cYOADew.png" title="source: imgur.com" /></a>


<h2>File Descriptions</h2>

<ul>
  <li><code>main.cpp</code>: Contains the <code>main</code> function and the function calls to create the user profile and get user input.</li>
  <li><code>Public Profile.txt</code>: A text file containing the user's first login time and date, username, name, and surname, intended to be seen by the user.</li>
  <li><code>SoftwareProfile.txt</code>: A text file containing the same information as <code>Public Profile.txt</code>, but in a format that is easier for the software to read.</li>
</ul>
<a href="https://imgur.com/a/EyGPeZL"><img src="https://i.imgur.com/fDOWVEJ.png" title"source: imgur.com" /></a>
<h2>Dependencies</h2>
<p>This program depends on the following libraries:</p>
<ul>
  <li><code>iostream</code>: for input and output</li>
  <li><code>fstream</code>: for file management</li>
  <li><code>chrono</code>: for the time module</li>
  <li><code>ctime</code>: for the time module</li>
  <li><code>unistd.h</code>: for the username</li>
</ul>
<h2>Contacts</h2>
<ul>
  <li>GitHub: https://github.com/williamaerus/ (Creator)</li>
  <li>Instagram: https://instagram.com/Francesco.serangeli (Creator)</li>
  <li>GitHub: https://github.com/ilPax (collaborator)</li>
</ul>
<h2>Notes</h2>
<ul>
  <li>The program will keep asking the user for their name, surname, or password if the user does not confirm their input.</li>
  <li>The program will ask the user to confirm their input by typing "y" or "n". Other input will be treated as invalid.</li>
</ul>
