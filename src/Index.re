open Reprocessing;

let blockSize = 40;
let padding = 20;

let setup = env => {
  Env.size(~width=600, ~height=600, env);
  Array.make_matrix(4, 4, 0);
};

let draw = (state, env) => {
  Draw.background(Constants.black, env);
  Draw.fill(Constants.blue, env);
  Array.iteri(
    (y, row) =>
      Array.iteri(
        (x, n) =>
          Draw.rect(
            ~pos=(padding + x * (blockSize + padding), padding + y * (padding + blockSize)),
            ~width=blockSize,
            ~height=blockSize,
            env,
          ),
        row,
      ),
    state,
  );
  state;
};
run(~setup, ~draw, ());
