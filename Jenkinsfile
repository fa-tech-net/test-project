
node {
   def mvnHome
   stage('Preparation') { // for display purposes
      // Get some code from a GitHub repository
      checkout scm
      //git 'https://github.com/fa-tech-net/test-project.git'
      // Get the Maven tool.
      // ** NOTE: This 'M3' Maven tool must be configured
      // **       in the global configuration.           
   }
   stage('Build') {
      // Run the maven build
      if (isUnix()) {
         sh "gcc main.c -O2 -Wall -o test"
	 sh "chmod 755 test"
      } else {
         sh 'echo "not unix host"'
		 
      }
   }
   stage('Results') {
		sh './test'
		archiveArtifacts artifacts: 'test'
	}
}
