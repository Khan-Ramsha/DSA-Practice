//   public:
// 	void shortest_distance(vector<vector<int>>&matrix){
// 	    int n=matrix.size();
// 	    for(int i=0;i<n;i++){
// 	        for(int j=0;j<n;j++){
// 	            if(matrix[i][j]==-1){
// 	                matrix[i][j]=1e8;
// 	            }
// 	         if(i==j){
// 	             matrix[i][j]=0;//diagonal elements
// 	         }
// 	        }
// 	    }
// 	    for(int k=0;k<n;k++)
// 	    {
//     	    for(int i=0;i<n;i++){
//     	        for(int j=0;j<n;j++){
//     	            matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
//     	        }
//     	    }
// 	    }
	    //DETECTING THE NEGATIVE CYCLE
        // for(int i=0;i<n;i++){
        //     if(matrix[i][i]<0){
        //         cout<<"neg cycle!!"
        //     }
        // }
	   
// 	   for(int i=0;i<n;i++)
// 	   {
// 	       for(int j=0;j<n;j++)
// 	       {
// 	           if(matrix[i][j]==1e8)
// 	           {
// 	               matrix[i][j]=-1;
	                    
// 	           }
// 	        }
// 	   }
	    
	         
	    
// 	}


