pipeline {
    agent any 

    stages {
        stage('Build') { 
            steps { 
                sh 'cd git-example ; sh ./build' 
            }
        }
        stage('Test'){
            steps {
                sh 'cd git-example ; sh ./test'
            }
        }
       stage('Sanity check') {
            steps {
                input "Tudo parece ok?"
            }
        }
        stage('Deploy') {
            steps {
                sh 'echo "Deploy..."'
            }
        }
    }
}
