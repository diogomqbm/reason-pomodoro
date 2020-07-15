[@react.component]
let make = (~phase, ~value, ~onChange) =>
  <div className="edit-time">
    <span className="edit-time-label">{phase -> React.string}</span>
    <input
      type_="number"
      value={string_of_int(value)}
      onChange={e => e->ReactEvent.Form.target##value |> onChange}
    />
  </div>
