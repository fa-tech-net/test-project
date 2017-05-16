
pipeline {
	stages {
		stage('Preparation') { // for display purposes
	      	// Get some code from a GitHub repository
	      	checkout scm
	      	checkpoint 'Completed checkout'

   	}
	stage('Build') {
	      // Run the maven build
	      if (isUnix()) {
		      sh "gcc main.c -O2 -Wall -o test"
		      sh "chmod 755 test"
		checkpoint 'Completed Build'
	      } 
	      else 
	      {
		 sh 'echo "not unix host"'
	      }
   	}
		
   stage('Results') {
	sh './test'
	rchiveArtifacts artifacts: 'test'
		}
	}
}
}
