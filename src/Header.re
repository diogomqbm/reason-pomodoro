[@react.component]
let make = (~seconds, ~currentPhase, ~dispatch) => {
  let label =
    seconds > 0 ?
      switch(currentPhase) {
        | State.Work => "Time to work"
        | State.Play => "Break time"
      }
    : switch(currentPhase) {
      | State.Work => "Ready for a break?"
      | State.Play => "Ready to start working?"
    };

  <h1 onClick={seconds === 0 ? _ => dispatch(State.TogglePhase) : _ => ()}>{label -> React.string}</h1>
};
