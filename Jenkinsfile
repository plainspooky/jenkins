pipeline {
    agent any 

    stages {
        stage('Check') {
            steps {
                git branch: 'jenkinsfile', url: 'https://github.com/plainspooky/jenkins/'
            }
        }
        stage('Build') { 
            steps { 
                sh 'cd git-example ; sh ./build' 
            }
        }
        stage('Test'){
            steps {
                sh 'sh ./test'
                junit 'reports/**/*.xml' 
            }
        }
        stage('Deploy') {
            steps {
                sh 'echo "Deploy..."'
            }
        }
    }
}
