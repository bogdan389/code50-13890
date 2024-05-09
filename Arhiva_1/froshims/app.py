export FLASK_APP=app.py
from flask import Flask, render_template, request

app = Flask(__name__)

SPORT = ["Basketball", "Football", "Soccer", "Ultimate Frisbee"]


@app.route('/')
def index():
    return render_templates("index.html", sports=SPORTS)


@app.route("/register")
def register():
    if not request.form.grt("name") or not request.form.get("sport"):
        return render_template("failuer.html")
     return render_template("succes.html")
