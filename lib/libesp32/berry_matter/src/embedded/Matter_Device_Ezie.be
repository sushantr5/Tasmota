
#@ solidify:Matter_Device_Ezie,weak

class Matter_Device_Ezie :  Matter_Device
  def init()
    print("---------EZIE Matter Device Init")
    super(self).init()
  end

  def autoconf_device()
    print("---------EZIE Matter Device autoconf_device")
    #super(self).autoconf_device()
  end
end

matter.Device = Matter_Device_Ezie