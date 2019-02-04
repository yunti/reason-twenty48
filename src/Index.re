open Reprocessing;

let setup = env => {
  Env.size(~width=600, ~height=600, env);
};

let draw = (_state, env) => {
  Draw.background(Constants.black, env);
  Draw.fill(Constants.blue, env);
  Draw.rect(~pos=(150, 150), ~width=300, ~height=300, env);
};

run(~setup, ~draw, ());
