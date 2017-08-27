# Author : David L. Johnson <dlj0@lehigh.edu>
# Probably broken by Jean-Marc Lasgouttes <Jean-Marc.Lasgouttes@inria.fr>
# modified and modularized by Emmanuel GUREGHIAN <gureghia@boston.bertin.fr>
# This version has Theorems and other results numbered in one sequence, and all
# numbered environments (figures as well) containing the section number.
# (Themorem (1.1), Corollary (1.2) Theorem (1.3), etc.
# These are only the theorems styles environnements
# Tinkered with Sep. '07 by Paul Rubin <rubin@msu.edu>
# Modularized Jan 08 by Richard Heck <rgheck@comcast.net>

Format 60

Style Proof
	Category              Reasoning
	Margin                First_Dynamic
	LatexType             Environment
	LatexName             proof
	NextNoIndent          1
	ResetArgs             1
	Argument 1
		LabelString   "Alternative Proof String"
		Tooltip       "Alternative proof string"
	EndArgument
	LabelSep              xx
	ParIndent             MMM
	ParSkip               0.4
	ItemSep               0.2
	TopSep                0.7
	BottomSep             0.7
	ParSep                0.3
	Align                 Block
	AlignPossible         Block, Left
	LabelType             Static
	LabelString           "Proof."
	EndLabelType          Box
	Font
	  Shape               Up
	  Size                Normal
	EndFont
	LabelFont
	  Shape               Up
	EndFont
    Preamble
        %\makeatletter
        \renewenvironment{proof}[1][\proofname]{\par
            %\vspace{-0.3\topsep}% remove the space after the theorem
            \vspace{-\parskip}
            \pushQED{\qed}%
            \normalfont
            \topsep0pt \partopsep0pt % no space before
            \trivlist
            \item[\hskip\labelsep
            %  #1\@addpunct{.}\hskip 1em]\ignorespaces
                #1.\hskip 0.5em plus 1pt minus 1pt]\ignorespaces
        }{%
            \popQED\endtrivlist\@endpefalse
            %\addvspace{6pt plus 6pt} % some space after
            \addvspace{6pt plus 2pt} % some space after
        }
        %\makeatother
    EndPreamble
	#Preamble
	#	%\expandafter\let\expandafter\oldproof\csname\string\proof\endcsname
	#	%\let\oldendproof\endproof
	#	%\renewenvironment{proof}[1][\proofname]{%
	#	%  \vspace{-1.0\topsep}% remove space before the proof
	#	%  \oldproof[\upshape #1]% \scshape
    #    %   \vspace{\parskip}% remove space after the proof
	#	%}{\oldendproof}
    #    
    #    %\makeatletter
    #    %\renewenvironment{proof}[1][\proofname]{\par
    #    %    %\vspace{-0.3\topsep}% remove the space after the theorem
    #    %    \vspace{-\parskip}
    #    %    \pushQED{\qed}%
    #    %    \normalfont
    #    %    \topsep0pt \partopsep0pt % no space before
    #    %    \trivlist
    #    %    \item[\hskip\labelsep
    #    %    %  #1\@addpunct{.}\hskip 1em]\ignorespaces
    #    %        #1.\hskip 0.5em plus 1pt minus 1pt]\ignorespaces
    #    %}{%
    #    %    \popQED\endtrivlist\@endpefalse
    #    %    \addvspace{6pt plus 6pt} % some space after
    #    %}
    #    %\makeatother
    #    
    #    \makeatletter
    #    \renewenvironment{proof}[1][\proofname]{\par
    #      \vspace{-\topsep}% remove the space after the theorem
    #      \pushQED{\qed}%
    #      \normalfont
    #      \topsep0pt \partopsep0pt % no space before
    #      \trivlist
    #      \item[\hskip\labelsep
    #        #1\@addpunct{.}]\ignorespaces
    #    }{%
    #      \popQED\endtrivlist\@endpefalse
    #      \addvspace{6pt plus 6pt} % some space after
    #    }
    #    \makeatother
	#EndPreamble
End

