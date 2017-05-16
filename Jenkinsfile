
pipeline {
	stages 
	{
		stage('Preparation') 
		{ 
			steps 
			{
	      			checkout scm
	      			checkpoint 'Completed checkout'
			}
   	        }
		stage('Build') 
		{
	      		if (isUnix()) 
			{
				steps
				{
		      			sh "gcc main.c -O2 -Wall -o test"
		      			sh "chmod 755 test"
		      			checkpoint 'Completed Build'
				}
	      		} 
	        	else
	        	{
				step 
				{
		 			sh 'echo "not unix host"'
				}
	        	}
   	        }
   		stage('Results') 
		{
			steps 
			{
				sh './test'
				archiveArtifacts artifacts: 'test'
			}
		}
	}
}

