module.exports = {
    nets: {
        from: undefined,
        to: undefined
    },
    params: {
        class: 'D'
    },
    body: p => `
  
    (module ComboDiode (layer F.Cu) (tedit 5B24D78E)


        ${p.at /* parametric position */}

        ${'' /* footprint reference */}
        (fp_text reference "${p.ref}" (at 0 0) (layer B.SilkS) ${p.ref_hide} (effects (font (size 1.27 1.27) (thickness 0.15))))
        (fp_text value "" (at 0 0) (layer B.SilkS) hide (effects (font (size 1.27 1.27) (thickness 0.15))))
        
        ${''/* large diode symbols */}
        (fp_line (start 0.25 0.4) (end -0.35 0) (layer B.SilkS) (width 0.1))
        (fp_line (start 0.25 -0.4) (end 0.25 0.4) (layer B.SilkS) (width 0.1))
        (fp_line (start -0.35 0) (end 0.25 -0.4) (layer B.SilkS) (width 0.1))
        (fp_line (start -0.5 0) (end -0.5 0.7) (layer B.SilkS) (width 0.5))
        (fp_line (start -0.5 0) (end -0.5 -0.7) (layer B.SilkS) (width 0.5))
    
        ${''/* SMD pads on both sides */}
        (pad 1 smd rect (at -1.65 0 ${p.rot}) (size 1 1.5) (layers F.Cu F.Paste F.Mask) ${p.net.to.str})
        (pad 2 smd rect (at 1.65 0 ${p.rot}) (size 1 1.5) (layers B.Cu B.Paste B.Mask) ${p.net.from.str})
        (pad 1 smd rect (at -1.65 0 ${p.rot}) (size 1 1.5) (layers B.Cu B.Paste B.Mask) ${p.net.to.str})
    )
  
    `
}
//        (pad 2 smd rect (at 1.65 0 ${p.rot}) (size 1 1.5) (layers F.Cu F.Paste F.Mask) ${p.net.from.str})
/*
 * 
        (fp_line (start 0.25 0.4) (end -0.35 0) (layer F.SilkS) (width 0.1))
        (fp_line (start 0.25 -0.4) (end 0.25 0.4) (layer F.SilkS) (width 0.1))
        (fp_line (start -0.35 0) (end 0.25 -0.4) (layer F.SilkS) (width 0.1))
        (fp_line (start -0.5 0) (end -0.5 0.7) (layer F.SilkS) (width 0.5))
        (fp_line (start -0.5 0) (end -0.5 -0.7) (layer F.SilkS) (width 0.51))
        * 
        */
        
