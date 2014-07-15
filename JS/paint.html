<!DOCTYPE html>
<head>
<link rel="stylesheet" href="/assets/css/table.css"/>
<script src="/assets/js/jquery.js"></script>

<style>
html, body {
	width: 100%;
	height: 100%;
}

#sketch {
	border: 10px solid gray;
	height: 100%;
	position: relative;
}

#tmp_canvas {
	position: absolute;
	left: 0px; right: 0;
	bottom: 0; top: 0;
	cursor: crosshair;
}
</style>
</head>
<body>
<div id="sketch">
	<canvas id="paint"></canvas>
</div>
<button id="randomColor">Change color</button>
<script>
var ctx;
(function() {
    
	var canvas = document.querySelector('#paint');
	 ctx = canvas.getContext('2d');
	
	var sketch = document.querySelector('#sketch');
	var sketch_style = getComputedStyle(sketch);
	canvas.width = parseInt(sketch_style.getPropertyValue('width'));
	canvas.height = parseInt(sketch_style.getPropertyValue('height'));

	var mouse = {x: 0, y: 0};
	 
	/* Mouse Capturing Work */
	canvas.addEventListener('mousemove', function(e) {
		mouse.x = e.pageX - this.offsetLeft;
		mouse.y = e.pageY - this.offsetTop;
	}, false);
	
	/* Drawing on Paint App */
	ctx.lineWidth = 5;
	ctx.lineJoin = 'round';
	ctx.lineCap = 'round';
	ctx.strokeStyle = 'blue';
	 
	canvas.addEventListener('mousedown', function(e) {
			ctx.beginPath();
			ctx.moveTo(mouse.x, mouse.y);
	 
			canvas.addEventListener('mousemove', onPaint, false);
	}, false);
	 
	canvas.addEventListener('mouseup', function() {
			canvas.removeEventListener('mousemove', onPaint, false);
	}, false);
	 
	var onPaint = function() {
			ctx.lineTo(mouse.x, mouse.y);
			ctx.stroke();
	};
	
}());


 $('#randomColor').click(function(){
	ctx.strokeStyle = getRandomColor();
	return true;
});

function getRandomColor() {
    var letters = '0123456789ABCDEF'.split('');
    var color = '#';
    for (var i = 0; i < 6; i++ ) {
        color += letters[Math.floor(Math.random() * 16)];
    }
    return color;
}

</script>
</body>
</html>
