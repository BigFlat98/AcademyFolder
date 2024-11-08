        // alert("hello");
        //접속 시 상단에 알림창 나옴

        function calc(){
            let currentYear = 2024;
            let birthYear = prompt("write your birth year","YYYY");
            let age;
            age = currentYear - birthYear +1;
            
            if(birthYear<currentYear&&birthYear>1900){
                document.querySelector("#result").innerHTML="your age is " + age;
                //innerHTML은 querySelector로 찾는 박스 안에 대입 연산자 오른쪽 값을 넣도록 한다.
                //***값을 넣는 태그 안에 있는 값(여기서는 태그 안에 있는 result라는 글자가 innerHTML로 넣는 값으로 바뀜***
            }
            else{
                alert("wt?, it is impossible");
            }

        }

        function calc2(){
            let currentYear = prompt("write current year","YYYY");
            if((currentYear % 4 == 0&&currentYear % 100 != 0)||(currentYear % 400 == 0)){
                document.querySelector("#result2").innerHTML="this year is lear year";
            }
            else{
                document.querySelector("#result2").innerHTML="normal year";
            }
            
        }
        
        let a = [1,'c',"아아"];
        console.log(a);
        //배열

        let Kim = {
            firstName: "Juan",
            lastName: "nueves",
            age: 20
        }


        function calPrice(){
            let p = document.querySelector("#price").value;
            let r = document.querySelector("#rate").value;
            let f = p*(r/100);
            let goal = p -f;

            document.querySelector(".showResult").innerHTML="가격은 "+p+" 이고 할인율은 "+r+". <br />할인 가격은 "+f +"<br />상품 가격은 "+ goal;
        }

        function letsmakearac(){
            //if((v<=550&&v>=50)&&(h<=550&&h>=50)){
                let v = document.querySelector("#ver").value;
                let h = document.querySelector("#ho").value;
                let rac = document.getElementById("rac");
                rac.style.display = "block";
                rac.style.width = h+"px";
                rac.style.height = v+"px";
            // }
            // else{
            //     alert("다시 만드쇼. 50~550");
            // }
            
        }


