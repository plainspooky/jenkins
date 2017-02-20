# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config| 
  config.vm.box = "ubuntu/xenial64"
  config.vm.network "forwarded_port", guest: 8080, host: 8080

  config.vm.provider "virtualbox" do |vb|
    vb.customize ["modifyvm", :id, "--memory", "2048"]
    vb.customize ["modifyvm", :id, "--cpus", "2"]
  end

  config.vm.provision "shell", inline: <<-SHELL
    ln -sf /usr/share/zoneinfo/Brazil/East /etc/localtime
    dpkg-reconfigure -f noninteractive tzdata
    curl --silent https://pkg.jenkins.io/debian-stable/jenkins.io.key | apt-key add -
    echo 'deb https://pkg.jenkins.io/debian-stable binary/' > /etc/apt/sources.list.d/jenkins.list
    apt-get update && apt-get --yes upgrade
    apt-get --yes install jenkins
    curl --silent http://localhost:8080 2>/dev/null
    while [ ! -f /var/lib/jenkins/secrets/initialAdminPassword ] ; do sleep 1 ; done
    cat /var/lib/jenkins/secrets/initialAdminPassword
SHELL

end
