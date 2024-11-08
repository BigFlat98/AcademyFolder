'use script'




let name = prompt("write your name."); //접속 시 상단에 알림창이 나옴
console.log(name);
document.write(name); //이건 오류남. write메소드는 동기적 상황에서만 작동함. 
                    //지금 같은 경우 defer상태인 스크립트 안에서 실행됐고 동기적인 상황 종료 후 비동기 적인 상태에 진입해서 실행됐기 때문에 작동을 안함





