
pipeline {
	stages 
	{
		stage('Preparation') 
		{ 
	      		checkout scm
	      		checkpoint 'Completed checkout'
   	        }
		stage('Build') 
		{
	      		if (isUnix()) 
			{
		      		sh "gcc main.c -O2 -Wall -o test"
		      		sh "chmod 755 test"
		      		checkpoint 'Completed Build'
	      		} 
	        	else
	        	{
		 		sh 'echo "not unix host"'
	        	}
   	        }
   		stage('Results') 
		{
			sh './test'
			archiveArtifacts artifacts: 'test'
		}
	}
}

