module.exports = {
    nets: {
        from: undefined,
        to: undefined
    },
    params: {
      class: 'BB', //for Big Button
	  side: 'F'
    },
    body: p => `   
    (module E73:SW_TACT_ALPS_SKQGABE010 (layer F.Cu) (tstamp 5BF2CC94)
        ${p.at /* parametric position */} 

        ${'' /* footprint reference */}        
        (fp_text reference "${p.ref}" (at 0 0) (layer F.SilkS) ${p.ref_hide} (effects (font (size 1.27 1.27) (thickness 0.15))))
        (fp_text value Button (at 0 -7.3) (layer F.Fab) (effects (font (size 1 1) (thickness 0.15))))

        ${'' /* pins */}
        (pad 1 smd rect (at -0.7 0 ${p.rot}) (size 0.7 1.143) (layers ${p.param.side}.Cu ${p.param.side}.Paste ${p.param.side}.Mask)
        (clearance 0.1905) ${p.net.from.str})
        (pad 2 smd rect (at 0.7 0 ${p.rot}) (size 0.7 1.143) (layers ${p.param.side}.Cu ${p.param.side}.Paste ${p.param.side}.Mask)
        (clearance 0.1905) ${p.net.to.str}))
    `
}
