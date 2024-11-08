        const check = document.querySelector("#btn");
            let cont = document.querySelector(".contents");
            check.addEventListener("click",switchBtn);


            function switchBtn(){
                if (btn.classList.contains("open")) {//객체에 저장된 엘리멘트의 클래스에 인자로 적은 값과 동일한게 있다면 true리턴
                    //버튼을 눌렀을 때 클래스가 open으로 돼있으면 close로 바꾸고 display none처리
                    btn.classList.add("close");
                    btn.classList.remove("open");
                    cont.style.display="none";
                } 
                else if(btn.classList.contains("close")){
                    //위와 반대 동작
                    btn.classList.add("open");
                    btn.classList.remove("close");
                    cont.style.display="block";
                }
            }
            cont.onmouseover = function (){
                //걍 마우스 올렸을 때 스타일 적용 연습
                cont.style.border = "5px solid black";
            }
            cont.onmouseout = function (){
                //마우스 나갔을 때 연습
                cont.style.border = "none";
            }

//------------------------------------------------------------------

//report
    const btnForOpen = document.querySelector("#open_btn");
    const btnForClose = document.querySelector("#close_btn");
    btnForOpen.addEventListener("click",function(){
        document.querySelector(".container .main_contents").style.display ="block";
        btnForOpen.style.display = "none";
    })
    btnForClose.addEventListener("click",function(){
        document.querySelector(".container .main_contents").style.display ="none";
        btnForOpen.style.display = "block";
    })