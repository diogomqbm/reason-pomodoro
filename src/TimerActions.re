[@react.component]
let make = (~dispatch, ~isTicking) =>
  <div className="buttons">
    <button onClick={_ => dispatch(State.Reset)}>
      <span className="fas fa-stop" />
    </button>
    {isTicking ?
      <button onClick={_ => dispatch(State.Stop)}>
        <span className="fas fa-pause" />
      </button>
      :
      <button onClick={_ => dispatch(State.Start)}>
        <span className="fas fa-play" />
      </button>
    }
  </div>
