<h1> Tree + Heap = Treap </h1>

<b>What is a Treap ? </b>

It's just a Randomised Binary Search Tree . Each Node in a Treap has a key value ( BST Property ) and a Random priority value which follows the  Heap property (Max or Min) !!

<br>
<b> Functions to Implement assuming Max Heap Property. </b

<ol>

<li> Searching a Key value in Treap. </li>
<li> Inserting a New Node in Treap. </li>
<li> Deleting a Node in Treap.</li>
<li> Left Rotation for balancing while performing operations like Insert and Delete.</li>
<li> Right Rotation for balancing while performing operations like Insert and Delete.</li>
<li> Merge two treaps L, R such that all keys of the left tree are smaller than all keys of the right tree.</li>
<li> Split tree T in 2 subtrees L and R trees (which are the return values of split) so that L contains all elements with key XL < X and R has all elements with keys XR > X .
  Before splitting ,  we can insert a node with key 'X' and assign maximum priority to it . Now this node becomes root of the Treap.Now all XL<X keys must be found in left subtreap and XR>X in right subtreap. </li>
</ol>
