//클래스
class Person{
    constructor(name, age){
        this.name = name;
        this.age = age;
    }
    methodName(){
        console.log(`hello, my name is ${this.name} and I am ${this.age} years old`);
    }
};

const Alice = new Person('Alice','9')
Alice.methodName();

class Rectangle{
    constructor(height, width){
        this._height = height;//_~ -> private 속성처럼 사용한다는 느낌. 참조는 가능함. 
        this,width = width;
    }
    get height(){
        return this._height +10;
    }
    set height(value){
        if (value > 0){
            this._height = value;
        }
        else{
            console.log("높이는 0보다 커야겠죠?");
        }
    }
};

const rec = new Rectangle(178,150);
console.log(rec.height);
rec.height = 190;
console.log(rec.height);
//getter setter는 함수쓰듯이 쓰는게 아님.


const person = {
    name : 'Mike',
    age : 20,
};
console.log(person.name);
console.log(person.age);


const obj = {
    'pizza': '🍕',
    'chicken': '🍗',
    'meat': '🍖'
  };

for (const key in obj) { //for .. in -> key값으로 순회
console.log(key); // 속성(key) 출력
console.log(obj[key]); // 값(value) 출력
}

const array = ['🍕', '🍗', '🍖'];

for (const value of array) { //for .. of -> value로 순회.
console.log(value); // 배열의 요소 값 출력
}  

// let json = JSON.stringify(true);
// console.log(json); // 출력: "true" (bool형이 아닌 str형)

let json = JSON.stringify(rabbit, ['name', 'color', 'size']);
console.log(json); // 출력: {"name":"tori","color":"white","size":null}