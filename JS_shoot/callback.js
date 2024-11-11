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


// //음식 주문 -> 음식 요리 -> 테이블로 서빙  비동기 처리
// function orderFood(food){
//     return new Promise((resolve)=> {
//         console.log(`got order ${food}`)
//         setTimeout(()=>{
//             resolve(`${food} done`)
//         },2000)//2초후 주문 완료
//     })
// }

// function serveFood(food){
//     return new Promise((resolve) => {
//         console.log(`${food} serving now`)
//         setTimeout(()=>{
//             resolve(`${food} serve done`)
//         },1000)
//     })
// }

// //async 와 await 사용
// async function placeOrder(){ 
//     const orderFood = await orderFood('pizza'); //await이 있으면 비동기 함수가 완료되고 다음 함수가 실행이 됨. 
//     console.log(orderFood)
//     const servedFood = await serveFood('pizza');//즉 비동기 처리를 하고 결과 출력을 동기식으로 하는 것.
//     console.log(serveFood);
// }//비동기 처리를 하면 작성 순서에 상관 없이 먼저 완료된 작업의 결과가 먼저 출력되기 때문에 결과 리턴 순서가 의도에 맞지 않을 수 있음.
 //그래서 비동기 처리하는 작업들을 순서에 맞게 결과가 리턴되도록 하기위해 Promise를 사용해서 then을 여러번 사용해야 하지만
 //async 에서 await을 사용해서 처리는 비동기로 하되, 결과를 동기처리처럼 보이게 할 수 있다. 이편이 더 직관적으로 보이고 코드도 간단함.


// placeOrder();

// 음식 주문
// 음식 주문 -> 음식을 요리 -> 테이블로 서빙

//  비동기 작업에 대한 함수를 예시
function oderFood(food) {
    return new Promise((resolve) =>{
      console.log(`주문을 받았습니다.(${food})`)
      setTimeout(() =>{
        resolve(`${food} 준비 완료`)
      }, 2000) // 2초후에 주문 완료
    })
  }
  
  function serveFood(food) {
    return new Promise((resolve) =>{
      console.log(`${food} 서빙중...`)
      setTimeout(()=>{
        resolve(`${food} 서빙 완료`)
      }, 1000)
    })
  }
  
  // async 와 await 사용
  async function placeOder() {
    const oderedFood = await oderFood('피자');
    console.log(oderedFood)
    const servedFood = await serveFood("피자");
    console.log(servedFood);
  }
  
  placeOder()
