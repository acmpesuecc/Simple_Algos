<h2>Finding Delay Time In Networks Using Graph Theory</h2> <br>
<h3>Problem Description</h3><br>
<b> In a Network , we have " N " nodes where each node is labelled as 1 to N and "E" directed edges. </b><br>
<b> Given " times " , which is a list of travel times as directed edges where each times[i] is represented as (u , v, w) , where "u" is the source node , "v" is the destination node , "w" is time taken to travel from source to destination node.
<br>
<b>We also have a starting node "K" from where we send the starting signal.<b>
<br>
<b>Determine how long it will take for all nodes to get the signal.</b>
<br>If it is not possible for all nodes to receive the signal , you can output -1 . </b>
<br>
<h3> Constraints</h3>
<b> 1. N will be ranging from [1,100].</b> <br>
<b> 2. K will be ranging from [1,N].</b> <br>
<b> 3. Length of Times will be ranging from [1,6000].</b> <br>
<b> 4. 1 <= (u , v) <= N , 0 <= w <= 100</b> <br>

<h3>Sample Input Output</h3>
<b> N=4 E=3 K=2 </b><br>
<b> u  v  w </b><br>
<b> 2  1  1</b><br>
<b> 2  3  1</b><br>
<b> 3  4  1</b><br>

<b> Output :</b><br>
<b> The delay is 2 </b>
