
pipeline {
	agent any
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
			steps
			{
				
				sh "gcc main.c -O2 -Wall -o test"
				sh "chmod 755 test"
				checkpoint 'Completed Build'
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

