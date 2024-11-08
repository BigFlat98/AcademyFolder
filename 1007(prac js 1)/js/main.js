'use script'


let textcolorchangeEX = document.querySelector('#textcolorchangeEX');
textcolorchangeEX.onclick = function(){
    textcolorchangeEX.style.color = "red";
}// 찾은 값을 heading변수 안에 넣고 변수에 저장된 부분이 클릭되면 함수를 실행


const text = document.getElementById('text'); //getElementById는 엘리멘트의 id를 찾는 메소드기 때문에 #을 붙일 필요 없음
text.onclick = function(){
    text.style.color = "green";
}
text.onmouseleave = function(){
    text.style.textAlign = "center";
}

const at = document.getElementById('at');
at.onmouseover = function(){
    text.style.textAlign = "end";
}
at.onclick = function(){
    text.style.textAlign = "end";
}

let name = prompt("write your name."); //접속 시 상단에 알림창이 나옴
document.write(name); //이건 오류남. write메소드는 동기적 상황에서만 작동함. 
                    //지금 같은 경우 defer상태인 스크립트 안에서 실행됐고 동기적인 상황 종료 후 비동기 적인 상태에 진입해서 실행됐기 때문에 작동을 안함
                    //사용하고 싶다면 body상단에 작성해 줘야함





