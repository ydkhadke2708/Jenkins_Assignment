pipeline {
	agent any

	stages {
		stage('compile') {
			steps {
				sh 'make'
				sh './a.out'

			}
		}
	}
}

