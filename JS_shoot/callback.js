console.log(1);
setTimeout(delayPrint,1000); //대표적인 비동기 함수. setTimeoust에 파라미터로 들어오는 함수를 1초 뒤에 실행. 근데 그동안 밑에 있는 코드들이 실행됨.
console.log(3);


function delayPrint(){
    console.log(2);
}

const myPromise = new Promise((resolve,reject) =>{
    const condition = true;
    if (condition) {
        resolve('성공');
    }
    else{
        reject('실패');
    }
} );

myPromise.then(res => {
    console.log(res);
}).catch(err => {
    console.error(err);
})


