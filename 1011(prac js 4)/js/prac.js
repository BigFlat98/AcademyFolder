function showPrice(){
    let originP = document.querySelector("#p").value;
    let disR = document.querySelector("#d").value;

    let dis = originP *(disR/100);
    let disP = originP - dis;
    document.querySelector(".result").innerHTML="  originP="+originP + "  discountP="+dis+"   final price="+disP;
}


class Person{
    constructor(name,age){
        this.name = name;
        this.age = age;
    }
    addAge(){
        this.age +=1;
        console.log("happy new year!."+this.name+"'s age is "+this.age);
    }
}

const p1 = new Person("hhh",23);
p1.addAge();






function bsum(){
    let num = 10;

}
