class InstanceEvalMethod
    def initialize name
      @name = name
    end
    def dogs
      puts "My name is " + name 
    end
  
    attr_reader :name
  end
  
  dogs = InstanceEvalMethod.new "wakanda forever"
  
  if dogs.respond_to? :dogs, true
     dogs.instance_eval do 
         puts @name
     end
  else
    puts "No method invalid"
  end