ReactDOMRe.renderToElementWithId(<App />, "root");

type parcelModule;
type hot;
[@bs.val] external parcelModule : parcelModule = "module";
[@bs.get] external hot : parcelModule => Js.nullable(hot) = "hot";
[@bs.send.pipe : hot] external accept : unit => unit = "accept";

switch (Js.Nullable.toOption(parcelModule |> hot)) {
  | Some(h) => h |> accept()
  | _ => Js.log("We are not hot")
};
